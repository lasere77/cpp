#pragma once

class Fixed
{
	public:
		Fixed();
		Fixed& operator=(const Fixed &copy);
		Fixed(const Fixed &copy);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int	fp_number;
		static const unsigned char	fractional_bits = 8;
};