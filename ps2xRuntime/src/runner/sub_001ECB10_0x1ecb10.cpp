#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECB10
// Address: 0x1ecb10 - 0x1ece50
void sub_001ECB10_0x1ecb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECB10_0x1ecb10");
#endif

    switch (ctx->pc) {
        case 0x1ecb10u: goto label_1ecb10;
        case 0x1ecb14u: goto label_1ecb14;
        case 0x1ecb18u: goto label_1ecb18;
        case 0x1ecb1cu: goto label_1ecb1c;
        case 0x1ecb20u: goto label_1ecb20;
        case 0x1ecb24u: goto label_1ecb24;
        case 0x1ecb28u: goto label_1ecb28;
        case 0x1ecb2cu: goto label_1ecb2c;
        case 0x1ecb30u: goto label_1ecb30;
        case 0x1ecb34u: goto label_1ecb34;
        case 0x1ecb38u: goto label_1ecb38;
        case 0x1ecb3cu: goto label_1ecb3c;
        case 0x1ecb40u: goto label_1ecb40;
        case 0x1ecb44u: goto label_1ecb44;
        case 0x1ecb48u: goto label_1ecb48;
        case 0x1ecb4cu: goto label_1ecb4c;
        case 0x1ecb50u: goto label_1ecb50;
        case 0x1ecb54u: goto label_1ecb54;
        case 0x1ecb58u: goto label_1ecb58;
        case 0x1ecb5cu: goto label_1ecb5c;
        case 0x1ecb60u: goto label_1ecb60;
        case 0x1ecb64u: goto label_1ecb64;
        case 0x1ecb68u: goto label_1ecb68;
        case 0x1ecb6cu: goto label_1ecb6c;
        case 0x1ecb70u: goto label_1ecb70;
        case 0x1ecb74u: goto label_1ecb74;
        case 0x1ecb78u: goto label_1ecb78;
        case 0x1ecb7cu: goto label_1ecb7c;
        case 0x1ecb80u: goto label_1ecb80;
        case 0x1ecb84u: goto label_1ecb84;
        case 0x1ecb88u: goto label_1ecb88;
        case 0x1ecb8cu: goto label_1ecb8c;
        case 0x1ecb90u: goto label_1ecb90;
        case 0x1ecb94u: goto label_1ecb94;
        case 0x1ecb98u: goto label_1ecb98;
        case 0x1ecb9cu: goto label_1ecb9c;
        case 0x1ecba0u: goto label_1ecba0;
        case 0x1ecba4u: goto label_1ecba4;
        case 0x1ecba8u: goto label_1ecba8;
        case 0x1ecbacu: goto label_1ecbac;
        case 0x1ecbb0u: goto label_1ecbb0;
        case 0x1ecbb4u: goto label_1ecbb4;
        case 0x1ecbb8u: goto label_1ecbb8;
        case 0x1ecbbcu: goto label_1ecbbc;
        case 0x1ecbc0u: goto label_1ecbc0;
        case 0x1ecbc4u: goto label_1ecbc4;
        case 0x1ecbc8u: goto label_1ecbc8;
        case 0x1ecbccu: goto label_1ecbcc;
        case 0x1ecbd0u: goto label_1ecbd0;
        case 0x1ecbd4u: goto label_1ecbd4;
        case 0x1ecbd8u: goto label_1ecbd8;
        case 0x1ecbdcu: goto label_1ecbdc;
        case 0x1ecbe0u: goto label_1ecbe0;
        case 0x1ecbe4u: goto label_1ecbe4;
        case 0x1ecbe8u: goto label_1ecbe8;
        case 0x1ecbecu: goto label_1ecbec;
        case 0x1ecbf0u: goto label_1ecbf0;
        case 0x1ecbf4u: goto label_1ecbf4;
        case 0x1ecbf8u: goto label_1ecbf8;
        case 0x1ecbfcu: goto label_1ecbfc;
        case 0x1ecc00u: goto label_1ecc00;
        case 0x1ecc04u: goto label_1ecc04;
        case 0x1ecc08u: goto label_1ecc08;
        case 0x1ecc0cu: goto label_1ecc0c;
        case 0x1ecc10u: goto label_1ecc10;
        case 0x1ecc14u: goto label_1ecc14;
        case 0x1ecc18u: goto label_1ecc18;
        case 0x1ecc1cu: goto label_1ecc1c;
        case 0x1ecc20u: goto label_1ecc20;
        case 0x1ecc24u: goto label_1ecc24;
        case 0x1ecc28u: goto label_1ecc28;
        case 0x1ecc2cu: goto label_1ecc2c;
        case 0x1ecc30u: goto label_1ecc30;
        case 0x1ecc34u: goto label_1ecc34;
        case 0x1ecc38u: goto label_1ecc38;
        case 0x1ecc3cu: goto label_1ecc3c;
        case 0x1ecc40u: goto label_1ecc40;
        case 0x1ecc44u: goto label_1ecc44;
        case 0x1ecc48u: goto label_1ecc48;
        case 0x1ecc4cu: goto label_1ecc4c;
        case 0x1ecc50u: goto label_1ecc50;
        case 0x1ecc54u: goto label_1ecc54;
        case 0x1ecc58u: goto label_1ecc58;
        case 0x1ecc5cu: goto label_1ecc5c;
        case 0x1ecc60u: goto label_1ecc60;
        case 0x1ecc64u: goto label_1ecc64;
        case 0x1ecc68u: goto label_1ecc68;
        case 0x1ecc6cu: goto label_1ecc6c;
        case 0x1ecc70u: goto label_1ecc70;
        case 0x1ecc74u: goto label_1ecc74;
        case 0x1ecc78u: goto label_1ecc78;
        case 0x1ecc7cu: goto label_1ecc7c;
        case 0x1ecc80u: goto label_1ecc80;
        case 0x1ecc84u: goto label_1ecc84;
        case 0x1ecc88u: goto label_1ecc88;
        case 0x1ecc8cu: goto label_1ecc8c;
        case 0x1ecc90u: goto label_1ecc90;
        case 0x1ecc94u: goto label_1ecc94;
        case 0x1ecc98u: goto label_1ecc98;
        case 0x1ecc9cu: goto label_1ecc9c;
        case 0x1ecca0u: goto label_1ecca0;
        case 0x1ecca4u: goto label_1ecca4;
        case 0x1ecca8u: goto label_1ecca8;
        case 0x1eccacu: goto label_1eccac;
        case 0x1eccb0u: goto label_1eccb0;
        case 0x1eccb4u: goto label_1eccb4;
        case 0x1eccb8u: goto label_1eccb8;
        case 0x1eccbcu: goto label_1eccbc;
        case 0x1eccc0u: goto label_1eccc0;
        case 0x1eccc4u: goto label_1eccc4;
        case 0x1eccc8u: goto label_1eccc8;
        case 0x1eccccu: goto label_1ecccc;
        case 0x1eccd0u: goto label_1eccd0;
        case 0x1eccd4u: goto label_1eccd4;
        case 0x1eccd8u: goto label_1eccd8;
        case 0x1eccdcu: goto label_1eccdc;
        case 0x1ecce0u: goto label_1ecce0;
        case 0x1ecce4u: goto label_1ecce4;
        case 0x1ecce8u: goto label_1ecce8;
        case 0x1eccecu: goto label_1eccec;
        case 0x1eccf0u: goto label_1eccf0;
        case 0x1eccf4u: goto label_1eccf4;
        case 0x1eccf8u: goto label_1eccf8;
        case 0x1eccfcu: goto label_1eccfc;
        case 0x1ecd00u: goto label_1ecd00;
        case 0x1ecd04u: goto label_1ecd04;
        case 0x1ecd08u: goto label_1ecd08;
        case 0x1ecd0cu: goto label_1ecd0c;
        case 0x1ecd10u: goto label_1ecd10;
        case 0x1ecd14u: goto label_1ecd14;
        case 0x1ecd18u: goto label_1ecd18;
        case 0x1ecd1cu: goto label_1ecd1c;
        case 0x1ecd20u: goto label_1ecd20;
        case 0x1ecd24u: goto label_1ecd24;
        case 0x1ecd28u: goto label_1ecd28;
        case 0x1ecd2cu: goto label_1ecd2c;
        case 0x1ecd30u: goto label_1ecd30;
        case 0x1ecd34u: goto label_1ecd34;
        case 0x1ecd38u: goto label_1ecd38;
        case 0x1ecd3cu: goto label_1ecd3c;
        case 0x1ecd40u: goto label_1ecd40;
        case 0x1ecd44u: goto label_1ecd44;
        case 0x1ecd48u: goto label_1ecd48;
        case 0x1ecd4cu: goto label_1ecd4c;
        case 0x1ecd50u: goto label_1ecd50;
        case 0x1ecd54u: goto label_1ecd54;
        case 0x1ecd58u: goto label_1ecd58;
        case 0x1ecd5cu: goto label_1ecd5c;
        case 0x1ecd60u: goto label_1ecd60;
        case 0x1ecd64u: goto label_1ecd64;
        case 0x1ecd68u: goto label_1ecd68;
        case 0x1ecd6cu: goto label_1ecd6c;
        case 0x1ecd70u: goto label_1ecd70;
        case 0x1ecd74u: goto label_1ecd74;
        case 0x1ecd78u: goto label_1ecd78;
        case 0x1ecd7cu: goto label_1ecd7c;
        case 0x1ecd80u: goto label_1ecd80;
        case 0x1ecd84u: goto label_1ecd84;
        case 0x1ecd88u: goto label_1ecd88;
        case 0x1ecd8cu: goto label_1ecd8c;
        case 0x1ecd90u: goto label_1ecd90;
        case 0x1ecd94u: goto label_1ecd94;
        case 0x1ecd98u: goto label_1ecd98;
        case 0x1ecd9cu: goto label_1ecd9c;
        case 0x1ecda0u: goto label_1ecda0;
        case 0x1ecda4u: goto label_1ecda4;
        case 0x1ecda8u: goto label_1ecda8;
        case 0x1ecdacu: goto label_1ecdac;
        case 0x1ecdb0u: goto label_1ecdb0;
        case 0x1ecdb4u: goto label_1ecdb4;
        case 0x1ecdb8u: goto label_1ecdb8;
        case 0x1ecdbcu: goto label_1ecdbc;
        case 0x1ecdc0u: goto label_1ecdc0;
        case 0x1ecdc4u: goto label_1ecdc4;
        case 0x1ecdc8u: goto label_1ecdc8;
        case 0x1ecdccu: goto label_1ecdcc;
        case 0x1ecdd0u: goto label_1ecdd0;
        case 0x1ecdd4u: goto label_1ecdd4;
        case 0x1ecdd8u: goto label_1ecdd8;
        case 0x1ecddcu: goto label_1ecddc;
        case 0x1ecde0u: goto label_1ecde0;
        case 0x1ecde4u: goto label_1ecde4;
        case 0x1ecde8u: goto label_1ecde8;
        case 0x1ecdecu: goto label_1ecdec;
        case 0x1ecdf0u: goto label_1ecdf0;
        case 0x1ecdf4u: goto label_1ecdf4;
        case 0x1ecdf8u: goto label_1ecdf8;
        case 0x1ecdfcu: goto label_1ecdfc;
        case 0x1ece00u: goto label_1ece00;
        case 0x1ece04u: goto label_1ece04;
        case 0x1ece08u: goto label_1ece08;
        case 0x1ece0cu: goto label_1ece0c;
        case 0x1ece10u: goto label_1ece10;
        case 0x1ece14u: goto label_1ece14;
        case 0x1ece18u: goto label_1ece18;
        case 0x1ece1cu: goto label_1ece1c;
        case 0x1ece20u: goto label_1ece20;
        case 0x1ece24u: goto label_1ece24;
        case 0x1ece28u: goto label_1ece28;
        case 0x1ece2cu: goto label_1ece2c;
        case 0x1ece30u: goto label_1ece30;
        case 0x1ece34u: goto label_1ece34;
        case 0x1ece38u: goto label_1ece38;
        case 0x1ece3cu: goto label_1ece3c;
        case 0x1ece40u: goto label_1ece40;
        case 0x1ece44u: goto label_1ece44;
        case 0x1ece48u: goto label_1ece48;
        case 0x1ece4cu: goto label_1ece4c;
        default: break;
    }

    ctx->pc = 0x1ecb10u;

label_1ecb10:
    // 0x1ecb10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ecb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1ecb14:
    // 0x1ecb14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ecb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ecb18:
    // 0x1ecb18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ecb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ecb1c:
    // 0x1ecb1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ecb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ecb20:
    // 0x1ecb20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ecb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ecb24:
    // 0x1ecb24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ecb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ecb28:
    // 0x1ecb28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ecb28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb2c:
    // 0x1ecb2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ecb30:
    // 0x1ecb30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ecb30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb34:
    // 0x1ecb34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ecb38:
    // 0x1ecb38: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ecb38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1ecb3c:
    // 0x1ecb3c: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1ecb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1ecb40:
    // 0x1ecb40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ecb40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb44:
    // 0x1ecb44: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ecb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1ecb48:
    // 0x1ecb48: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ecb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb4c:
    // 0x1ecb4c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ecb4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ecb50:
    // 0x1ecb50: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1ecb54:
    if (ctx->pc == 0x1ECB54u) {
        ctx->pc = 0x1ECB54u;
            // 0x1ecb54: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1ECB58u;
        goto label_1ecb58;
    }
    ctx->pc = 0x1ECB50u;
    {
        const bool branch_taken_0x1ecb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECB50u;
            // 0x1ecb54: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb50) {
            ctx->pc = 0x1ECB8Cu;
            goto label_1ecb8c;
        }
    }
    ctx->pc = 0x1ECB58u;
label_1ecb58:
    // 0x1ecb58: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ecb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ecb5c:
    // 0x1ecb5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ecb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ecb60:
    // 0x1ecb60: 0x2463ac80  addiu       $v1, $v1, -0x5380
    ctx->pc = 0x1ecb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945920));
label_1ecb64:
    // 0x1ecb64: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ecb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ecb68:
    // 0x1ecb68: 0x2442ac90  addiu       $v0, $v0, -0x5370
    ctx->pc = 0x1ecb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945936));
label_1ecb6c:
    // 0x1ecb6c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ecb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ecb70:
    // 0x1ecb70: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1ecb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1ecb74:
    // 0x1ecb74: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ecb78:
    // 0x1ecb78: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ecb78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ecb7c:
    // 0x1ecb7c: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1ecb80:
    // 0x1ecb80: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1ecb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1ecb84:
    // 0x1ecb84: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1ecb84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1ecb88:
    // 0x1ecb88: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1ecb88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1ecb8c:
    // 0x1ecb8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ecb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ecb90:
    // 0x1ecb90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ecb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb94:
    // 0x1ecb94: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x1ecb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
label_1ecb98:
    // 0x1ecb98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ecb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb9c:
    // 0x1ecb9c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x1ecb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_1ecba0:
    // 0x1ecba0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ecba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ecba4:
    // 0x1ecba4: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x1ecba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1ecba8:
    // 0x1ecba8: 0xc07bd9c  jal         func_1EF670
label_1ecbac:
    if (ctx->pc == 0x1ECBACu) {
        ctx->pc = 0x1ECBACu;
            // 0x1ecbac: 0xa3a000cc  sb          $zero, 0xCC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 204), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1ECBB0u;
        goto label_1ecbb0;
    }
    ctx->pc = 0x1ECBA8u;
    SET_GPR_U32(ctx, 31, 0x1ECBB0u);
    ctx->pc = 0x1ECBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBA8u;
            // 0x1ecbac: 0xa3a000cc  sb          $zero, 0xCC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 204), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF670u;
    if (runtime->hasFunction(0x1EF670u)) {
        auto targetFn = runtime->lookupFunction(0x1EF670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBB0u; }
        if (ctx->pc != 0x1ECBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF670_0x1ef670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECBB0u; }
        if (ctx->pc != 0x1ECBB0u) { return; }
    }
    ctx->pc = 0x1ECBB0u;
label_1ecbb0:
    // 0x1ecbb0: 0x83a200cc  lb          $v0, 0xCC($sp)
    ctx->pc = 0x1ecbb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 204)));
label_1ecbb4:
    // 0x1ecbb4: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_1ecbb8:
    if (ctx->pc == 0x1ECBB8u) {
        ctx->pc = 0x1ECBB8u;
            // 0x1ecbb8: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->pc = 0x1ECBBCu;
        goto label_1ecbbc;
    }
    ctx->pc = 0x1ECBB4u;
    {
        const bool branch_taken_0x1ecbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbb4) {
            ctx->pc = 0x1ECBB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBB4u;
            // 0x1ecbb8: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECC20u;
            goto label_1ecc20;
        }
    }
    ctx->pc = 0x1ECBBCu;
label_1ecbbc:
    // 0x1ecbbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ecbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ecbc0:
    // 0x1ecbc0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1ecbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1ecbc4:
    // 0x1ecbc4: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ecbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1ecbc8:
    // 0x1ecbc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ecbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ecbcc:
    // 0x1ecbcc: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ecbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1ecbd0:
    // 0x1ecbd0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1ecbd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ecbd4:
    // 0x1ecbd4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1ecbd8:
    if (ctx->pc == 0x1ECBD8u) {
        ctx->pc = 0x1ECBD8u;
            // 0x1ecbd8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1ECBDCu;
        goto label_1ecbdc;
    }
    ctx->pc = 0x1ECBD4u;
    {
        const bool branch_taken_0x1ecbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECBD4u;
            // 0x1ecbd8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbd4) {
            ctx->pc = 0x1ECC04u;
            goto label_1ecc04;
        }
    }
    ctx->pc = 0x1ECBDCu;
label_1ecbdc:
    // 0x1ecbdc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ecbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1ecbe0:
    // 0x1ecbe0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ecbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ecbe4:
    // 0x1ecbe4: 0x2442aca0  addiu       $v0, $v0, -0x5360
    ctx->pc = 0x1ecbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945952));
label_1ecbe8:
    // 0x1ecbe8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ecbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ecbec:
    // 0x1ecbec: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ecbf0:
    // 0x1ecbf0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ecbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ecbf4:
    // 0x1ecbf4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1ecbf8:
    // 0x1ecbf8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1ecbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1ecbfc:
    // 0x1ecbfc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ecbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1ecc00:
    // 0x1ecc00: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ecc00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ecc04:
    // 0x1ecc04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ecc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc08:
    // 0x1ecc08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ecc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc0c:
    // 0x1ecc0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ecc0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc10:
    // 0x1ecc10: 0xc07b9ec  jal         func_1EE7B0
label_1ecc14:
    if (ctx->pc == 0x1ECC14u) {
        ctx->pc = 0x1ECC14u;
            // 0x1ecc14: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC18u;
        goto label_1ecc18;
    }
    ctx->pc = 0x1ECC10u;
    SET_GPR_U32(ctx, 31, 0x1ECC18u);
    ctx->pc = 0x1ECC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC10u;
            // 0x1ecc14: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE7B0u;
    if (runtime->hasFunction(0x1EE7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC18u; }
        if (ctx->pc != 0x1ECC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE7B0_0x1ee7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC18u; }
        if (ctx->pc != 0x1ECC18u) { return; }
    }
    ctx->pc = 0x1ECC18u;
label_1ecc18:
    // 0x1ecc18: 0x10000049  b           . + 4 + (0x49 << 2)
label_1ecc1c:
    if (ctx->pc == 0x1ECC1Cu) {
        ctx->pc = 0x1ECC20u;
        goto label_1ecc20;
    }
    ctx->pc = 0x1ECC18u;
    {
        const bool branch_taken_0x1ecc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc18) {
            ctx->pc = 0x1ECD40u;
            goto label_1ecd40;
        }
    }
    ctx->pc = 0x1ECC20u;
label_1ecc20:
    // 0x1ecc20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ecc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc24:
    // 0x1ecc24: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1ecc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1ecc28:
    // 0x1ecc28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ecc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc2c:
    // 0x1ecc2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ecc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ecc30:
    // 0x1ecc30: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1ecc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
label_1ecc34:
    // 0x1ecc34: 0x2442dfd0  addiu       $v0, $v0, -0x2030
    ctx->pc = 0x1ecc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959056));
label_1ecc38:
    // 0x1ecc38: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x1ecc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
label_1ecc3c:
    // 0x1ecc3c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1ecc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_1ecc40:
    // 0x1ecc40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ecc40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc44:
    // 0x1ecc44: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x1ecc44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1ecc48:
    // 0x1ecc48: 0xc07bbf0  jal         func_1EEFC0
label_1ecc4c:
    if (ctx->pc == 0x1ECC4Cu) {
        ctx->pc = 0x1ECC4Cu;
            // 0x1ecc4c: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->pc = 0x1ECC50u;
        goto label_1ecc50;
    }
    ctx->pc = 0x1ECC48u;
    SET_GPR_U32(ctx, 31, 0x1ECC50u);
    ctx->pc = 0x1ECC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC48u;
            // 0x1ecc4c: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEFC0u;
    if (runtime->hasFunction(0x1EEFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1EEFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC50u; }
        if (ctx->pc != 0x1ECC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEFC0_0x1eefc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECC50u; }
        if (ctx->pc != 0x1ECC50u) { return; }
    }
    ctx->pc = 0x1ECC50u;
label_1ecc50:
    // 0x1ecc50: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1ecc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1ecc54:
    // 0x1ecc54: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1ecc54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ecc58:
    // 0x1ecc58: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_1ecc5c:
    if (ctx->pc == 0x1ECC5Cu) {
        ctx->pc = 0x1ECC60u;
        goto label_1ecc60;
    }
    ctx->pc = 0x1ECC58u;
    {
        const bool branch_taken_0x1ecc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc58) {
            ctx->pc = 0x1ECD34u;
            goto label_1ecd34;
        }
    }
    ctx->pc = 0x1ECC60u;
label_1ecc60:
    // 0x1ecc60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1ecc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ecc64:
    // 0x1ecc64: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1ecc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ecc68:
    // 0x1ecc68: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ecc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ecc6c:
    // 0x1ecc6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ecc6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ecc70:
    // 0x1ecc70: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
label_1ecc74:
    if (ctx->pc == 0x1ECC74u) {
        ctx->pc = 0x1ECC74u;
            // 0x1ecc74: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1ECC78u;
        goto label_1ecc78;
    }
    ctx->pc = 0x1ECC70u;
    {
        const bool branch_taken_0x1ecc70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ecc70) {
            ctx->pc = 0x1ECC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECC70u;
            // 0x1ecc74: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECCDCu;
            goto label_1eccdc;
        }
    }
    ctx->pc = 0x1ECC78u;
label_1ecc78:
    // 0x1ecc78: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1ecc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ecc7c:
    // 0x1ecc7c: 0xafb30070  sw          $s3, 0x70($sp)
    ctx->pc = 0x1ecc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 19));
label_1ecc80:
    // 0x1ecc80: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1ecc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ecc84:
    // 0x1ecc84: 0xafb20074  sw          $s2, 0x74($sp)
    ctx->pc = 0x1ecc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 18));
label_1ecc88:
    // 0x1ecc88: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1ecc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ecc8c:
    // 0x1ecc8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ecc90:
    // 0x1ecc90: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1ecc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1ecc94:
    // 0x1ecc94: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1ecc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1ecc98:
    // 0x1ecc98: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1ecc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ecc9c:
    // 0x1ecc9c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1ecc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ecca0:
    // 0x1ecca0: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x1ecca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1ecca4:
    // 0x1ecca4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1ecca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1ecca8:
    // 0x1ecca8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1ecca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1eccac:
    // 0x1eccac: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x1eccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1eccb0:
    // 0x1eccb0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1eccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1eccb4:
    // 0x1eccb4: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1eccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eccb8:
    // 0x1eccb8: 0xe7a2005c  swc1        $f2, 0x5C($sp)
    ctx->pc = 0x1eccb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1eccbc:
    // 0x1eccbc: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1eccbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1eccc0:
    // 0x1eccc0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1eccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1eccc4:
    // 0x1eccc4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1eccc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eccc8:
    // 0x1eccc8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1eccc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1ecccc:
    // 0x1ecccc: 0x320f809  jalr        $t9
label_1eccd0:
    if (ctx->pc == 0x1ECCD0u) {
        ctx->pc = 0x1ECCD0u;
            // 0x1eccd0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1ECCD4u;
        goto label_1eccd4;
    }
    ctx->pc = 0x1ECCCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ECCD4u);
        ctx->pc = 0x1ECCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCCCu;
            // 0x1eccd0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1ECCD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1ECCD4u; }
            if (ctx->pc != 0x1ECCD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1ECCD4u;
label_1eccd4:
    // 0x1eccd4: 0x10000017  b           . + 4 + (0x17 << 2)
label_1eccd8:
    if (ctx->pc == 0x1ECCD8u) {
        ctx->pc = 0x1ECCDCu;
        goto label_1eccdc;
    }
    ctx->pc = 0x1ECCD4u;
    {
        const bool branch_taken_0x1eccd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eccd4) {
            ctx->pc = 0x1ECD34u;
            goto label_1ecd34;
        }
    }
    ctx->pc = 0x1ECCDCu;
label_1eccdc:
    // 0x1eccdc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1eccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1ecce0:
    // 0x1ecce0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1ecce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1ecce4:
    // 0x1ecce4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ecce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ecce8:
    // 0x1ecce8: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1ecce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1eccec:
    // 0x1eccec: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1eccecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1eccf0:
    // 0x1eccf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1eccf4:
    if (ctx->pc == 0x1ECCF4u) {
        ctx->pc = 0x1ECCF4u;
            // 0x1eccf4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1ECCF8u;
        goto label_1eccf8;
    }
    ctx->pc = 0x1ECCF0u;
    {
        const bool branch_taken_0x1eccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECCF0u;
            // 0x1eccf4: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eccf0) {
            ctx->pc = 0x1ECD20u;
            goto label_1ecd20;
        }
    }
    ctx->pc = 0x1ECCF8u;
label_1eccf8:
    // 0x1eccf8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1eccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1eccfc:
    // 0x1eccfc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1eccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1ecd00:
    // 0x1ecd00: 0x2442aca0  addiu       $v0, $v0, -0x5360
    ctx->pc = 0x1ecd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945952));
label_1ecd04:
    // 0x1ecd04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ecd04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1ecd08:
    // 0x1ecd08: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1ecd0c:
    // 0x1ecd0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ecd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1ecd10:
    // 0x1ecd10: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1ecd14:
    // 0x1ecd14: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1ecd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1ecd18:
    // 0x1ecd18: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1ecd18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1ecd1c:
    // 0x1ecd1c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1ecd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1ecd20:
    // 0x1ecd20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ecd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ecd24:
    // 0x1ecd24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ecd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ecd28:
    // 0x1ecd28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ecd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ecd2c:
    // 0x1ecd2c: 0xc07b9ec  jal         func_1EE7B0
label_1ecd30:
    if (ctx->pc == 0x1ECD30u) {
        ctx->pc = 0x1ECD30u;
            // 0x1ecd30: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD34u;
        goto label_1ecd34;
    }
    ctx->pc = 0x1ECD2Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD34u);
    ctx->pc = 0x1ECD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD2Cu;
            // 0x1ecd30: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE7B0u;
    if (runtime->hasFunction(0x1EE7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD34u; }
        if (ctx->pc != 0x1ECD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE7B0_0x1ee7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECD34u; }
        if (ctx->pc != 0x1ECD34u) { return; }
    }
    ctx->pc = 0x1ECD34u;
label_1ecd34:
    // 0x1ecd34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ecd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ecd38:
    // 0x1ecd38: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1ecd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1ecd3c:
    // 0x1ecd3c: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1ecd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_1ecd40:
    // 0x1ecd40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ecd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ecd44:
    // 0x1ecd44: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1ecd44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1ecd48:
    // 0x1ecd48: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1ecd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1ecd4c:
    // 0x1ecd4c: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1ecd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_1ecd50:
    // 0x1ecd50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ecd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ecd54:
    // 0x1ecd54: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1ecd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1ecd58:
    // 0x1ecd58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1ecd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1ecd5c:
    // 0x1ecd5c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1ecd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1ecd60:
    // 0x1ecd60: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1ecd60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1ecd64:
    // 0x1ecd64: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1ecd68:
    if (ctx->pc == 0x1ECD68u) {
        ctx->pc = 0x1ECD68u;
            // 0x1ecd68: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1ECD6Cu;
        goto label_1ecd6c;
    }
    ctx->pc = 0x1ECD64u;
    {
        const bool branch_taken_0x1ecd64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECD64u;
            // 0x1ecd68: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd64) {
            ctx->pc = 0x1ECD94u;
            goto label_1ecd94;
        }
    }
    ctx->pc = 0x1ECD6Cu;
label_1ecd6c:
    // 0x1ecd6c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1ecd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1ecd70:
    // 0x1ecd70: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ecd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1ecd74:
    // 0x1ecd74: 0x2463acb0  addiu       $v1, $v1, -0x5350
    ctx->pc = 0x1ecd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945968));
label_1ecd78:
    // 0x1ecd78: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ecd78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1ecd7c:
    // 0x1ecd7c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1ecd80:
    // 0x1ecd80: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1ecd80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1ecd84:
    // 0x1ecd84: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1ecd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1ecd88:
    // 0x1ecd88: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1ecd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1ecd8c:
    // 0x1ecd8c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1ecd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1ecd90:
    // 0x1ecd90: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1ecd90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1ecd94:
    // 0x1ecd94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ecd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ecd98:
    // 0x1ecd98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ecd98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ecd9c:
    // 0x1ecd9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ecd9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ecda0:
    // 0x1ecda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ecda4:
    // 0x1ecda4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecda8:
    // 0x1ecda8: 0x3e00008  jr          $ra
label_1ecdac:
    if (ctx->pc == 0x1ECDACu) {
        ctx->pc = 0x1ECDACu;
            // 0x1ecdac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1ECDB0u;
        goto label_1ecdb0;
    }
    ctx->pc = 0x1ECDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDA8u;
            // 0x1ecdac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECDB0u;
label_1ecdb0:
    // 0x1ecdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ecdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ecdb4:
    // 0x1ecdb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ecdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ecdb8:
    // 0x1ecdb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ecdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ecdbc:
    // 0x1ecdbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ecdbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ecdc0:
    // 0x1ecdc0: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_1ecdc4:
    if (ctx->pc == 0x1ECDC4u) {
        ctx->pc = 0x1ECDC4u;
            // 0x1ecdc4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1ECDC8u;
        goto label_1ecdc8;
    }
    ctx->pc = 0x1ECDC0u;
    {
        const bool branch_taken_0x1ecdc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDC0u;
            // 0x1ecdc4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdc0) {
            ctx->pc = 0x1ECE38u;
            goto label_1ece38;
        }
    }
    ctx->pc = 0x1ECDC8u;
label_1ecdc8:
    // 0x1ecdc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ecdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ecdcc:
    // 0x1ecdcc: 0x2442dfd0  addiu       $v0, $v0, -0x2030
    ctx->pc = 0x1ecdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959056));
label_1ecdd0:
    // 0x1ecdd0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1ecdd4:
    if (ctx->pc == 0x1ECDD4u) {
        ctx->pc = 0x1ECDD4u;
            // 0x1ecdd4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1ECDD8u;
        goto label_1ecdd8;
    }
    ctx->pc = 0x1ECDD0u;
    {
        const bool branch_taken_0x1ecdd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDD0u;
            // 0x1ecdd4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdd0) {
            ctx->pc = 0x1ECDE4u;
            goto label_1ecde4;
        }
    }
    ctx->pc = 0x1ECDD8u;
label_1ecdd8:
    // 0x1ecdd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ecdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ecddc:
    // 0x1ecddc: 0x2442d4e0  addiu       $v0, $v0, -0x2B20
    ctx->pc = 0x1ecddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
label_1ecde0:
    // 0x1ecde0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ecde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ecde4:
    // 0x1ecde4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1ecde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1ecde8:
    // 0x1ecde8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ecde8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ecdec:
    // 0x1ecdec: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
label_1ecdf0:
    if (ctx->pc == 0x1ECDF0u) {
        ctx->pc = 0x1ECDF0u;
            // 0x1ecdf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDF4u;
        goto label_1ecdf4;
    }
    ctx->pc = 0x1ECDECu;
    {
        const bool branch_taken_0x1ecdec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ecdec) {
            ctx->pc = 0x1ECDF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDECu;
            // 0x1ecdf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECE3Cu;
            goto label_1ece3c;
        }
    }
    ctx->pc = 0x1ECDF4u;
label_1ecdf4:
    // 0x1ecdf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ecdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ecdf8:
    // 0x1ecdf8: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x1ecdf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ecdfc:
    // 0x1ecdfc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1ecdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1ece00:
    // 0x1ece00: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ece00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ece04:
    // 0x1ece04: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1ece04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ece08:
    // 0x1ece08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1ece0c:
    if (ctx->pc == 0x1ECE0Cu) {
        ctx->pc = 0x1ECE0Cu;
            // 0x1ece0c: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x1ECE10u;
        goto label_1ece10;
    }
    ctx->pc = 0x1ECE08u;
    {
        const bool branch_taken_0x1ece08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ece08) {
            ctx->pc = 0x1ECE0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE08u;
            // 0x1ece0c: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ECE24u;
            goto label_1ece24;
        }
    }
    ctx->pc = 0x1ECE10u;
label_1ece10:
    // 0x1ece10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ece10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ece14:
    // 0x1ece14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ece14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ece18:
    // 0x1ece18: 0xc0a79ec  jal         func_29E7B0
label_1ece1c:
    if (ctx->pc == 0x1ECE1Cu) {
        ctx->pc = 0x1ECE1Cu;
            // 0x1ece1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1ECE20u;
        goto label_1ece20;
    }
    ctx->pc = 0x1ECE18u;
    SET_GPR_U32(ctx, 31, 0x1ECE20u);
    ctx->pc = 0x1ECE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE18u;
            // 0x1ece1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE20u; }
        if (ctx->pc != 0x1ECE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE20u; }
        if (ctx->pc != 0x1ECE20u) { return; }
    }
    ctx->pc = 0x1ECE20u;
label_1ece20:
    // 0x1ece20: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1ece20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1ece24:
    // 0x1ece24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ece24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ece28:
    // 0x1ece28: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1ece28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1ece2c:
    // 0x1ece2c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ece2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1ece30:
    // 0x1ece30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ece30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ece34:
    // 0x1ece34: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x1ece34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
label_1ece38:
    // 0x1ece38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ece38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ece3c:
    // 0x1ece3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ece3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ece40:
    // 0x1ece40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ece40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ece44:
    // 0x1ece44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ece44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ece48:
    // 0x1ece48: 0x3e00008  jr          $ra
label_1ece4c:
    if (ctx->pc == 0x1ECE4Cu) {
        ctx->pc = 0x1ECE4Cu;
            // 0x1ece4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1ECE50u;
        goto label_fallthrough_0x1ece48;
    }
    ctx->pc = 0x1ECE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE48u;
            // 0x1ece4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ece48:
    ctx->pc = 0x1ECE50u;
}
