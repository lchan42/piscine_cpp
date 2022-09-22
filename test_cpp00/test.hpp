/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:15:33 by lchan             #+#    #+#             */
/*   Updated: 2022/09/21 18:26:33 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP

class Sample
{
	public:

		int	test_var;

		Sample(void);
		~Sample(void);

		void test_function(void);
};

class Sample2
{
	public:

		int		a;
		double	b;
		float	c;

		Sample2(int p1, double p2, float p3);
		~Sample2(void);

		int		getVar (void) const;
		void	setVar(int v);
		int		compareVar (Sample2 *other) const;


	private:
		int			_var;
		static int 	_nbInst;
};

class Sample3
{
	public:

		Sample3();
		~Sample3();
		static int	getnbInst(void);

	private:
		static int _nbInst;
};

class Sample4
{
	public:

		int		foo;

		Sample4();
		~Sample4();

		void	bar(void) const;
	private:
};

class Integer {

	public :
		Integer( int const n );
		~Integer(void);

		int getValue( void ) const;

		Integer	&	operator=( Integer const & rhs ); 	// la fonction a pour vovation de modifier l une des valeurs de l instance courante
														//Integer & -> la fonction renvoie une reference sur l'instance courante
														//permet de faire a = b = c = d; (ici il est necessaire de faire les verifications une par une)
		Integer	operator+( Integer const & rhs )const ; //instance courange non modifie donc la fonction est const
	private :
		int	_n;
};
//right hand side


class Simple {

	public :
		Simple( void );
		Simple( int const n );
		Simple( Sample const & src); //
		~Simple( void );

		Simple &	operator=( Simple const & rhs );

		int	getFoo () const;
	private :
		int	foo;


};

	std::ostream &	operator<<(std::ostream o, Simple const & i );

#endif

