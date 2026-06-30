#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013FDB0
// Address: 0x13fdb0 - 0x140070
void sub_0013FDB0_0x13fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FDB0_0x13fdb0");
#endif

    switch (ctx->pc) {
        case 0x13fdb0u: goto label_13fdb0;
        case 0x13fdb4u: goto label_13fdb4;
        case 0x13fdb8u: goto label_13fdb8;
        case 0x13fdbcu: goto label_13fdbc;
        case 0x13fdc0u: goto label_13fdc0;
        case 0x13fdc4u: goto label_13fdc4;
        case 0x13fdc8u: goto label_13fdc8;
        case 0x13fdccu: goto label_13fdcc;
        case 0x13fdd0u: goto label_13fdd0;
        case 0x13fdd4u: goto label_13fdd4;
        case 0x13fdd8u: goto label_13fdd8;
        case 0x13fddcu: goto label_13fddc;
        case 0x13fde0u: goto label_13fde0;
        case 0x13fde4u: goto label_13fde4;
        case 0x13fde8u: goto label_13fde8;
        case 0x13fdecu: goto label_13fdec;
        case 0x13fdf0u: goto label_13fdf0;
        case 0x13fdf4u: goto label_13fdf4;
        case 0x13fdf8u: goto label_13fdf8;
        case 0x13fdfcu: goto label_13fdfc;
        case 0x13fe00u: goto label_13fe00;
        case 0x13fe04u: goto label_13fe04;
        case 0x13fe08u: goto label_13fe08;
        case 0x13fe0cu: goto label_13fe0c;
        case 0x13fe10u: goto label_13fe10;
        case 0x13fe14u: goto label_13fe14;
        case 0x13fe18u: goto label_13fe18;
        case 0x13fe1cu: goto label_13fe1c;
        case 0x13fe20u: goto label_13fe20;
        case 0x13fe24u: goto label_13fe24;
        case 0x13fe28u: goto label_13fe28;
        case 0x13fe2cu: goto label_13fe2c;
        case 0x13fe30u: goto label_13fe30;
        case 0x13fe34u: goto label_13fe34;
        case 0x13fe38u: goto label_13fe38;
        case 0x13fe3cu: goto label_13fe3c;
        case 0x13fe40u: goto label_13fe40;
        case 0x13fe44u: goto label_13fe44;
        case 0x13fe48u: goto label_13fe48;
        case 0x13fe4cu: goto label_13fe4c;
        case 0x13fe50u: goto label_13fe50;
        case 0x13fe54u: goto label_13fe54;
        case 0x13fe58u: goto label_13fe58;
        case 0x13fe5cu: goto label_13fe5c;
        case 0x13fe60u: goto label_13fe60;
        case 0x13fe64u: goto label_13fe64;
        case 0x13fe68u: goto label_13fe68;
        case 0x13fe6cu: goto label_13fe6c;
        case 0x13fe70u: goto label_13fe70;
        case 0x13fe74u: goto label_13fe74;
        case 0x13fe78u: goto label_13fe78;
        case 0x13fe7cu: goto label_13fe7c;
        case 0x13fe80u: goto label_13fe80;
        case 0x13fe84u: goto label_13fe84;
        case 0x13fe88u: goto label_13fe88;
        case 0x13fe8cu: goto label_13fe8c;
        case 0x13fe90u: goto label_13fe90;
        case 0x13fe94u: goto label_13fe94;
        case 0x13fe98u: goto label_13fe98;
        case 0x13fe9cu: goto label_13fe9c;
        case 0x13fea0u: goto label_13fea0;
        case 0x13fea4u: goto label_13fea4;
        case 0x13fea8u: goto label_13fea8;
        case 0x13feacu: goto label_13feac;
        case 0x13feb0u: goto label_13feb0;
        case 0x13feb4u: goto label_13feb4;
        case 0x13feb8u: goto label_13feb8;
        case 0x13febcu: goto label_13febc;
        case 0x13fec0u: goto label_13fec0;
        case 0x13fec4u: goto label_13fec4;
        case 0x13fec8u: goto label_13fec8;
        case 0x13feccu: goto label_13fecc;
        case 0x13fed0u: goto label_13fed0;
        case 0x13fed4u: goto label_13fed4;
        case 0x13fed8u: goto label_13fed8;
        case 0x13fedcu: goto label_13fedc;
        case 0x13fee0u: goto label_13fee0;
        case 0x13fee4u: goto label_13fee4;
        case 0x13fee8u: goto label_13fee8;
        case 0x13feecu: goto label_13feec;
        case 0x13fef0u: goto label_13fef0;
        case 0x13fef4u: goto label_13fef4;
        case 0x13fef8u: goto label_13fef8;
        case 0x13fefcu: goto label_13fefc;
        case 0x13ff00u: goto label_13ff00;
        case 0x13ff04u: goto label_13ff04;
        case 0x13ff08u: goto label_13ff08;
        case 0x13ff0cu: goto label_13ff0c;
        case 0x13ff10u: goto label_13ff10;
        case 0x13ff14u: goto label_13ff14;
        case 0x13ff18u: goto label_13ff18;
        case 0x13ff1cu: goto label_13ff1c;
        case 0x13ff20u: goto label_13ff20;
        case 0x13ff24u: goto label_13ff24;
        case 0x13ff28u: goto label_13ff28;
        case 0x13ff2cu: goto label_13ff2c;
        case 0x13ff30u: goto label_13ff30;
        case 0x13ff34u: goto label_13ff34;
        case 0x13ff38u: goto label_13ff38;
        case 0x13ff3cu: goto label_13ff3c;
        case 0x13ff40u: goto label_13ff40;
        case 0x13ff44u: goto label_13ff44;
        case 0x13ff48u: goto label_13ff48;
        case 0x13ff4cu: goto label_13ff4c;
        case 0x13ff50u: goto label_13ff50;
        case 0x13ff54u: goto label_13ff54;
        case 0x13ff58u: goto label_13ff58;
        case 0x13ff5cu: goto label_13ff5c;
        case 0x13ff60u: goto label_13ff60;
        case 0x13ff64u: goto label_13ff64;
        case 0x13ff68u: goto label_13ff68;
        case 0x13ff6cu: goto label_13ff6c;
        case 0x13ff70u: goto label_13ff70;
        case 0x13ff74u: goto label_13ff74;
        case 0x13ff78u: goto label_13ff78;
        case 0x13ff7cu: goto label_13ff7c;
        case 0x13ff80u: goto label_13ff80;
        case 0x13ff84u: goto label_13ff84;
        case 0x13ff88u: goto label_13ff88;
        case 0x13ff8cu: goto label_13ff8c;
        case 0x13ff90u: goto label_13ff90;
        case 0x13ff94u: goto label_13ff94;
        case 0x13ff98u: goto label_13ff98;
        case 0x13ff9cu: goto label_13ff9c;
        case 0x13ffa0u: goto label_13ffa0;
        case 0x13ffa4u: goto label_13ffa4;
        case 0x13ffa8u: goto label_13ffa8;
        case 0x13ffacu: goto label_13ffac;
        case 0x13ffb0u: goto label_13ffb0;
        case 0x13ffb4u: goto label_13ffb4;
        case 0x13ffb8u: goto label_13ffb8;
        case 0x13ffbcu: goto label_13ffbc;
        case 0x13ffc0u: goto label_13ffc0;
        case 0x13ffc4u: goto label_13ffc4;
        case 0x13ffc8u: goto label_13ffc8;
        case 0x13ffccu: goto label_13ffcc;
        case 0x13ffd0u: goto label_13ffd0;
        case 0x13ffd4u: goto label_13ffd4;
        case 0x13ffd8u: goto label_13ffd8;
        case 0x13ffdcu: goto label_13ffdc;
        case 0x13ffe0u: goto label_13ffe0;
        case 0x13ffe4u: goto label_13ffe4;
        case 0x13ffe8u: goto label_13ffe8;
        case 0x13ffecu: goto label_13ffec;
        case 0x13fff0u: goto label_13fff0;
        case 0x13fff4u: goto label_13fff4;
        case 0x13fff8u: goto label_13fff8;
        case 0x13fffcu: goto label_13fffc;
        case 0x140000u: goto label_140000;
        case 0x140004u: goto label_140004;
        case 0x140008u: goto label_140008;
        case 0x14000cu: goto label_14000c;
        case 0x140010u: goto label_140010;
        case 0x140014u: goto label_140014;
        case 0x140018u: goto label_140018;
        case 0x14001cu: goto label_14001c;
        case 0x140020u: goto label_140020;
        case 0x140024u: goto label_140024;
        case 0x140028u: goto label_140028;
        case 0x14002cu: goto label_14002c;
        case 0x140030u: goto label_140030;
        case 0x140034u: goto label_140034;
        case 0x140038u: goto label_140038;
        case 0x14003cu: goto label_14003c;
        case 0x140040u: goto label_140040;
        case 0x140044u: goto label_140044;
        case 0x140048u: goto label_140048;
        case 0x14004cu: goto label_14004c;
        case 0x140050u: goto label_140050;
        case 0x140054u: goto label_140054;
        case 0x140058u: goto label_140058;
        case 0x14005cu: goto label_14005c;
        case 0x140060u: goto label_140060;
        case 0x140064u: goto label_140064;
        case 0x140068u: goto label_140068;
        case 0x14006cu: goto label_14006c;
        default: break;
    }

    ctx->pc = 0x13fdb0u;

label_13fdb0:
    // 0x13fdb0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x13fdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_13fdb4:
    // 0x13fdb4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_13fdb8:
    // 0x13fdb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13fdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_13fdbc:
    // 0x13fdbc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13fdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_13fdc0:
    // 0x13fdc0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13fdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13fdc4:
    // 0x13fdc4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x13fdc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13fdc8:
    // 0x13fdc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13fdcc:
    // 0x13fdcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13fdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fdd0:
    // 0x13fdd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13fdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13fdd4:
    // 0x13fdd4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13fdd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13fdd8:
    // 0x13fdd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13fdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13fddc:
    // 0x13fddc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_13fde0:
    // 0x13fde0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13fde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13fde4:
    // 0x13fde4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x13fde4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13fde8:
    // 0x13fde8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13fdec:
    // 0x13fdec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13fdecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13fdf0:
    // 0x13fdf0: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x13fdf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_13fdf4:
    // 0x13fdf4: 0xac80579c  sw          $zero, 0x579C($a0)
    ctx->pc = 0x13fdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22428), GPR_U32(ctx, 0));
label_13fdf8:
    // 0x13fdf8: 0xac605774  sw          $zero, 0x5774($v1)
    ctx->pc = 0x13fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 0));
label_13fdfc:
    // 0x13fdfc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x13fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_13fe00:
    // 0x13fe00: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x13fe00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_13fe04:
    // 0x13fe04: 0x1020008e  beqz        $at, . + 4 + (0x8E << 2)
label_13fe08:
    if (ctx->pc == 0x13FE08u) {
        ctx->pc = 0x13FE08u;
            // 0x13fe08: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FE0Cu;
        goto label_13fe0c;
    }
    ctx->pc = 0x13FE04u;
    {
        const bool branch_taken_0x13fe04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE04u;
            // 0x13fe08: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe04) {
            ctx->pc = 0x140040u;
            goto label_140040;
        }
    }
    ctx->pc = 0x13FE0Cu;
label_13fe0c:
    // 0x13fe0c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13fe10:
    // 0x13fe10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_13fe14:
    // 0x13fe14: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_13fe18:
    if (ctx->pc == 0x13FE18u) {
        ctx->pc = 0x13FE18u;
            // 0x13fe18: 0xac435770  sw          $v1, 0x5770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
        ctx->pc = 0x13FE1Cu;
        goto label_13fe1c;
    }
    ctx->pc = 0x13FE14u;
    {
        const bool branch_taken_0x13fe14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE14u;
            // 0x13fe18: 0xac435770  sw          $v1, 0x5770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe14) {
            ctx->pc = 0x13FE28u;
            goto label_13fe28;
        }
    }
    ctx->pc = 0x13FE1Cu;
label_13fe1c:
    // 0x13fe1c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13fe20:
    // 0x13fe20: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_13fe24:
    // 0x13fe24: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x13fe24u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13fe28:
    // 0x13fe28: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x13fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13fe2c:
    // 0x13fe2c: 0xc05001c  jal         func_140070
label_13fe30:
    if (ctx->pc == 0x13FE30u) {
        ctx->pc = 0x13FE30u;
            // 0x13fe30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FE34u;
        goto label_13fe34;
    }
    ctx->pc = 0x13FE2Cu;
    SET_GPR_U32(ctx, 31, 0x13FE34u);
    ctx->pc = 0x13FE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE2Cu;
            // 0x13fe30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140070u;
    if (runtime->hasFunction(0x140070u)) {
        auto targetFn = runtime->lookupFunction(0x140070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FE34u; }
        if (ctx->pc != 0x13FE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140070_0x140070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FE34u; }
        if (ctx->pc != 0x13FE34u) { return; }
    }
    ctx->pc = 0x13FE34u;
label_13fe34:
    // 0x13fe34: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_13fe38:
    if (ctx->pc == 0x13FE38u) {
        ctx->pc = 0x13FE3Cu;
        goto label_13fe3c;
    }
    ctx->pc = 0x13FE34u;
    {
        const bool branch_taken_0x13fe34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fe34) {
            ctx->pc = 0x140000u;
            goto label_140000;
        }
    }
    ctx->pc = 0x13FE3Cu;
label_13fe3c:
    // 0x13fe3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_13fe40:
    // 0x13fe40: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_13fe44:
    // 0x13fe44: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x13fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
label_13fe48:
    // 0x13fe48: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x13fe48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
label_13fe4c:
    // 0x13fe4c: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x13fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
label_13fe50:
    // 0x13fe50: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x13fe50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
label_13fe54:
    // 0x13fe54: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_13fe58:
    // 0x13fe58: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x13fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
label_13fe5c:
    // 0x13fe5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_13fe60:
    // 0x13fe60: 0x8e2a0018  lw          $t2, 0x18($s1)
    ctx->pc = 0x13fe60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_13fe64:
    // 0x13fe64: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_13fe68:
    // 0x13fe68: 0x8c495768  lw          $t1, 0x5768($v0)
    ctx->pc = 0x13fe68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
label_13fe6c:
    // 0x13fe6c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_13fe70:
    // 0x13fe70: 0x24845760  addiu       $a0, $a0, 0x5760
    ctx->pc = 0x13fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
label_13fe74:
    // 0x13fe74: 0xad0a5760  sw          $t2, 0x5760($t0)
    ctx->pc = 0x13fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 22368), GPR_U32(ctx, 10));
label_13fe78:
    // 0x13fe78: 0x8e880014  lw          $t0, 0x14($s4)
    ctx->pc = 0x13fe78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_13fe7c:
    // 0x13fe7c: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x13fe7cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_13fe80:
    // 0x13fe80: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_13fe84:
    // 0x13fe84: 0xacc9576c  sw          $t1, 0x576C($a2)
    ctx->pc = 0x13fe84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22380), GPR_U32(ctx, 9));
label_13fe88:
    // 0x13fe88: 0x10a3021  addu        $a2, $t0, $t2
    ctx->pc = 0x13fe88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_13fe8c:
    // 0x13fe8c: 0xace6577c  sw          $a2, 0x577C($a3)
    ctx->pc = 0x13fe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22396), GPR_U32(ctx, 6));
label_13fe90:
    // 0x13fe90: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x13fe90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_13fe94:
    // 0x13fe94: 0xaca65768  sw          $a2, 0x5768($a1)
    ctx->pc = 0x13fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22376), GPR_U32(ctx, 6));
label_13fe98:
    // 0x13fe98: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x13fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_13fe9c:
    // 0x13fe9c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13fe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_13fea0:
    // 0x13fea0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_13fea4:
    // 0x13fea4: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x13fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
label_13fea8:
    // 0x13fea8: 0xc05055c  jal         func_141570
label_13feac:
    if (ctx->pc == 0x13FEACu) {
        ctx->pc = 0x13FEACu;
            // 0x13feac: 0xac655780  sw          $a1, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 5));
        ctx->pc = 0x13FEB0u;
        goto label_13feb0;
    }
    ctx->pc = 0x13FEA8u;
    SET_GPR_U32(ctx, 31, 0x13FEB0u);
    ctx->pc = 0x13FEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FEA8u;
            // 0x13feac: 0xac655780  sw          $a1, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141570u;
    if (runtime->hasFunction(0x141570u)) {
        auto targetFn = runtime->lookupFunction(0x141570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FEB0u; }
        if (ctx->pc != 0x13FEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141570_0x141570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FEB0u; }
        if (ctx->pc != 0x13FEB0u) { return; }
    }
    ctx->pc = 0x13FEB0u;
label_13feb0:
    // 0x13feb0: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_13feb4:
    if (ctx->pc == 0x13FEB4u) {
        ctx->pc = 0x13FEB8u;
        goto label_13feb8;
    }
    ctx->pc = 0x13FEB0u;
    {
        const bool branch_taken_0x13feb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13feb0) {
            ctx->pc = 0x140000u;
            goto label_140000;
        }
    }
    ctx->pc = 0x13FEB8u;
label_13feb8:
    // 0x13feb8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_13febc:
    // 0x13febc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13febcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_13fec0:
    // 0x13fec0: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x13fec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
label_13fec4:
    // 0x13fec4: 0x8c445828  lw          $a0, 0x5828($v0)
    ctx->pc = 0x13fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_13fec8:
    // 0x13fec8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_13fecc:
    // 0x13fecc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x13feccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_13fed0:
    // 0x13fed0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_13fed4:
    // 0x13fed4: 0xac645824  sw          $a0, 0x5824($v1)
    ctx->pc = 0x13fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
label_13fed8:
    // 0x13fed8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x13fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_13fedc:
    // 0x13fedc: 0x8c425804  lw          $v0, 0x5804($v0)
    ctx->pc = 0x13fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22532)));
label_13fee0:
    // 0x13fee0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x13fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_13fee4:
    // 0x13fee4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_13fee8:
    if (ctx->pc == 0x13FEE8u) {
        ctx->pc = 0x13FEE8u;
            // 0x13fee8: 0x2c38021  addu        $s0, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->pc = 0x13FEECu;
        goto label_13feec;
    }
    ctx->pc = 0x13FEE4u;
    {
        const bool branch_taken_0x13fee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13FEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FEE4u;
            // 0x13fee8: 0x2c38021  addu        $s0, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fee4) {
            ctx->pc = 0x13FF08u;
            goto label_13ff08;
        }
    }
    ctx->pc = 0x13FEECu;
label_13feec:
    // 0x13feec: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x13feecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
label_13fef0:
    // 0x13fef0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13fef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13fef4:
    // 0x13fef4: 0x24a51fa0  addiu       $a1, $a1, 0x1FA0
    ctx->pc = 0x13fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8096));
label_13fef8:
    // 0x13fef8: 0xc04cd60  jal         func_133580
label_13fefc:
    if (ctx->pc == 0x13FEFCu) {
        ctx->pc = 0x13FEFCu;
            // 0x13fefc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FF00u;
        goto label_13ff00;
    }
    ctx->pc = 0x13FEF8u;
    SET_GPR_U32(ctx, 31, 0x13FF00u);
    ctx->pc = 0x13FEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FEF8u;
            // 0x13fefc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF00u; }
        if (ctx->pc != 0x13FF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF00u; }
        if (ctx->pc != 0x13FF00u) { return; }
    }
    ctx->pc = 0x13FF00u;
label_13ff00:
    // 0x13ff00: 0xc04fe9c  jal         func_13FA70
label_13ff04:
    if (ctx->pc == 0x13FF04u) {
        ctx->pc = 0x13FF04u;
            // 0x13ff04: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x13FF08u;
        goto label_13ff08;
    }
    ctx->pc = 0x13FF00u;
    SET_GPR_U32(ctx, 31, 0x13FF08u);
    ctx->pc = 0x13FF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF00u;
            // 0x13ff04: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA70u;
    if (runtime->hasFunction(0x13FA70u)) {
        auto targetFn = runtime->lookupFunction(0x13FA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF08u; }
        if (ctx->pc != 0x13FF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FA70_0x13fa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF08u; }
        if (ctx->pc != 0x13FF08u) { return; }
    }
    ctx->pc = 0x13FF08u;
label_13ff08:
    // 0x13ff08: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_13ff0c:
    // 0x13ff0c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x13ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_13ff10:
    // 0x13ff10: 0x24a55520  addiu       $a1, $a1, 0x5520
    ctx->pc = 0x13ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
label_13ff14:
    // 0x13ff14: 0xc04cd60  jal         func_133580
label_13ff18:
    if (ctx->pc == 0x13FF18u) {
        ctx->pc = 0x13FF18u;
            // 0x13ff18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FF1Cu;
        goto label_13ff1c;
    }
    ctx->pc = 0x13FF14u;
    SET_GPR_U32(ctx, 31, 0x13FF1Cu);
    ctx->pc = 0x13FF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF14u;
            // 0x13ff18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF1Cu; }
        if (ctx->pc != 0x13FF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF1Cu; }
        if (ctx->pc != 0x13FF1Cu) { return; }
    }
    ctx->pc = 0x13FF1Cu;
label_13ff1c:
    // 0x13ff1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13ff20:
    // 0x13ff20: 0xc0573e0  jal         func_15CF80
label_13ff24:
    if (ctx->pc == 0x13FF24u) {
        ctx->pc = 0x13FF24u;
            // 0x13ff24: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x13FF28u;
        goto label_13ff28;
    }
    ctx->pc = 0x13FF20u;
    SET_GPR_U32(ctx, 31, 0x13FF28u);
    ctx->pc = 0x13FF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF20u;
            // 0x13ff24: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF28u; }
        if (ctx->pc != 0x13FF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF28u; }
        if (ctx->pc != 0x13FF28u) { return; }
    }
    ctx->pc = 0x13FF28u;
label_13ff28:
    // 0x13ff28: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_13ff2c:
    // 0x13ff2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13ff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13ff30:
    // 0x13ff30: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x13ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
label_13ff34:
    // 0x13ff34: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x13ff34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_13ff38:
    // 0x13ff38: 0x1065001d  beq         $v1, $a1, . + 4 + (0x1D << 2)
label_13ff3c:
    if (ctx->pc == 0x13FF3Cu) {
        ctx->pc = 0x13FF40u;
        goto label_13ff40;
    }
    ctx->pc = 0x13FF38u;
    {
        const bool branch_taken_0x13ff38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x13ff38) {
            ctx->pc = 0x13FFB0u;
            goto label_13ffb0;
        }
    }
    ctx->pc = 0x13FF40u;
label_13ff40:
    // 0x13ff40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13ff44:
    // 0x13ff44: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_13ff48:
    if (ctx->pc == 0x13FF48u) {
        ctx->pc = 0x13FF4Cu;
        goto label_13ff4c;
    }
    ctx->pc = 0x13FF44u;
    {
        const bool branch_taken_0x13ff44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ff44) {
            ctx->pc = 0x13FF98u;
            goto label_13ff98;
        }
    }
    ctx->pc = 0x13FF4Cu;
label_13ff4c:
    // 0x13ff4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x13ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_13ff50:
    // 0x13ff50: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_13ff54:
    if (ctx->pc == 0x13FF54u) {
        ctx->pc = 0x13FF58u;
        goto label_13ff58;
    }
    ctx->pc = 0x13FF50u;
    {
        const bool branch_taken_0x13ff50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ff50) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FF58u;
label_13ff58:
    // 0x13ff58: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_13ff5c:
    // 0x13ff5c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_13ff60:
    if (ctx->pc == 0x13FF60u) {
        ctx->pc = 0x13FF64u;
        goto label_13ff64;
    }
    ctx->pc = 0x13FF5Cu;
    {
        const bool branch_taken_0x13ff5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ff5c) {
            ctx->pc = 0x13FF70u;
            goto label_13ff70;
        }
    }
    ctx->pc = 0x13FF64u;
label_13ff64:
    // 0x13ff64: 0x10000016  b           . + 4 + (0x16 << 2)
label_13ff68:
    if (ctx->pc == 0x13FF68u) {
        ctx->pc = 0x13FF6Cu;
        goto label_13ff6c;
    }
    ctx->pc = 0x13FF64u;
    {
        const bool branch_taken_0x13ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ff64) {
            ctx->pc = 0x13FFC0u;
            goto label_13ffc0;
        }
    }
    ctx->pc = 0x13FF6Cu;
label_13ff6c:
    // 0x13ff6c: 0x0  nop
    ctx->pc = 0x13ff6cu;
    // NOP
label_13ff70:
    // 0x13ff70: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x13ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_13ff74:
    // 0x13ff74: 0x40f809  jalr        $v0
label_13ff78:
    if (ctx->pc == 0x13FF78u) {
        ctx->pc = 0x13FF78u;
            // 0x13ff78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FF7Cu;
        goto label_13ff7c;
    }
    ctx->pc = 0x13FF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FF7Cu);
        ctx->pc = 0x13FF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF74u;
            // 0x13ff78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13FF7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FF7Cu; }
            if (ctx->pc != 0x13FF7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13FF7Cu;
label_13ff7c:
    // 0x13ff7c: 0x10000010  b           . + 4 + (0x10 << 2)
label_13ff80:
    if (ctx->pc == 0x13FF80u) {
        ctx->pc = 0x13FF84u;
        goto label_13ff84;
    }
    ctx->pc = 0x13FF7Cu;
    {
        const bool branch_taken_0x13ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ff7c) {
            ctx->pc = 0x13FFC0u;
            goto label_13ffc0;
        }
    }
    ctx->pc = 0x13FF84u;
label_13ff84:
    // 0x13ff84: 0x0  nop
    ctx->pc = 0x13ff84u;
    // NOP
label_13ff88:
    // 0x13ff88: 0xc04e550  jal         func_139540
label_13ff8c:
    if (ctx->pc == 0x13FF8Cu) {
        ctx->pc = 0x13FF8Cu;
            // 0x13ff8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FF90u;
        goto label_13ff90;
    }
    ctx->pc = 0x13FF88u;
    SET_GPR_U32(ctx, 31, 0x13FF90u);
    ctx->pc = 0x13FF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF88u;
            // 0x13ff8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF90u; }
        if (ctx->pc != 0x13FF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF90u; }
        if (ctx->pc != 0x13FF90u) { return; }
    }
    ctx->pc = 0x13FF90u;
label_13ff90:
    // 0x13ff90: 0x1000000b  b           . + 4 + (0xB << 2)
label_13ff94:
    if (ctx->pc == 0x13FF94u) {
        ctx->pc = 0x13FF98u;
        goto label_13ff98;
    }
    ctx->pc = 0x13FF90u;
    {
        const bool branch_taken_0x13ff90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ff90) {
            ctx->pc = 0x13FFC0u;
            goto label_13ffc0;
        }
    }
    ctx->pc = 0x13FF98u;
label_13ff98:
    // 0x13ff98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13ff98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13ff9c:
    // 0x13ff9c: 0x8f828018  lw          $v0, -0x7FE8($gp)
    ctx->pc = 0x13ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
label_13ffa0:
    // 0x13ffa0: 0x40f809  jalr        $v0
label_13ffa4:
    if (ctx->pc == 0x13FFA4u) {
        ctx->pc = 0x13FFA4u;
            // 0x13ffa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13FFA8u;
        goto label_13ffa8;
    }
    ctx->pc = 0x13FFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13FFA8u);
        ctx->pc = 0x13FFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFA0u;
            // 0x13ffa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13FFA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13FFA8u; }
            if (ctx->pc != 0x13FFA8u) { return; }
        }
        }
    }
    ctx->pc = 0x13FFA8u;
label_13ffa8:
    // 0x13ffa8: 0x10000005  b           . + 4 + (0x5 << 2)
label_13ffac:
    if (ctx->pc == 0x13FFACu) {
        ctx->pc = 0x13FFB0u;
        goto label_13ffb0;
    }
    ctx->pc = 0x13FFA8u;
    {
        const bool branch_taken_0x13ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ffa8) {
            ctx->pc = 0x13FFC0u;
            goto label_13ffc0;
        }
    }
    ctx->pc = 0x13FFB0u;
label_13ffb0:
    // 0x13ffb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ffb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13ffb4:
    // 0x13ffb4: 0xc04e550  jal         func_139540
label_13ffb8:
    if (ctx->pc == 0x13FFB8u) {
        ctx->pc = 0x13FFB8u;
            // 0x13ffb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x13FFBCu;
        goto label_13ffbc;
    }
    ctx->pc = 0x13FFB4u;
    SET_GPR_U32(ctx, 31, 0x13FFBCu);
    ctx->pc = 0x13FFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFB4u;
            // 0x13ffb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139540u;
    if (runtime->hasFunction(0x139540u)) {
        auto targetFn = runtime->lookupFunction(0x139540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FFBCu; }
        if (ctx->pc != 0x13FFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139540_0x139540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FFBCu; }
        if (ctx->pc != 0x13FFBCu) { return; }
    }
    ctx->pc = 0x13FFBCu;
label_13ffbc:
    // 0x13ffbc: 0x0  nop
    ctx->pc = 0x13ffbcu;
    // NOP
label_13ffc0:
    // 0x13ffc0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_13ffc4:
    // 0x13ffc4: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x13ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
label_13ffc8:
    // 0x13ffc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13ffcc:
    // 0x13ffcc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x13ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_13ffd0:
    // 0x13ffd0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13ffd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_13ffd4:
    // 0x13ffd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_13ffd8:
    if (ctx->pc == 0x13FFD8u) {
        ctx->pc = 0x13FFDCu;
        goto label_13ffdc;
    }
    ctx->pc = 0x13FFD4u;
    {
        const bool branch_taken_0x13ffd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ffd4) {
            ctx->pc = 0x13FFF8u;
            goto label_13fff8;
        }
    }
    ctx->pc = 0x13FFDCu;
label_13ffdc:
    // 0x13ffdc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x13ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_13ffe0:
    // 0x13ffe0: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x13ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_13ffe4:
    // 0x13ffe4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_13ffe8:
    // 0x13ffe8: 0xc054484  jal         func_151210
label_13ffec:
    if (ctx->pc == 0x13FFECu) {
        ctx->pc = 0x13FFECu;
            // 0x13ffec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x13FFF0u;
        goto label_13fff0;
    }
    ctx->pc = 0x13FFE8u;
    SET_GPR_U32(ctx, 31, 0x13FFF0u);
    ctx->pc = 0x13FFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFE8u;
            // 0x13ffec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151210u;
    if (runtime->hasFunction(0x151210u)) {
        auto targetFn = runtime->lookupFunction(0x151210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FFF0u; }
        if (ctx->pc != 0x13FFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151210_0x151210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FFF0u; }
        if (ctx->pc != 0x13FFF0u) { return; }
    }
    ctx->pc = 0x13FFF0u;
label_13fff0:
    // 0x13fff0: 0x10000003  b           . + 4 + (0x3 << 2)
label_13fff4:
    if (ctx->pc == 0x13FFF4u) {
        ctx->pc = 0x13FFF8u;
        goto label_13fff8;
    }
    ctx->pc = 0x13FFF0u;
    {
        const bool branch_taken_0x13fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fff0) {
            ctx->pc = 0x140000u;
            goto label_140000;
        }
    }
    ctx->pc = 0x13FFF8u;
label_13fff8:
    // 0x13fff8: 0xc04fdf4  jal         func_13F7D0
label_13fffc:
    if (ctx->pc == 0x13FFFCu) {
        ctx->pc = 0x140000u;
        goto label_140000;
    }
    ctx->pc = 0x13FFF8u;
    SET_GPR_U32(ctx, 31, 0x140000u);
    ctx->pc = 0x13F7D0u;
    if (runtime->hasFunction(0x13F7D0u)) {
        auto targetFn = runtime->lookupFunction(0x13F7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140000u; }
        if (ctx->pc != 0x140000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F7D0_0x13f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140000u; }
        if (ctx->pc != 0x140000u) { return; }
    }
    ctx->pc = 0x140000u;
label_140000:
    // 0x140000: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_140004:
    // 0x140004: 0x8c63579c  lw          $v1, 0x579C($v1)
    ctx->pc = 0x140004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22428)));
label_140008:
    // 0x140008: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_14000c:
    if (ctx->pc == 0x14000Cu) {
        ctx->pc = 0x140010u;
        goto label_140010;
    }
    ctx->pc = 0x140008u;
    {
        const bool branch_taken_0x140008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140008) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x140010u;
label_140010:
    // 0x140010: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x140010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_140014:
    // 0x140014: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_140018:
    // 0x140018: 0x8c845774  lw          $a0, 0x5774($a0)
    ctx->pc = 0x140018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22388)));
label_14001c:
    // 0x14001c: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x14001cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_140020:
    // 0x140020: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x140020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_140024:
    // 0x140024: 0xac645774  sw          $a0, 0x5774($v1)
    ctx->pc = 0x140024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 4));
label_140028:
    // 0x140028: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_14002c:
    // 0x14002c: 0x8c645774  lw          $a0, 0x5774($v1)
    ctx->pc = 0x14002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22388)));
label_140030:
    // 0x140030: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x140030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_140034:
    // 0x140034: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x140034u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_140038:
    // 0x140038: 0x5460ff75  bnel        $v1, $zero, . + 4 + (-0x8B << 2)
label_14003c:
    if (ctx->pc == 0x14003Cu) {
        ctx->pc = 0x14003Cu;
            // 0x14003c: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x140040u;
        goto label_140040;
    }
    ctx->pc = 0x140038u;
    {
        const bool branch_taken_0x140038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140038) {
            ctx->pc = 0x14003Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140038u;
            // 0x14003c: 0x8e230010  lw          $v1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13fe10;
        }
    }
    ctx->pc = 0x140040u;
label_140040:
    // 0x140040: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x140040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_140044:
    // 0x140044: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x140044u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_140048:
    // 0x140048: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x140048u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14004c:
    // 0x14004c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14004cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_140050:
    // 0x140050: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_140054:
    // 0x140054: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_140058:
    // 0x140058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14005c:
    // 0x14005c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14005cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_140060:
    // 0x140060: 0x3e00008  jr          $ra
label_140064:
    if (ctx->pc == 0x140064u) {
        ctx->pc = 0x140064u;
            // 0x140064: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x140068u;
        goto label_140068;
    }
    ctx->pc = 0x140060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140060u;
            // 0x140064: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140068u;
label_140068:
    // 0x140068: 0x0  nop
    ctx->pc = 0x140068u;
    // NOP
label_14006c:
    // 0x14006c: 0x0  nop
    ctx->pc = 0x14006cu;
    // NOP
}
