#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0055A950
// Address: 0x55a950 - 0x55ac30
void sub_0055A950_0x55a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0055A950_0x55a950");
#endif

    switch (ctx->pc) {
        case 0x55a950u: goto label_55a950;
        case 0x55a954u: goto label_55a954;
        case 0x55a958u: goto label_55a958;
        case 0x55a95cu: goto label_55a95c;
        case 0x55a960u: goto label_55a960;
        case 0x55a964u: goto label_55a964;
        case 0x55a968u: goto label_55a968;
        case 0x55a96cu: goto label_55a96c;
        case 0x55a970u: goto label_55a970;
        case 0x55a974u: goto label_55a974;
        case 0x55a978u: goto label_55a978;
        case 0x55a97cu: goto label_55a97c;
        case 0x55a980u: goto label_55a980;
        case 0x55a984u: goto label_55a984;
        case 0x55a988u: goto label_55a988;
        case 0x55a98cu: goto label_55a98c;
        case 0x55a990u: goto label_55a990;
        case 0x55a994u: goto label_55a994;
        case 0x55a998u: goto label_55a998;
        case 0x55a99cu: goto label_55a99c;
        case 0x55a9a0u: goto label_55a9a0;
        case 0x55a9a4u: goto label_55a9a4;
        case 0x55a9a8u: goto label_55a9a8;
        case 0x55a9acu: goto label_55a9ac;
        case 0x55a9b0u: goto label_55a9b0;
        case 0x55a9b4u: goto label_55a9b4;
        case 0x55a9b8u: goto label_55a9b8;
        case 0x55a9bcu: goto label_55a9bc;
        case 0x55a9c0u: goto label_55a9c0;
        case 0x55a9c4u: goto label_55a9c4;
        case 0x55a9c8u: goto label_55a9c8;
        case 0x55a9ccu: goto label_55a9cc;
        case 0x55a9d0u: goto label_55a9d0;
        case 0x55a9d4u: goto label_55a9d4;
        case 0x55a9d8u: goto label_55a9d8;
        case 0x55a9dcu: goto label_55a9dc;
        case 0x55a9e0u: goto label_55a9e0;
        case 0x55a9e4u: goto label_55a9e4;
        case 0x55a9e8u: goto label_55a9e8;
        case 0x55a9ecu: goto label_55a9ec;
        case 0x55a9f0u: goto label_55a9f0;
        case 0x55a9f4u: goto label_55a9f4;
        case 0x55a9f8u: goto label_55a9f8;
        case 0x55a9fcu: goto label_55a9fc;
        case 0x55aa00u: goto label_55aa00;
        case 0x55aa04u: goto label_55aa04;
        case 0x55aa08u: goto label_55aa08;
        case 0x55aa0cu: goto label_55aa0c;
        case 0x55aa10u: goto label_55aa10;
        case 0x55aa14u: goto label_55aa14;
        case 0x55aa18u: goto label_55aa18;
        case 0x55aa1cu: goto label_55aa1c;
        case 0x55aa20u: goto label_55aa20;
        case 0x55aa24u: goto label_55aa24;
        case 0x55aa28u: goto label_55aa28;
        case 0x55aa2cu: goto label_55aa2c;
        case 0x55aa30u: goto label_55aa30;
        case 0x55aa34u: goto label_55aa34;
        case 0x55aa38u: goto label_55aa38;
        case 0x55aa3cu: goto label_55aa3c;
        case 0x55aa40u: goto label_55aa40;
        case 0x55aa44u: goto label_55aa44;
        case 0x55aa48u: goto label_55aa48;
        case 0x55aa4cu: goto label_55aa4c;
        case 0x55aa50u: goto label_55aa50;
        case 0x55aa54u: goto label_55aa54;
        case 0x55aa58u: goto label_55aa58;
        case 0x55aa5cu: goto label_55aa5c;
        case 0x55aa60u: goto label_55aa60;
        case 0x55aa64u: goto label_55aa64;
        case 0x55aa68u: goto label_55aa68;
        case 0x55aa6cu: goto label_55aa6c;
        case 0x55aa70u: goto label_55aa70;
        case 0x55aa74u: goto label_55aa74;
        case 0x55aa78u: goto label_55aa78;
        case 0x55aa7cu: goto label_55aa7c;
        case 0x55aa80u: goto label_55aa80;
        case 0x55aa84u: goto label_55aa84;
        case 0x55aa88u: goto label_55aa88;
        case 0x55aa8cu: goto label_55aa8c;
        case 0x55aa90u: goto label_55aa90;
        case 0x55aa94u: goto label_55aa94;
        case 0x55aa98u: goto label_55aa98;
        case 0x55aa9cu: goto label_55aa9c;
        case 0x55aaa0u: goto label_55aaa0;
        case 0x55aaa4u: goto label_55aaa4;
        case 0x55aaa8u: goto label_55aaa8;
        case 0x55aaacu: goto label_55aaac;
        case 0x55aab0u: goto label_55aab0;
        case 0x55aab4u: goto label_55aab4;
        case 0x55aab8u: goto label_55aab8;
        case 0x55aabcu: goto label_55aabc;
        case 0x55aac0u: goto label_55aac0;
        case 0x55aac4u: goto label_55aac4;
        case 0x55aac8u: goto label_55aac8;
        case 0x55aaccu: goto label_55aacc;
        case 0x55aad0u: goto label_55aad0;
        case 0x55aad4u: goto label_55aad4;
        case 0x55aad8u: goto label_55aad8;
        case 0x55aadcu: goto label_55aadc;
        case 0x55aae0u: goto label_55aae0;
        case 0x55aae4u: goto label_55aae4;
        case 0x55aae8u: goto label_55aae8;
        case 0x55aaecu: goto label_55aaec;
        case 0x55aaf0u: goto label_55aaf0;
        case 0x55aaf4u: goto label_55aaf4;
        case 0x55aaf8u: goto label_55aaf8;
        case 0x55aafcu: goto label_55aafc;
        case 0x55ab00u: goto label_55ab00;
        case 0x55ab04u: goto label_55ab04;
        case 0x55ab08u: goto label_55ab08;
        case 0x55ab0cu: goto label_55ab0c;
        case 0x55ab10u: goto label_55ab10;
        case 0x55ab14u: goto label_55ab14;
        case 0x55ab18u: goto label_55ab18;
        case 0x55ab1cu: goto label_55ab1c;
        case 0x55ab20u: goto label_55ab20;
        case 0x55ab24u: goto label_55ab24;
        case 0x55ab28u: goto label_55ab28;
        case 0x55ab2cu: goto label_55ab2c;
        case 0x55ab30u: goto label_55ab30;
        case 0x55ab34u: goto label_55ab34;
        case 0x55ab38u: goto label_55ab38;
        case 0x55ab3cu: goto label_55ab3c;
        case 0x55ab40u: goto label_55ab40;
        case 0x55ab44u: goto label_55ab44;
        case 0x55ab48u: goto label_55ab48;
        case 0x55ab4cu: goto label_55ab4c;
        case 0x55ab50u: goto label_55ab50;
        case 0x55ab54u: goto label_55ab54;
        case 0x55ab58u: goto label_55ab58;
        case 0x55ab5cu: goto label_55ab5c;
        case 0x55ab60u: goto label_55ab60;
        case 0x55ab64u: goto label_55ab64;
        case 0x55ab68u: goto label_55ab68;
        case 0x55ab6cu: goto label_55ab6c;
        case 0x55ab70u: goto label_55ab70;
        case 0x55ab74u: goto label_55ab74;
        case 0x55ab78u: goto label_55ab78;
        case 0x55ab7cu: goto label_55ab7c;
        case 0x55ab80u: goto label_55ab80;
        case 0x55ab84u: goto label_55ab84;
        case 0x55ab88u: goto label_55ab88;
        case 0x55ab8cu: goto label_55ab8c;
        case 0x55ab90u: goto label_55ab90;
        case 0x55ab94u: goto label_55ab94;
        case 0x55ab98u: goto label_55ab98;
        case 0x55ab9cu: goto label_55ab9c;
        case 0x55aba0u: goto label_55aba0;
        case 0x55aba4u: goto label_55aba4;
        case 0x55aba8u: goto label_55aba8;
        case 0x55abacu: goto label_55abac;
        case 0x55abb0u: goto label_55abb0;
        case 0x55abb4u: goto label_55abb4;
        case 0x55abb8u: goto label_55abb8;
        case 0x55abbcu: goto label_55abbc;
        case 0x55abc0u: goto label_55abc0;
        case 0x55abc4u: goto label_55abc4;
        case 0x55abc8u: goto label_55abc8;
        case 0x55abccu: goto label_55abcc;
        case 0x55abd0u: goto label_55abd0;
        case 0x55abd4u: goto label_55abd4;
        case 0x55abd8u: goto label_55abd8;
        case 0x55abdcu: goto label_55abdc;
        case 0x55abe0u: goto label_55abe0;
        case 0x55abe4u: goto label_55abe4;
        case 0x55abe8u: goto label_55abe8;
        case 0x55abecu: goto label_55abec;
        case 0x55abf0u: goto label_55abf0;
        case 0x55abf4u: goto label_55abf4;
        case 0x55abf8u: goto label_55abf8;
        case 0x55abfcu: goto label_55abfc;
        case 0x55ac00u: goto label_55ac00;
        case 0x55ac04u: goto label_55ac04;
        case 0x55ac08u: goto label_55ac08;
        case 0x55ac0cu: goto label_55ac0c;
        case 0x55ac10u: goto label_55ac10;
        case 0x55ac14u: goto label_55ac14;
        case 0x55ac18u: goto label_55ac18;
        case 0x55ac1cu: goto label_55ac1c;
        case 0x55ac20u: goto label_55ac20;
        case 0x55ac24u: goto label_55ac24;
        case 0x55ac28u: goto label_55ac28;
        case 0x55ac2cu: goto label_55ac2c;
        default: break;
    }

    ctx->pc = 0x55a950u;

label_55a950:
    // 0x55a950: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x55a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_55a954:
    // 0x55a954: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55a954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55a958:
    // 0x55a958: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x55a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_55a95c:
    // 0x55a95c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x55a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_55a960:
    // 0x55a960: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x55a960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_55a964:
    // 0x55a964: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x55a964u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_55a968:
    // 0x55a968: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x55a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_55a96c:
    // 0x55a96c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x55a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_55a970:
    // 0x55a970: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x55a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_55a974:
    // 0x55a974: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x55a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_55a978:
    // 0x55a978: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x55a978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_55a97c:
    // 0x55a97c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x55a97cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_55a980:
    // 0x55a980: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x55a980u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_55a984:
    // 0x55a984: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x55a984u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_55a988:
    // 0x55a988: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x55a988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_55a98c:
    // 0x55a98c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x55a98cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_55a990:
    // 0x55a990: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x55a990u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_55a994:
    // 0x55a994: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x55a994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_55a998:
    // 0x55a998: 0x8c5489f0  lw          $s4, -0x7610($v0)
    ctx->pc = 0x55a998u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_55a99c:
    // 0x55a99c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x55a99cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_55a9a0:
    // 0x55a9a0: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x55a9a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_55a9a4:
    // 0x55a9a4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x55a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_55a9a8:
    // 0x55a9a8: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x55a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_55a9ac:
    // 0x55a9ac: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x55a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_55a9b0:
    // 0x55a9b0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x55a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_55a9b4:
    // 0x55a9b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x55a9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_55a9b8:
    // 0x55a9b8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55a9bc:
    // 0x55a9bc: 0xc4419c98  lwc1        $f1, -0x6368($v0)
    ctx->pc = 0x55a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294941848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55a9c0:
    // 0x55a9c0: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x55a9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_55a9c4:
    // 0x55a9c4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x55a9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_55a9c8:
    // 0x55a9c8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x55a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_55a9cc:
    // 0x55a9cc: 0xc4779c9c  lwc1        $f23, -0x6364($v1)
    ctx->pc = 0x55a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294941852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55a9d0:
    // 0x55a9d0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55a9d4:
    // 0x55a9d4: 0xc4409d48  lwc1        $f0, -0x62B8($v0)
    ctx->pc = 0x55a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55a9d8:
    // 0x55a9d8: 0x24f30150  addiu       $s3, $a3, 0x150
    ctx->pc = 0x55a9d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 336));
label_55a9dc:
    // 0x55a9dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x55a9dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_55a9e0:
    // 0x55a9e0: 0x24f20200  addiu       $s2, $a3, 0x200
    ctx->pc = 0x55a9e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
label_55a9e4:
    // 0x55a9e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55a9e8:
    // 0x55a9e8: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x55a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_55a9ec:
    // 0x55a9ec: 0x8084007a  lb          $a0, 0x7A($a0)
    ctx->pc = 0x55a9ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 122)));
label_55a9f0:
    // 0x55a9f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x55a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_55a9f4:
    // 0x55a9f4: 0x2442f3ec  addiu       $v0, $v0, -0xC14
    ctx->pc = 0x55a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964204));
label_55a9f8:
    // 0x55a9f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x55a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_55a9fc:
    // 0x55a9fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x55a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_55aa00:
    // 0x55aa00: 0xc4560000  lwc1        $f22, 0x0($v0)
    ctx->pc = 0x55aa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_55aa04:
    // 0x55aa04: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
label_55aa08:
    if (ctx->pc == 0x55AA08u) {
        ctx->pc = 0x55AA08u;
            // 0x55aa08: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x55AA0Cu;
        goto label_55aa0c;
    }
    ctx->pc = 0x55AA04u;
    {
        const bool branch_taken_0x55aa04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x55AA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AA04u;
            // 0x55aa08: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55aa04) {
            ctx->pc = 0x55AA14u;
            goto label_55aa14;
        }
    }
    ctx->pc = 0x55AA0Cu;
label_55aa0c:
    // 0x55aa0c: 0x10000079  b           . + 4 + (0x79 << 2)
label_55aa10:
    if (ctx->pc == 0x55AA10u) {
        ctx->pc = 0x55AA10u;
            // 0x55aa10: 0x4600c006  mov.s       $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x55AA14u;
        goto label_55aa14;
    }
    ctx->pc = 0x55AA0Cu;
    {
        const bool branch_taken_0x55aa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x55AA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AA0Cu;
            // 0x55aa10: 0x4600c006  mov.s       $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x55aa0c) {
            ctx->pc = 0x55ABF4u;
            goto label_55abf4;
        }
    }
    ctx->pc = 0x55AA14u;
label_55aa14:
    // 0x55aa14: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x55aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_55aa18:
    // 0x55aa18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55aa1c:
    // 0x55aa1c: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x55aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_55aa20:
    // 0x55aa20: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x55aa20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_55aa24:
    // 0x55aa24: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x55aa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_55aa28:
    // 0x55aa28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55aa28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55aa2c:
    // 0x55aa2c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x55aa2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_55aa30:
    // 0x55aa30: 0x320f809  jalr        $t9
label_55aa34:
    if (ctx->pc == 0x55AA34u) {
        ctx->pc = 0x55AA38u;
        goto label_55aa38;
    }
    ctx->pc = 0x55AA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55AA38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55AA38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55AA38u; }
            if (ctx->pc != 0x55AA38u) { return; }
        }
        }
    }
    ctx->pc = 0x55AA38u;
label_55aa38:
    // 0x55aa38: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55aa3c:
    // 0x55aa3c: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x55aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_55aa40:
    // 0x55aa40: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55aa40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55aa44:
    // 0x55aa44: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x55aa44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_55aa48:
    // 0x55aa48: 0x320f809  jalr        $t9
label_55aa4c:
    if (ctx->pc == 0x55AA4Cu) {
        ctx->pc = 0x55AA4Cu;
            // 0x55aa4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55AA50u;
        goto label_55aa50;
    }
    ctx->pc = 0x55AA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55AA50u);
        ctx->pc = 0x55AA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AA48u;
            // 0x55aa4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55AA50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55AA50u; }
            if (ctx->pc != 0x55AA50u) { return; }
        }
        }
    }
    ctx->pc = 0x55AA50u;
label_55aa50:
    // 0x55aa50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55aa54:
    // 0x55aa54: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x55aa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_55aa58:
    // 0x55aa58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55aa58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55aa5c:
    // 0x55aa5c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x55aa5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_55aa60:
    // 0x55aa60: 0x320f809  jalr        $t9
label_55aa64:
    if (ctx->pc == 0x55AA64u) {
        ctx->pc = 0x55AA64u;
            // 0x55aa64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55AA68u;
        goto label_55aa68;
    }
    ctx->pc = 0x55AA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55AA68u);
        ctx->pc = 0x55AA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AA60u;
            // 0x55aa64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55AA68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55AA68u; }
            if (ctx->pc != 0x55AA68u) { return; }
        }
        }
    }
    ctx->pc = 0x55AA68u;
label_55aa68:
    // 0x55aa68: 0xc6ac0000  lwc1        $f12, 0x0($s5)
    ctx->pc = 0x55aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_55aa6c:
    // 0x55aa6c: 0xc6ad0004  lwc1        $f13, 0x4($s5)
    ctx->pc = 0x55aa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_55aa70:
    // 0x55aa70: 0xc6ae0008  lwc1        $f14, 0x8($s5)
    ctx->pc = 0x55aa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_55aa74:
    // 0x55aa74: 0xc04cbd8  jal         func_132F60
label_55aa78:
    if (ctx->pc == 0x55AA78u) {
        ctx->pc = 0x55AA78u;
            // 0x55aa78: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55AA7Cu;
        goto label_55aa7c;
    }
    ctx->pc = 0x55AA74u;
    SET_GPR_U32(ctx, 31, 0x55AA7Cu);
    ctx->pc = 0x55AA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55AA74u;
            // 0x55aa78: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AA7Cu; }
        if (ctx->pc != 0x55AA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AA7Cu; }
        if (ctx->pc != 0x55AA7Cu) { return; }
    }
    ctx->pc = 0x55AA7Cu;
label_55aa7c:
    // 0x55aa7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x55aa7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_55aa80:
    // 0x55aa80: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x55aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_55aa84:
    // 0x55aa84: 0xc075094  jal         func_1D4250
label_55aa88:
    if (ctx->pc == 0x55AA88u) {
        ctx->pc = 0x55AA88u;
            // 0x55aa88: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55AA8Cu;
        goto label_55aa8c;
    }
    ctx->pc = 0x55AA84u;
    SET_GPR_U32(ctx, 31, 0x55AA8Cu);
    ctx->pc = 0x55AA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55AA84u;
            // 0x55aa88: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AA8Cu; }
        if (ctx->pc != 0x55AA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AA8Cu; }
        if (ctx->pc != 0x55AA8Cu) { return; }
    }
    ctx->pc = 0x55AA8Cu;
label_55aa8c:
    // 0x55aa8c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x55aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_55aa90:
    // 0x55aa90: 0xc440c058  lwc1        $f0, -0x3FA8($v0)
    ctx->pc = 0x55aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55aa94:
    // 0x55aa94: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x55aa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_55aa98:
    // 0x55aa98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x55aa98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55aa9c:
    // 0x55aa9c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_55aaa0:
    if (ctx->pc == 0x55AAA0u) {
        ctx->pc = 0x55AAA0u;
            // 0x55aaa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55AAA4u;
        goto label_55aaa4;
    }
    ctx->pc = 0x55AA9Cu;
    {
        const bool branch_taken_0x55aa9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x55AAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AA9Cu;
            // 0x55aaa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55aa9c) {
            ctx->pc = 0x55AAA8u;
            goto label_55aaa8;
        }
    }
    ctx->pc = 0x55AAA4u;
label_55aaa4:
    // 0x55aaa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x55aaa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55aaa8:
    // 0x55aaa8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x55aaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_55aaac:
    // 0x55aaac: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x55aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_55aab0:
    // 0x55aab0: 0xc440c060  lwc1        $f0, -0x3FA0($v0)
    ctx->pc = 0x55aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_55aab4:
    // 0x55aab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x55aab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_55aab8:
    // 0x55aab8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_55aabc:
    if (ctx->pc == 0x55AABCu) {
        ctx->pc = 0x55AABCu;
            // 0x55aabc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x55AAC0u;
        goto label_55aac0;
    }
    ctx->pc = 0x55AAB8u;
    {
        const bool branch_taken_0x55aab8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x55AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AAB8u;
            // 0x55aabc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55aab8) {
            ctx->pc = 0x55AAC4u;
            goto label_55aac4;
        }
    }
    ctx->pc = 0x55AAC0u;
label_55aac0:
    // 0x55aac0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x55aac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_55aac4:
    // 0x55aac4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x55aac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_55aac8:
    // 0x55aac8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x55aac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_55aacc:
    // 0x55aacc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_55aad0:
    if (ctx->pc == 0x55AAD0u) {
        ctx->pc = 0x55AAD4u;
        goto label_55aad4;
    }
    ctx->pc = 0x55AACCu;
    {
        const bool branch_taken_0x55aacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x55aacc) {
            ctx->pc = 0x55ABB0u;
            goto label_55abb0;
        }
    }
    ctx->pc = 0x55AAD4u;
label_55aad4:
    // 0x55aad4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x55aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_55aad8:
    // 0x55aad8: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x55aad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_55aadc:
    // 0x55aadc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x55aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_55aae0:
    // 0x55aae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x55aae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_55aae4:
    // 0x55aae4: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x55aae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_55aae8:
    // 0x55aae8: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x55aae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_55aaec:
    // 0x55aaec: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x55aaecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_55aaf0:
    // 0x55aaf0: 0x320f809  jalr        $t9
label_55aaf4:
    if (ctx->pc == 0x55AAF4u) {
        ctx->pc = 0x55AAF4u;
            // 0x55aaf4: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x55AAF8u;
        goto label_55aaf8;
    }
    ctx->pc = 0x55AAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55AAF8u);
        ctx->pc = 0x55AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AAF0u;
            // 0x55aaf4: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x55AAF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55AAF8u; }
            if (ctx->pc != 0x55AAF8u) { return; }
        }
        }
    }
    ctx->pc = 0x55AAF8u;
label_55aaf8:
    // 0x55aaf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x55aaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_55aafc:
    // 0x55aafc: 0x87b300bc  lh          $s3, 0xBC($sp)
    ctx->pc = 0x55aafcu;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 188)));
label_55ab00:
    // 0x55ab00: 0x87b200be  lh          $s2, 0xBE($sp)
    ctx->pc = 0x55ab00u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 190)));
label_55ab04:
    // 0x55ab04: 0xc04cc1c  jal         func_133070
label_55ab08:
    if (ctx->pc == 0x55AB08u) {
        ctx->pc = 0x55AB08u;
            // 0x55ab08: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x55AB0Cu;
        goto label_55ab0c;
    }
    ctx->pc = 0x55AB04u;
    SET_GPR_U32(ctx, 31, 0x55AB0Cu);
    ctx->pc = 0x55AB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55AB04u;
            // 0x55ab08: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AB0Cu; }
        if (ctx->pc != 0x55AB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55AB0Cu; }
        if (ctx->pc != 0x55AB0Cu) { return; }
    }
    ctx->pc = 0x55AB0Cu;
label_55ab0c:
    // 0x55ab0c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55ab10:
    // 0x55ab10: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x55ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_55ab14:
    // 0x55ab14: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x55ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_55ab18:
    // 0x55ab18: 0x1a600025  blez        $s3, . + 4 + (0x25 << 2)
label_55ab1c:
    if (ctx->pc == 0x55AB1Cu) {
        ctx->pc = 0x55AB1Cu;
            // 0x55ab1c: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->pc = 0x55AB20u;
        goto label_55ab20;
    }
    ctx->pc = 0x55AB18u;
    {
        const bool branch_taken_0x55ab18 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x55AB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AB18u;
            // 0x55ab1c: 0x8c42001c  lw          $v0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55ab18) {
            ctx->pc = 0x55ABB0u;
            goto label_55abb0;
        }
    }
    ctx->pc = 0x55AB20u;
label_55ab20:
    // 0x55ab20: 0x263082a  slt         $at, $s3, $v1
    ctx->pc = 0x55ab20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_55ab24:
    // 0x55ab24: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_55ab28:
    if (ctx->pc == 0x55AB28u) {
        ctx->pc = 0x55AB2Cu;
        goto label_55ab2c;
    }
    ctx->pc = 0x55AB24u;
    {
        const bool branch_taken_0x55ab24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ab24) {
            ctx->pc = 0x55ABB0u;
            goto label_55abb0;
        }
    }
    ctx->pc = 0x55AB2Cu;
label_55ab2c:
    // 0x55ab2c: 0x1a400020  blez        $s2, . + 4 + (0x20 << 2)
label_55ab30:
    if (ctx->pc == 0x55AB30u) {
        ctx->pc = 0x55AB34u;
        goto label_55ab34;
    }
    ctx->pc = 0x55AB2Cu;
    {
        const bool branch_taken_0x55ab2c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x55ab2c) {
            ctx->pc = 0x55ABB0u;
            goto label_55abb0;
        }
    }
    ctx->pc = 0x55AB34u;
label_55ab34:
    // 0x55ab34: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x55ab34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_55ab38:
    // 0x55ab38: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_55ab3c:
    if (ctx->pc == 0x55AB3Cu) {
        ctx->pc = 0x55AB40u;
        goto label_55ab40;
    }
    ctx->pc = 0x55AB38u;
    {
        const bool branch_taken_0x55ab38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x55ab38) {
            ctx->pc = 0x55ABB0u;
            goto label_55abb0;
        }
    }
    ctx->pc = 0x55AB40u;
label_55ab40:
    // 0x55ab40: 0x4616a882  mul.s       $f2, $f21, $f22
    ctx->pc = 0x55ab40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_55ab44:
    // 0x55ab44: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x55ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_55ab48:
    // 0x55ab48: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x55ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_55ab4c:
    // 0x55ab4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x55ab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_55ab50:
    // 0x55ab50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x55ab50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_55ab54:
    // 0x55ab54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x55ab54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55ab58:
    // 0x55ab58: 0x0  nop
    ctx->pc = 0x55ab58u;
    // NOP
label_55ab5c:
    // 0x55ab5c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x55ab5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_55ab60:
    // 0x55ab60: 0x4616b802  mul.s       $f0, $f23, $f22
    ctx->pc = 0x55ab60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
label_55ab64:
    // 0x55ab64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55ab64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_55ab68:
    // 0x55ab68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x55ab68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_55ab6c:
    // 0x55ab6c: 0x0  nop
    ctx->pc = 0x55ab6cu;
    // NOP
label_55ab70:
    // 0x55ab70: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x55ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_55ab74:
    // 0x55ab74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x55ab74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_55ab78:
    // 0x55ab78: 0x0  nop
    ctx->pc = 0x55ab78u;
    // NOP
label_55ab7c:
    // 0x55ab7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x55ab7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_55ab80:
    // 0x55ab80: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x55ab80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_55ab84:
    // 0x55ab84: 0x0  nop
    ctx->pc = 0x55ab84u;
    // NOP
label_55ab88:
    // 0x55ab88: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x55ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_55ab8c:
    // 0x55ab8c: 0x2463ffe7  addiu       $v1, $v1, -0x19
    ctx->pc = 0x55ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_55ab90:
    // 0x55ab90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x55ab90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_55ab94:
    // 0x55ab94: 0x0  nop
    ctx->pc = 0x55ab94u;
    // NOP
label_55ab98:
    // 0x55ab98: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x55ab98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_55ab9c:
    // 0x55ab9c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x55ab9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_55aba0:
    // 0x55aba0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x55aba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_55aba4:
    // 0x55aba4: 0xc156b0c  jal         func_55AC30
label_55aba8:
    if (ctx->pc == 0x55ABA8u) {
        ctx->pc = 0x55ABA8u;
            // 0x55aba8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x55ABACu;
        goto label_55abac;
    }
    ctx->pc = 0x55ABA4u;
    SET_GPR_U32(ctx, 31, 0x55ABACu);
    ctx->pc = 0x55ABA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x55ABA4u;
            // 0x55aba8: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55AC30u;
    if (runtime->hasFunction(0x55AC30u)) {
        auto targetFn = runtime->lookupFunction(0x55AC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ABACu; }
        if (ctx->pc != 0x55ABACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055AC30_0x55ac30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x55ABACu; }
        if (ctx->pc != 0x55ABACu) { return; }
    }
    ctx->pc = 0x55ABACu;
label_55abac:
    // 0x55abac: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x55abacu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_55abb0:
    // 0x55abb0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55abb4:
    // 0x55abb4: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x55abb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_55abb8:
    // 0x55abb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55abb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55abbc:
    // 0x55abbc: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x55abbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_55abc0:
    // 0x55abc0: 0x320f809  jalr        $t9
label_55abc4:
    if (ctx->pc == 0x55ABC4u) {
        ctx->pc = 0x55ABC8u;
        goto label_55abc8;
    }
    ctx->pc = 0x55ABC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55ABC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55ABC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55ABC8u; }
            if (ctx->pc != 0x55ABC8u) { return; }
        }
        }
    }
    ctx->pc = 0x55ABC8u;
label_55abc8:
    // 0x55abc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x55abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_55abcc:
    // 0x55abcc: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x55abccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_55abd0:
    // 0x55abd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x55abd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_55abd4:
    // 0x55abd4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x55abd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_55abd8:
    // 0x55abd8: 0x320f809  jalr        $t9
label_55abdc:
    if (ctx->pc == 0x55ABDCu) {
        ctx->pc = 0x55ABE0u;
        goto label_55abe0;
    }
    ctx->pc = 0x55ABD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x55ABE0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x55ABE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x55ABE0u; }
            if (ctx->pc != 0x55ABE0u) { return; }
        }
        }
    }
    ctx->pc = 0x55ABE0u;
label_55abe0:
    // 0x55abe0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x55abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_55abe4:
    // 0x55abe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x55abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_55abe8:
    // 0x55abe8: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x55abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_55abec:
    // 0x55abec: 0x4600c006  mov.s       $f0, $f24
    ctx->pc = 0x55abecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[24]);
label_55abf0:
    // 0x55abf0: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x55abf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
label_55abf4:
    // 0x55abf4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x55abf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_55abf8:
    // 0x55abf8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x55abf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_55abfc:
    // 0x55abfc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x55abfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_55ac00:
    // 0x55ac00: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x55ac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_55ac04:
    // 0x55ac04: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x55ac04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_55ac08:
    // 0x55ac08: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x55ac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_55ac0c:
    // 0x55ac0c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x55ac0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_55ac10:
    // 0x55ac10: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x55ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_55ac14:
    // 0x55ac14: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x55ac14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_55ac18:
    // 0x55ac18: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x55ac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_55ac1c:
    // 0x55ac1c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x55ac1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_55ac20:
    // 0x55ac20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x55ac20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_55ac24:
    // 0x55ac24: 0x3e00008  jr          $ra
label_55ac28:
    if (ctx->pc == 0x55AC28u) {
        ctx->pc = 0x55AC28u;
            // 0x55ac28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x55AC2Cu;
        goto label_55ac2c;
    }
    ctx->pc = 0x55AC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x55AC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55AC24u;
            // 0x55ac28: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x55AC2Cu;
label_55ac2c:
    // 0x55ac2c: 0x0  nop
    ctx->pc = 0x55ac2cu;
    // NOP
}
