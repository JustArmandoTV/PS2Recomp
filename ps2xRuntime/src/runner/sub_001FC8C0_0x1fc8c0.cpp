#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FC8C0
// Address: 0x1fc8c0 - 0x1fcc30
void sub_001FC8C0_0x1fc8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC8C0_0x1fc8c0");
#endif

    switch (ctx->pc) {
        case 0x1fc8c0u: goto label_1fc8c0;
        case 0x1fc8c4u: goto label_1fc8c4;
        case 0x1fc8c8u: goto label_1fc8c8;
        case 0x1fc8ccu: goto label_1fc8cc;
        case 0x1fc8d0u: goto label_1fc8d0;
        case 0x1fc8d4u: goto label_1fc8d4;
        case 0x1fc8d8u: goto label_1fc8d8;
        case 0x1fc8dcu: goto label_1fc8dc;
        case 0x1fc8e0u: goto label_1fc8e0;
        case 0x1fc8e4u: goto label_1fc8e4;
        case 0x1fc8e8u: goto label_1fc8e8;
        case 0x1fc8ecu: goto label_1fc8ec;
        case 0x1fc8f0u: goto label_1fc8f0;
        case 0x1fc8f4u: goto label_1fc8f4;
        case 0x1fc8f8u: goto label_1fc8f8;
        case 0x1fc8fcu: goto label_1fc8fc;
        case 0x1fc900u: goto label_1fc900;
        case 0x1fc904u: goto label_1fc904;
        case 0x1fc908u: goto label_1fc908;
        case 0x1fc90cu: goto label_1fc90c;
        case 0x1fc910u: goto label_1fc910;
        case 0x1fc914u: goto label_1fc914;
        case 0x1fc918u: goto label_1fc918;
        case 0x1fc91cu: goto label_1fc91c;
        case 0x1fc920u: goto label_1fc920;
        case 0x1fc924u: goto label_1fc924;
        case 0x1fc928u: goto label_1fc928;
        case 0x1fc92cu: goto label_1fc92c;
        case 0x1fc930u: goto label_1fc930;
        case 0x1fc934u: goto label_1fc934;
        case 0x1fc938u: goto label_1fc938;
        case 0x1fc93cu: goto label_1fc93c;
        case 0x1fc940u: goto label_1fc940;
        case 0x1fc944u: goto label_1fc944;
        case 0x1fc948u: goto label_1fc948;
        case 0x1fc94cu: goto label_1fc94c;
        case 0x1fc950u: goto label_1fc950;
        case 0x1fc954u: goto label_1fc954;
        case 0x1fc958u: goto label_1fc958;
        case 0x1fc95cu: goto label_1fc95c;
        case 0x1fc960u: goto label_1fc960;
        case 0x1fc964u: goto label_1fc964;
        case 0x1fc968u: goto label_1fc968;
        case 0x1fc96cu: goto label_1fc96c;
        case 0x1fc970u: goto label_1fc970;
        case 0x1fc974u: goto label_1fc974;
        case 0x1fc978u: goto label_1fc978;
        case 0x1fc97cu: goto label_1fc97c;
        case 0x1fc980u: goto label_1fc980;
        case 0x1fc984u: goto label_1fc984;
        case 0x1fc988u: goto label_1fc988;
        case 0x1fc98cu: goto label_1fc98c;
        case 0x1fc990u: goto label_1fc990;
        case 0x1fc994u: goto label_1fc994;
        case 0x1fc998u: goto label_1fc998;
        case 0x1fc99cu: goto label_1fc99c;
        case 0x1fc9a0u: goto label_1fc9a0;
        case 0x1fc9a4u: goto label_1fc9a4;
        case 0x1fc9a8u: goto label_1fc9a8;
        case 0x1fc9acu: goto label_1fc9ac;
        case 0x1fc9b0u: goto label_1fc9b0;
        case 0x1fc9b4u: goto label_1fc9b4;
        case 0x1fc9b8u: goto label_1fc9b8;
        case 0x1fc9bcu: goto label_1fc9bc;
        case 0x1fc9c0u: goto label_1fc9c0;
        case 0x1fc9c4u: goto label_1fc9c4;
        case 0x1fc9c8u: goto label_1fc9c8;
        case 0x1fc9ccu: goto label_1fc9cc;
        case 0x1fc9d0u: goto label_1fc9d0;
        case 0x1fc9d4u: goto label_1fc9d4;
        case 0x1fc9d8u: goto label_1fc9d8;
        case 0x1fc9dcu: goto label_1fc9dc;
        case 0x1fc9e0u: goto label_1fc9e0;
        case 0x1fc9e4u: goto label_1fc9e4;
        case 0x1fc9e8u: goto label_1fc9e8;
        case 0x1fc9ecu: goto label_1fc9ec;
        case 0x1fc9f0u: goto label_1fc9f0;
        case 0x1fc9f4u: goto label_1fc9f4;
        case 0x1fc9f8u: goto label_1fc9f8;
        case 0x1fc9fcu: goto label_1fc9fc;
        case 0x1fca00u: goto label_1fca00;
        case 0x1fca04u: goto label_1fca04;
        case 0x1fca08u: goto label_1fca08;
        case 0x1fca0cu: goto label_1fca0c;
        case 0x1fca10u: goto label_1fca10;
        case 0x1fca14u: goto label_1fca14;
        case 0x1fca18u: goto label_1fca18;
        case 0x1fca1cu: goto label_1fca1c;
        case 0x1fca20u: goto label_1fca20;
        case 0x1fca24u: goto label_1fca24;
        case 0x1fca28u: goto label_1fca28;
        case 0x1fca2cu: goto label_1fca2c;
        case 0x1fca30u: goto label_1fca30;
        case 0x1fca34u: goto label_1fca34;
        case 0x1fca38u: goto label_1fca38;
        case 0x1fca3cu: goto label_1fca3c;
        case 0x1fca40u: goto label_1fca40;
        case 0x1fca44u: goto label_1fca44;
        case 0x1fca48u: goto label_1fca48;
        case 0x1fca4cu: goto label_1fca4c;
        case 0x1fca50u: goto label_1fca50;
        case 0x1fca54u: goto label_1fca54;
        case 0x1fca58u: goto label_1fca58;
        case 0x1fca5cu: goto label_1fca5c;
        case 0x1fca60u: goto label_1fca60;
        case 0x1fca64u: goto label_1fca64;
        case 0x1fca68u: goto label_1fca68;
        case 0x1fca6cu: goto label_1fca6c;
        case 0x1fca70u: goto label_1fca70;
        case 0x1fca74u: goto label_1fca74;
        case 0x1fca78u: goto label_1fca78;
        case 0x1fca7cu: goto label_1fca7c;
        case 0x1fca80u: goto label_1fca80;
        case 0x1fca84u: goto label_1fca84;
        case 0x1fca88u: goto label_1fca88;
        case 0x1fca8cu: goto label_1fca8c;
        case 0x1fca90u: goto label_1fca90;
        case 0x1fca94u: goto label_1fca94;
        case 0x1fca98u: goto label_1fca98;
        case 0x1fca9cu: goto label_1fca9c;
        case 0x1fcaa0u: goto label_1fcaa0;
        case 0x1fcaa4u: goto label_1fcaa4;
        case 0x1fcaa8u: goto label_1fcaa8;
        case 0x1fcaacu: goto label_1fcaac;
        case 0x1fcab0u: goto label_1fcab0;
        case 0x1fcab4u: goto label_1fcab4;
        case 0x1fcab8u: goto label_1fcab8;
        case 0x1fcabcu: goto label_1fcabc;
        case 0x1fcac0u: goto label_1fcac0;
        case 0x1fcac4u: goto label_1fcac4;
        case 0x1fcac8u: goto label_1fcac8;
        case 0x1fcaccu: goto label_1fcacc;
        case 0x1fcad0u: goto label_1fcad0;
        case 0x1fcad4u: goto label_1fcad4;
        case 0x1fcad8u: goto label_1fcad8;
        case 0x1fcadcu: goto label_1fcadc;
        case 0x1fcae0u: goto label_1fcae0;
        case 0x1fcae4u: goto label_1fcae4;
        case 0x1fcae8u: goto label_1fcae8;
        case 0x1fcaecu: goto label_1fcaec;
        case 0x1fcaf0u: goto label_1fcaf0;
        case 0x1fcaf4u: goto label_1fcaf4;
        case 0x1fcaf8u: goto label_1fcaf8;
        case 0x1fcafcu: goto label_1fcafc;
        case 0x1fcb00u: goto label_1fcb00;
        case 0x1fcb04u: goto label_1fcb04;
        case 0x1fcb08u: goto label_1fcb08;
        case 0x1fcb0cu: goto label_1fcb0c;
        case 0x1fcb10u: goto label_1fcb10;
        case 0x1fcb14u: goto label_1fcb14;
        case 0x1fcb18u: goto label_1fcb18;
        case 0x1fcb1cu: goto label_1fcb1c;
        case 0x1fcb20u: goto label_1fcb20;
        case 0x1fcb24u: goto label_1fcb24;
        case 0x1fcb28u: goto label_1fcb28;
        case 0x1fcb2cu: goto label_1fcb2c;
        case 0x1fcb30u: goto label_1fcb30;
        case 0x1fcb34u: goto label_1fcb34;
        case 0x1fcb38u: goto label_1fcb38;
        case 0x1fcb3cu: goto label_1fcb3c;
        case 0x1fcb40u: goto label_1fcb40;
        case 0x1fcb44u: goto label_1fcb44;
        case 0x1fcb48u: goto label_1fcb48;
        case 0x1fcb4cu: goto label_1fcb4c;
        case 0x1fcb50u: goto label_1fcb50;
        case 0x1fcb54u: goto label_1fcb54;
        case 0x1fcb58u: goto label_1fcb58;
        case 0x1fcb5cu: goto label_1fcb5c;
        case 0x1fcb60u: goto label_1fcb60;
        case 0x1fcb64u: goto label_1fcb64;
        case 0x1fcb68u: goto label_1fcb68;
        case 0x1fcb6cu: goto label_1fcb6c;
        case 0x1fcb70u: goto label_1fcb70;
        case 0x1fcb74u: goto label_1fcb74;
        case 0x1fcb78u: goto label_1fcb78;
        case 0x1fcb7cu: goto label_1fcb7c;
        case 0x1fcb80u: goto label_1fcb80;
        case 0x1fcb84u: goto label_1fcb84;
        case 0x1fcb88u: goto label_1fcb88;
        case 0x1fcb8cu: goto label_1fcb8c;
        case 0x1fcb90u: goto label_1fcb90;
        case 0x1fcb94u: goto label_1fcb94;
        case 0x1fcb98u: goto label_1fcb98;
        case 0x1fcb9cu: goto label_1fcb9c;
        case 0x1fcba0u: goto label_1fcba0;
        case 0x1fcba4u: goto label_1fcba4;
        case 0x1fcba8u: goto label_1fcba8;
        case 0x1fcbacu: goto label_1fcbac;
        case 0x1fcbb0u: goto label_1fcbb0;
        case 0x1fcbb4u: goto label_1fcbb4;
        case 0x1fcbb8u: goto label_1fcbb8;
        case 0x1fcbbcu: goto label_1fcbbc;
        case 0x1fcbc0u: goto label_1fcbc0;
        case 0x1fcbc4u: goto label_1fcbc4;
        case 0x1fcbc8u: goto label_1fcbc8;
        case 0x1fcbccu: goto label_1fcbcc;
        case 0x1fcbd0u: goto label_1fcbd0;
        case 0x1fcbd4u: goto label_1fcbd4;
        case 0x1fcbd8u: goto label_1fcbd8;
        case 0x1fcbdcu: goto label_1fcbdc;
        case 0x1fcbe0u: goto label_1fcbe0;
        case 0x1fcbe4u: goto label_1fcbe4;
        case 0x1fcbe8u: goto label_1fcbe8;
        case 0x1fcbecu: goto label_1fcbec;
        case 0x1fcbf0u: goto label_1fcbf0;
        case 0x1fcbf4u: goto label_1fcbf4;
        case 0x1fcbf8u: goto label_1fcbf8;
        case 0x1fcbfcu: goto label_1fcbfc;
        case 0x1fcc00u: goto label_1fcc00;
        case 0x1fcc04u: goto label_1fcc04;
        case 0x1fcc08u: goto label_1fcc08;
        case 0x1fcc0cu: goto label_1fcc0c;
        case 0x1fcc10u: goto label_1fcc10;
        case 0x1fcc14u: goto label_1fcc14;
        case 0x1fcc18u: goto label_1fcc18;
        case 0x1fcc1cu: goto label_1fcc1c;
        case 0x1fcc20u: goto label_1fcc20;
        case 0x1fcc24u: goto label_1fcc24;
        case 0x1fcc28u: goto label_1fcc28;
        case 0x1fcc2cu: goto label_1fcc2c;
        default: break;
    }

    ctx->pc = 0x1fc8c0u;

label_1fc8c0:
    // 0x1fc8c0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1fc8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1fc8c4:
    // 0x1fc8c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fc8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fc8c8:
    // 0x1fc8c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1fc8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1fc8cc:
    // 0x1fc8cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1fc8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1fc8d0:
    // 0x1fc8d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fc8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fc8d4:
    // 0x1fc8d4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1fc8d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1fc8d8:
    // 0x1fc8d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fc8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fc8dc:
    // 0x1fc8dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fc8dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc8e0:
    // 0x1fc8e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fc8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fc8e4:
    // 0x1fc8e4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1fc8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1fc8e8:
    // 0x1fc8e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fc8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fc8ec:
    // 0x1fc8ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fc8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fc8f0:
    // 0x1fc8f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fc8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fc8f4:
    // 0x1fc8f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fc8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fc8f8:
    // 0x1fc8f8: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1fc8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1fc8fc:
    // 0x1fc8fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1fc8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fc900:
    // 0x1fc900: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fc900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fc904:
    // 0x1fc904: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1fc904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1fc908:
    // 0x1fc908: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1fc908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fc90c:
    // 0x1fc90c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1fc910:
    if (ctx->pc == 0x1FC910u) {
        ctx->pc = 0x1FC910u;
            // 0x1fc910: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1FC914u;
        goto label_1fc914;
    }
    ctx->pc = 0x1FC90Cu;
    {
        const bool branch_taken_0x1fc90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC90Cu;
            // 0x1fc910: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc90c) {
            ctx->pc = 0x1FC93Cu;
            goto label_1fc93c;
        }
    }
    ctx->pc = 0x1FC914u;
label_1fc914:
    // 0x1fc914: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fc914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1fc918:
    // 0x1fc918: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1fc918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1fc91c:
    // 0x1fc91c: 0x2442b1a0  addiu       $v0, $v0, -0x4E60
    ctx->pc = 0x1fc91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947232));
label_1fc920:
    // 0x1fc920: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fc920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1fc924:
    // 0x1fc924: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fc924u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1fc928:
    // 0x1fc928: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1fc928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1fc92c:
    // 0x1fc92c: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fc92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1fc930:
    // 0x1fc930: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1fc930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1fc934:
    // 0x1fc934: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1fc934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1fc938:
    // 0x1fc938: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fc938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1fc93c:
    // 0x1fc93c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1fc93cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1fc940:
    // 0x1fc940: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1fc940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fc944:
    // 0x1fc944: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1fc944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1fc948:
    // 0x1fc948: 0xc0a456c  jal         func_2915B0
label_1fc94c:
    if (ctx->pc == 0x1FC94Cu) {
        ctx->pc = 0x1FC94Cu;
            // 0x1fc94c: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1FC950u;
        goto label_1fc950;
    }
    ctx->pc = 0x1FC948u;
    SET_GPR_U32(ctx, 31, 0x1FC950u);
    ctx->pc = 0x1FC94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC948u;
            // 0x1fc94c: 0x26060030  addiu       $a2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2915B0u;
    if (runtime->hasFunction(0x2915B0u)) {
        auto targetFn = runtime->lookupFunction(0x2915B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC950u; }
        if (ctx->pc != 0x1FC950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002915B0_0x2915b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC950u; }
        if (ctx->pc != 0x1FC950u) { return; }
    }
    ctx->pc = 0x1FC950u;
label_1fc950:
    // 0x1fc950: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1fc950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1fc954:
    // 0x1fc954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fc954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fc958:
    // 0x1fc958: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1fc958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1fc95c:
    // 0x1fc95c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1fc95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fc960:
    // 0x1fc960: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1fc960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc964:
    // 0x1fc964: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1fc964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fc968:
    // 0x1fc968: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x1fc968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc96c:
    // 0x1fc96c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1fc96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1fc970:
    // 0x1fc970: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1fc970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc974:
    // 0x1fc974: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x1fc974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1fc978:
    // 0x1fc978: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x1fc978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc97c:
    // 0x1fc97c: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1fc97cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1fc980:
    // 0x1fc980: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1fc980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc984:
    // 0x1fc984: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x1fc984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1fc988:
    // 0x1fc988: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1fc988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc98c:
    // 0x1fc98c: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x1fc98cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1fc990:
    // 0x1fc990: 0xc4610054  lwc1        $f1, 0x54($v1)
    ctx->pc = 0x1fc990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc994:
    // 0x1fc994: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x1fc994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1fc998:
    // 0x1fc998: 0xc4610058  lwc1        $f1, 0x58($v1)
    ctx->pc = 0x1fc998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc99c:
    // 0x1fc99c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x1fc99cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1fc9a0:
    // 0x1fc9a0: 0xc461005c  lwc1        $f1, 0x5C($v1)
    ctx->pc = 0x1fc9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fc9a4:
    // 0x1fc9a4: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x1fc9a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1fc9a8:
    // 0x1fc9a8: 0xc60a0028  lwc1        $f10, 0x28($s0)
    ctx->pc = 0x1fc9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1fc9ac:
    // 0x1fc9ac: 0xc4690064  lwc1        $f9, 0x64($v1)
    ctx->pc = 0x1fc9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fc9b0:
    // 0x1fc9b0: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x1fc9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fc9b4:
    // 0x1fc9b4: 0xc46b0068  lwc1        $f11, 0x68($v1)
    ctx->pc = 0x1fc9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1fc9b8:
    // 0x1fc9b8: 0x460a481a  mula.s      $f9, $f10
    ctx->pc = 0x1fc9b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
label_1fc9bc:
    // 0x1fc9bc: 0xc6070020  lwc1        $f7, 0x20($s0)
    ctx->pc = 0x1fc9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fc9c0:
    // 0x1fc9c0: 0x460c585d  msub.s      $f1, $f11, $f12
    ctx->pc = 0x1fc9c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[12]));
label_1fc9c4:
    // 0x1fc9c4: 0xc4680060  lwc1        $f8, 0x60($v1)
    ctx->pc = 0x1fc9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fc9c8:
    // 0x1fc9c8: 0x4607581a  mula.s      $f11, $f7
    ctx->pc = 0x1fc9c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
label_1fc9cc:
    // 0x1fc9cc: 0xc466006c  lwc1        $f6, 0x6C($v1)
    ctx->pc = 0x1fc9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fc9d0:
    // 0x1fc9d0: 0x460a411d  msub.s      $f4, $f8, $f10
    ctx->pc = 0x1fc9d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[10]));
label_1fc9d4:
    // 0x1fc9d4: 0x460c401a  mula.s      $f8, $f12
    ctx->pc = 0x1fc9d4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
label_1fc9d8:
    // 0x1fc9d8: 0x4607489d  msub.s      $f2, $f9, $f7
    ctx->pc = 0x1fc9d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[7]));
label_1fc9dc:
    // 0x1fc9dc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1fc9dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fc9e0:
    // 0x1fc9e0: 0x4607305c  madd.s      $f1, $f6, $f7
    ctx->pc = 0x1fc9e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
label_1fc9e4:
    // 0x1fc9e4: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x1fc9e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1fc9e8:
    // 0x1fc9e8: 0x460c315c  madd.s      $f5, $f6, $f12
    ctx->pc = 0x1fc9e8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[12]));
label_1fc9ec:
    // 0x1fc9ec: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1fc9ecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1fc9f0:
    // 0x1fc9f0: 0x460a311c  madd.s      $f4, $f6, $f10
    ctx->pc = 0x1fc9f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[10]));
label_1fc9f4:
    // 0x1fc9f4: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x1fc9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fc9f8:
    // 0x1fc9f8: 0x46000018  adda.s      $f0, $f0
    ctx->pc = 0x1fc9f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fc9fc:
    // 0x1fc9fc: 0x4603309c  madd.s      $f2, $f6, $f3
    ctx->pc = 0x1fc9fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
label_1fca00:
    // 0x1fca00: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1fca00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fca04:
    // 0x1fca04: 0x4608185c  madd.s      $f1, $f3, $f8
    ctx->pc = 0x1fca04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[8]));
label_1fca08:
    // 0x1fca08: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x1fca08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1fca0c:
    // 0x1fca0c: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x1fca0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1fca10:
    // 0x1fca10: 0x4609185c  madd.s      $f1, $f3, $f9
    ctx->pc = 0x1fca10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[9]));
label_1fca14:
    // 0x1fca14: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x1fca14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1fca18:
    // 0x1fca18: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x1fca18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1fca1c:
    // 0x1fca1c: 0x460b185c  madd.s      $f1, $f3, $f11
    ctx->pc = 0x1fca1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[11]));
label_1fca20:
    // 0x1fca20: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1fca20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1fca24:
    // 0x1fca24: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x1fca24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1fca28:
    // 0x1fca28: 0x4606185c  madd.s      $f1, $f3, $f6
    ctx->pc = 0x1fca28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_1fca2c:
    // 0x1fca2c: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x1fca2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1fca30:
    // 0x1fca30: 0x460c481a  mula.s      $f9, $f12
    ctx->pc = 0x1fca30u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
label_1fca34:
    // 0x1fca34: 0x4607401e  madda.s     $f8, $f7
    ctx->pc = 0x1fca34u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
label_1fca38:
    // 0x1fca38: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x1fca38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_1fca3c:
    // 0x1fca3c: 0x460a589c  madd.s      $f2, $f11, $f10
    ctx->pc = 0x1fca3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[10]));
label_1fca40:
    // 0x1fca40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1fca40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1fca44:
    // 0x1fca44: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x1fca44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1fca48:
    // 0x1fca48: 0xc60a0028  lwc1        $f10, 0x28($s0)
    ctx->pc = 0x1fca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1fca4c:
    // 0x1fca4c: 0xc4690074  lwc1        $f9, 0x74($v1)
    ctx->pc = 0x1fca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fca50:
    // 0x1fca50: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x1fca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fca54:
    // 0x1fca54: 0xc46b0078  lwc1        $f11, 0x78($v1)
    ctx->pc = 0x1fca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1fca58:
    // 0x1fca58: 0x460a481a  mula.s      $f9, $f10
    ctx->pc = 0x1fca58u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
label_1fca5c:
    // 0x1fca5c: 0xc6070020  lwc1        $f7, 0x20($s0)
    ctx->pc = 0x1fca5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fca60:
    // 0x1fca60: 0x460c585d  msub.s      $f1, $f11, $f12
    ctx->pc = 0x1fca60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[12]));
label_1fca64:
    // 0x1fca64: 0xc4680070  lwc1        $f8, 0x70($v1)
    ctx->pc = 0x1fca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fca68:
    // 0x1fca68: 0x4607581a  mula.s      $f11, $f7
    ctx->pc = 0x1fca68u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
label_1fca6c:
    // 0x1fca6c: 0xc466007c  lwc1        $f6, 0x7C($v1)
    ctx->pc = 0x1fca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fca70:
    // 0x1fca70: 0x460a411d  msub.s      $f4, $f8, $f10
    ctx->pc = 0x1fca70u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[10]));
label_1fca74:
    // 0x1fca74: 0x460c401a  mula.s      $f8, $f12
    ctx->pc = 0x1fca74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
label_1fca78:
    // 0x1fca78: 0x4607489d  msub.s      $f2, $f9, $f7
    ctx->pc = 0x1fca78u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[7]));
label_1fca7c:
    // 0x1fca7c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1fca7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fca80:
    // 0x1fca80: 0x4607305c  madd.s      $f1, $f6, $f7
    ctx->pc = 0x1fca80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
label_1fca84:
    // 0x1fca84: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x1fca84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1fca88:
    // 0x1fca88: 0x460c315c  madd.s      $f5, $f6, $f12
    ctx->pc = 0x1fca88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[12]));
label_1fca8c:
    // 0x1fca8c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1fca8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1fca90:
    // 0x1fca90: 0x460a311c  madd.s      $f4, $f6, $f10
    ctx->pc = 0x1fca90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[10]));
label_1fca94:
    // 0x1fca94: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x1fca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fca98:
    // 0x1fca98: 0x46000018  adda.s      $f0, $f0
    ctx->pc = 0x1fca98u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1fca9c:
    // 0x1fca9c: 0x4603309c  madd.s      $f2, $f6, $f3
    ctx->pc = 0x1fca9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
label_1fcaa0:
    // 0x1fcaa0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1fcaa0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1fcaa4:
    // 0x1fcaa4: 0x4608185c  madd.s      $f1, $f3, $f8
    ctx->pc = 0x1fcaa4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[8]));
label_1fcaa8:
    // 0x1fcaa8: 0x46050018  adda.s      $f0, $f5
    ctx->pc = 0x1fcaa8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1fcaac:
    // 0x1fcaac: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1fcaacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1fcab0:
    // 0x1fcab0: 0x4609185c  madd.s      $f1, $f3, $f9
    ctx->pc = 0x1fcab0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[9]));
label_1fcab4:
    // 0x1fcab4: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x1fcab4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1fcab8:
    // 0x1fcab8: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x1fcab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1fcabc:
    // 0x1fcabc: 0x460b185c  madd.s      $f1, $f3, $f11
    ctx->pc = 0x1fcabcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[11]));
label_1fcac0:
    // 0x1fcac0: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1fcac0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1fcac4:
    // 0x1fcac4: 0x4606181c  madd.s      $f0, $f3, $f6
    ctx->pc = 0x1fcac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
label_1fcac8:
    // 0x1fcac8: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x1fcac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1fcacc:
    // 0x1fcacc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1fcaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1fcad0:
    // 0x1fcad0: 0x460c481a  mula.s      $f9, $f12
    ctx->pc = 0x1fcad0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
label_1fcad4:
    // 0x1fcad4: 0x4607401e  madda.s     $f8, $f7
    ctx->pc = 0x1fcad4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[7]));
label_1fcad8:
    // 0x1fcad8: 0x46033002  mul.s       $f0, $f6, $f3
    ctx->pc = 0x1fcad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_1fcadc:
    // 0x1fcadc: 0x460a585c  madd.s      $f1, $f11, $f10
    ctx->pc = 0x1fcadcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[10]));
label_1fcae0:
    // 0x1fcae0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1fcae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1fcae4:
    // 0x1fcae4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1fcae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1fcae8:
    // 0x1fcae8: 0xc4620080  lwc1        $f2, 0x80($v1)
    ctx->pc = 0x1fcae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fcaec:
    // 0x1fcaec: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x1fcaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcaf0:
    // 0x1fcaf0: 0xc4640084  lwc1        $f4, 0x84($v1)
    ctx->pc = 0x1fcaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fcaf4:
    // 0x1fcaf4: 0xc6030064  lwc1        $f3, 0x64($s0)
    ctx->pc = 0x1fcaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fcaf8:
    // 0x1fcaf8: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x1fcaf8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1fcafc:
    // 0x1fcafc: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x1fcafcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1fcb00:
    // 0x1fcb00: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x1fcb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fcb04:
    // 0x1fcb04: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x1fcb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcb08:
    // 0x1fcb08: 0xc6020038  lwc1        $f2, 0x38($s0)
    ctx->pc = 0x1fcb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fcb0c:
    // 0x1fcb0c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x1fcb0cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1fcb10:
    // 0x1fcb10: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1fcb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcb14:
    // 0x1fcb14: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1fcb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fcb18:
    // 0x1fcb18: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fcb18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fcb1c:
    // 0x1fcb1c: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fcb1cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fcb20:
    // 0x1fcb20: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fcb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fcb24:
    // 0x1fcb24: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1fcb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1fcb28:
    // 0x1fcb28: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x1fcb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcb2c:
    // 0x1fcb2c: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x1fcb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fcb30:
    // 0x1fcb30: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x1fcb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fcb34:
    // 0x1fcb34: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fcb34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fcb38:
    // 0x1fcb38: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fcb38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fcb3c:
    // 0x1fcb3c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fcb3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fcb40:
    // 0x1fcb40: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1fcb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1fcb44:
    // 0x1fcb44: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x1fcb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcb48:
    // 0x1fcb48: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x1fcb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fcb4c:
    // 0x1fcb4c: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x1fcb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fcb50:
    // 0x1fcb50: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x1fcb50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1fcb54:
    // 0x1fcb54: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x1fcb54u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_1fcb58:
    // 0x1fcb58: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1fcb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1fcb5c:
    // 0x1fcb5c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1fcb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1fcb60:
    // 0x1fcb60: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x1fcb60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_1fcb64:
    // 0x1fcb64: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1fcb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1fcb68:
    // 0x1fcb68: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1fcb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcb6c:
    // 0x1fcb6c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1fcb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1fcb70:
    // 0x1fcb70: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x1fcb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcb74:
    // 0x1fcb74: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1fcb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1fcb78:
    // 0x1fcb78: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1fcb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcb7c:
    // 0x1fcb7c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1fcb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1fcb80:
    // 0x1fcb80: 0xc460009c  lwc1        $f0, 0x9C($v1)
    ctx->pc = 0x1fcb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcb84:
    // 0x1fcb84: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1fcb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1fcb88:
    // 0x1fcb88: 0xc46000a0  lwc1        $f0, 0xA0($v1)
    ctx->pc = 0x1fcb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fcb8c:
    // 0x1fcb8c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x1fcb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1fcb90:
    // 0x1fcb90: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_1fcb94:
    // 0x1fcb94: 0xafb3007c  sw          $s3, 0x7C($sp)
    ctx->pc = 0x1fcb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
label_1fcb98:
    // 0x1fcb98: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1fcb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1fcb9c:
    // 0x1fcb9c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1fcb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1fcba0:
    // 0x1fcba0: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1fcba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
label_1fcba4:
    // 0x1fcba4: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1fcba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1fcba8:
    // 0x1fcba8: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x1fcba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1fcbac:
    // 0x1fcbac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fcbacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fcbb0:
    // 0x1fcbb0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1fcbb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1fcbb4:
    // 0x1fcbb4: 0x320f809  jalr        $t9
label_1fcbb8:
    if (ctx->pc == 0x1FCBB8u) {
        ctx->pc = 0x1FCBB8u;
            // 0x1fcbb8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1FCBBCu;
        goto label_1fcbbc;
    }
    ctx->pc = 0x1FCBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FCBBCu);
        ctx->pc = 0x1FCBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCBB4u;
            // 0x1fcbb8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FCBBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBBCu; }
            if (ctx->pc != 0x1FCBBCu) { return; }
        }
        }
    }
    ctx->pc = 0x1FCBBCu;
label_1fcbbc:
    // 0x1fcbbc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fcbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fcbc0:
    // 0x1fcbc0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fcbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fcbc4:
    // 0x1fcbc4: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fcbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fcbc8:
    // 0x1fcbc8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fcbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fcbcc:
    // 0x1fcbcc: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fcbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fcbd0:
    // 0x1fcbd0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fcbd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fcbd4:
    // 0x1fcbd4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fcbd8:
    if (ctx->pc == 0x1FCBD8u) {
        ctx->pc = 0x1FCBD8u;
            // 0x1fcbd8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FCBDCu;
        goto label_1fcbdc;
    }
    ctx->pc = 0x1FCBD4u;
    {
        const bool branch_taken_0x1fcbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCBD4u;
            // 0x1fcbd8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbd4) {
            ctx->pc = 0x1FCC04u;
            goto label_1fcc04;
        }
    }
    ctx->pc = 0x1FCBDCu;
label_1fcbdc:
    // 0x1fcbdc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fcbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fcbe0:
    // 0x1fcbe0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fcbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fcbe4:
    // 0x1fcbe4: 0x2463b1b0  addiu       $v1, $v1, -0x4E50
    ctx->pc = 0x1fcbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947248));
label_1fcbe8:
    // 0x1fcbe8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fcbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fcbec:
    // 0x1fcbec: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fcbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fcbf0:
    // 0x1fcbf0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fcbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fcbf4:
    // 0x1fcbf4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fcbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fcbf8:
    // 0x1fcbf8: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fcbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fcbfc:
    // 0x1fcbfc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fcbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fcc00:
    // 0x1fcc00: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fcc00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fcc04:
    // 0x1fcc04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fcc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fcc08:
    // 0x1fcc08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fcc08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fcc0c:
    // 0x1fcc0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fcc0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fcc10:
    // 0x1fcc10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fcc10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fcc14:
    // 0x1fcc14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fcc14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fcc18:
    // 0x1fcc18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcc18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fcc1c:
    // 0x1fcc1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fcc1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fcc20:
    // 0x1fcc20: 0x3e00008  jr          $ra
label_1fcc24:
    if (ctx->pc == 0x1FCC24u) {
        ctx->pc = 0x1FCC24u;
            // 0x1fcc24: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1FCC28u;
        goto label_1fcc28;
    }
    ctx->pc = 0x1FCC20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCC20u;
            // 0x1fcc24: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCC28u;
label_1fcc28:
    // 0x1fcc28: 0x0  nop
    ctx->pc = 0x1fcc28u;
    // NOP
label_1fcc2c:
    // 0x1fcc2c: 0x0  nop
    ctx->pc = 0x1fcc2cu;
    // NOP
}
