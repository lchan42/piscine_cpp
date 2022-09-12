/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:15:33 by lchan             #+#    #+#             */
/*   Updated: 2022/09/12 18:18:42 by lchan            ###   ########.fr       */
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

#endif
