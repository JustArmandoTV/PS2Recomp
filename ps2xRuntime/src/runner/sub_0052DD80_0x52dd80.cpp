#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0052DD80
// Address: 0x52dd80 - 0x52df50
void sub_0052DD80_0x52dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0052DD80_0x52dd80");
#endif

    switch (ctx->pc) {
        case 0x52dd80u: goto label_52dd80;
        case 0x52dd84u: goto label_52dd84;
        case 0x52dd88u: goto label_52dd88;
        case 0x52dd8cu: goto label_52dd8c;
        case 0x52dd90u: goto label_52dd90;
        case 0x52dd94u: goto label_52dd94;
        case 0x52dd98u: goto label_52dd98;
        case 0x52dd9cu: goto label_52dd9c;
        case 0x52dda0u: goto label_52dda0;
        case 0x52dda4u: goto label_52dda4;
        case 0x52dda8u: goto label_52dda8;
        case 0x52ddacu: goto label_52ddac;
        case 0x52ddb0u: goto label_52ddb0;
        case 0x52ddb4u: goto label_52ddb4;
        case 0x52ddb8u: goto label_52ddb8;
        case 0x52ddbcu: goto label_52ddbc;
        case 0x52ddc0u: goto label_52ddc0;
        case 0x52ddc4u: goto label_52ddc4;
        case 0x52ddc8u: goto label_52ddc8;
        case 0x52ddccu: goto label_52ddcc;
        case 0x52ddd0u: goto label_52ddd0;
        case 0x52ddd4u: goto label_52ddd4;
        case 0x52ddd8u: goto label_52ddd8;
        case 0x52dddcu: goto label_52dddc;
        case 0x52dde0u: goto label_52dde0;
        case 0x52dde4u: goto label_52dde4;
        case 0x52dde8u: goto label_52dde8;
        case 0x52ddecu: goto label_52ddec;
        case 0x52ddf0u: goto label_52ddf0;
        case 0x52ddf4u: goto label_52ddf4;
        case 0x52ddf8u: goto label_52ddf8;
        case 0x52ddfcu: goto label_52ddfc;
        case 0x52de00u: goto label_52de00;
        case 0x52de04u: goto label_52de04;
        case 0x52de08u: goto label_52de08;
        case 0x52de0cu: goto label_52de0c;
        case 0x52de10u: goto label_52de10;
        case 0x52de14u: goto label_52de14;
        case 0x52de18u: goto label_52de18;
        case 0x52de1cu: goto label_52de1c;
        case 0x52de20u: goto label_52de20;
        case 0x52de24u: goto label_52de24;
        case 0x52de28u: goto label_52de28;
        case 0x52de2cu: goto label_52de2c;
        case 0x52de30u: goto label_52de30;
        case 0x52de34u: goto label_52de34;
        case 0x52de38u: goto label_52de38;
        case 0x52de3cu: goto label_52de3c;
        case 0x52de40u: goto label_52de40;
        case 0x52de44u: goto label_52de44;
        case 0x52de48u: goto label_52de48;
        case 0x52de4cu: goto label_52de4c;
        case 0x52de50u: goto label_52de50;
        case 0x52de54u: goto label_52de54;
        case 0x52de58u: goto label_52de58;
        case 0x52de5cu: goto label_52de5c;
        case 0x52de60u: goto label_52de60;
        case 0x52de64u: goto label_52de64;
        case 0x52de68u: goto label_52de68;
        case 0x52de6cu: goto label_52de6c;
        case 0x52de70u: goto label_52de70;
        case 0x52de74u: goto label_52de74;
        case 0x52de78u: goto label_52de78;
        case 0x52de7cu: goto label_52de7c;
        case 0x52de80u: goto label_52de80;
        case 0x52de84u: goto label_52de84;
        case 0x52de88u: goto label_52de88;
        case 0x52de8cu: goto label_52de8c;
        case 0x52de90u: goto label_52de90;
        case 0x52de94u: goto label_52de94;
        case 0x52de98u: goto label_52de98;
        case 0x52de9cu: goto label_52de9c;
        case 0x52dea0u: goto label_52dea0;
        case 0x52dea4u: goto label_52dea4;
        case 0x52dea8u: goto label_52dea8;
        case 0x52deacu: goto label_52deac;
        case 0x52deb0u: goto label_52deb0;
        case 0x52deb4u: goto label_52deb4;
        case 0x52deb8u: goto label_52deb8;
        case 0x52debcu: goto label_52debc;
        case 0x52dec0u: goto label_52dec0;
        case 0x52dec4u: goto label_52dec4;
        case 0x52dec8u: goto label_52dec8;
        case 0x52deccu: goto label_52decc;
        case 0x52ded0u: goto label_52ded0;
        case 0x52ded4u: goto label_52ded4;
        case 0x52ded8u: goto label_52ded8;
        case 0x52dedcu: goto label_52dedc;
        case 0x52dee0u: goto label_52dee0;
        case 0x52dee4u: goto label_52dee4;
        case 0x52dee8u: goto label_52dee8;
        case 0x52deecu: goto label_52deec;
        case 0x52def0u: goto label_52def0;
        case 0x52def4u: goto label_52def4;
        case 0x52def8u: goto label_52def8;
        case 0x52defcu: goto label_52defc;
        case 0x52df00u: goto label_52df00;
        case 0x52df04u: goto label_52df04;
        case 0x52df08u: goto label_52df08;
        case 0x52df0cu: goto label_52df0c;
        case 0x52df10u: goto label_52df10;
        case 0x52df14u: goto label_52df14;
        case 0x52df18u: goto label_52df18;
        case 0x52df1cu: goto label_52df1c;
        case 0x52df20u: goto label_52df20;
        case 0x52df24u: goto label_52df24;
        case 0x52df28u: goto label_52df28;
        case 0x52df2cu: goto label_52df2c;
        case 0x52df30u: goto label_52df30;
        case 0x52df34u: goto label_52df34;
        case 0x52df38u: goto label_52df38;
        case 0x52df3cu: goto label_52df3c;
        case 0x52df40u: goto label_52df40;
        case 0x52df44u: goto label_52df44;
        case 0x52df48u: goto label_52df48;
        case 0x52df4cu: goto label_52df4c;
        default: break;
    }

    ctx->pc = 0x52dd80u;

label_52dd80:
    // 0x52dd80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x52dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_52dd84:
    // 0x52dd84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x52dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_52dd88:
    // 0x52dd88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52dd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52dd8c:
    // 0x52dd8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52dd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52dd90:
    // 0x52dd90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x52dd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52dd94:
    // 0x52dd94: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_52dd98:
    if (ctx->pc == 0x52DD98u) {
        ctx->pc = 0x52DD98u;
            // 0x52dd98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DD9Cu;
        goto label_52dd9c;
    }
    ctx->pc = 0x52DD94u;
    {
        const bool branch_taken_0x52dd94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x52DD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DD94u;
            // 0x52dd98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52dd94) {
            ctx->pc = 0x52DEC8u;
            goto label_52dec8;
        }
    }
    ctx->pc = 0x52DD9Cu;
label_52dd9c:
    // 0x52dd9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52dda0:
    // 0x52dda0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52dda4:
    // 0x52dda4: 0x24636b40  addiu       $v1, $v1, 0x6B40
    ctx->pc = 0x52dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27456));
label_52dda8:
    // 0x52dda8: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x52dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_52ddac:
    // 0x52ddac: 0x24426b78  addiu       $v0, $v0, 0x6B78
    ctx->pc = 0x52ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27512));
label_52ddb0:
    // 0x52ddb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x52ddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_52ddb4:
    // 0x52ddb4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x52ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_52ddb8:
    // 0x52ddb8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x52ddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_52ddbc:
    // 0x52ddbc: 0xc0407c0  jal         func_101F00
label_52ddc0:
    if (ctx->pc == 0x52DDC0u) {
        ctx->pc = 0x52DDC0u;
            // 0x52ddc0: 0x24a5dee0  addiu       $a1, $a1, -0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958816));
        ctx->pc = 0x52DDC4u;
        goto label_52ddc4;
    }
    ctx->pc = 0x52DDBCu;
    SET_GPR_U32(ctx, 31, 0x52DDC4u);
    ctx->pc = 0x52DDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DDBCu;
            // 0x52ddc0: 0x24a5dee0  addiu       $a1, $a1, -0x2120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DDC4u; }
        if (ctx->pc != 0x52DDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DDC4u; }
        if (ctx->pc != 0x52DDC4u) { return; }
    }
    ctx->pc = 0x52DDC4u;
label_52ddc4:
    // 0x52ddc4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x52ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_52ddc8:
    // 0x52ddc8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_52ddcc:
    if (ctx->pc == 0x52DDCCu) {
        ctx->pc = 0x52DDCCu;
            // 0x52ddcc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x52DDD0u;
        goto label_52ddd0;
    }
    ctx->pc = 0x52DDC8u;
    {
        const bool branch_taken_0x52ddc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ddc8) {
            ctx->pc = 0x52DDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DDC8u;
            // 0x52ddcc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DDDCu;
            goto label_52dddc;
        }
    }
    ctx->pc = 0x52DDD0u;
label_52ddd0:
    // 0x52ddd0: 0xc07507c  jal         func_1D41F0
label_52ddd4:
    if (ctx->pc == 0x52DDD4u) {
        ctx->pc = 0x52DDD4u;
            // 0x52ddd4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x52DDD8u;
        goto label_52ddd8;
    }
    ctx->pc = 0x52DDD0u;
    SET_GPR_U32(ctx, 31, 0x52DDD8u);
    ctx->pc = 0x52DDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DDD0u;
            // 0x52ddd4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DDD8u; }
        if (ctx->pc != 0x52DDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DDD8u; }
        if (ctx->pc != 0x52DDD8u) { return; }
    }
    ctx->pc = 0x52DDD8u;
label_52ddd8:
    // 0x52ddd8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x52ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_52dddc:
    // 0x52dddc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_52dde0:
    if (ctx->pc == 0x52DDE0u) {
        ctx->pc = 0x52DDE0u;
            // 0x52dde0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x52DDE4u;
        goto label_52dde4;
    }
    ctx->pc = 0x52DDDCu;
    {
        const bool branch_taken_0x52dddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52dddc) {
            ctx->pc = 0x52DDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DDDCu;
            // 0x52dde0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DE0Cu;
            goto label_52de0c;
        }
    }
    ctx->pc = 0x52DDE4u;
label_52dde4:
    // 0x52dde4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_52dde8:
    if (ctx->pc == 0x52DDE8u) {
        ctx->pc = 0x52DDECu;
        goto label_52ddec;
    }
    ctx->pc = 0x52DDE4u;
    {
        const bool branch_taken_0x52dde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52dde4) {
            ctx->pc = 0x52DE08u;
            goto label_52de08;
        }
    }
    ctx->pc = 0x52DDECu;
label_52ddec:
    // 0x52ddec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_52ddf0:
    if (ctx->pc == 0x52DDF0u) {
        ctx->pc = 0x52DDF4u;
        goto label_52ddf4;
    }
    ctx->pc = 0x52DDECu;
    {
        const bool branch_taken_0x52ddec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ddec) {
            ctx->pc = 0x52DE08u;
            goto label_52de08;
        }
    }
    ctx->pc = 0x52DDF4u;
label_52ddf4:
    // 0x52ddf4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x52ddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_52ddf8:
    // 0x52ddf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_52ddfc:
    if (ctx->pc == 0x52DDFCu) {
        ctx->pc = 0x52DE00u;
        goto label_52de00;
    }
    ctx->pc = 0x52DDF8u;
    {
        const bool branch_taken_0x52ddf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52ddf8) {
            ctx->pc = 0x52DE08u;
            goto label_52de08;
        }
    }
    ctx->pc = 0x52DE00u;
label_52de00:
    // 0x52de00: 0xc0400a8  jal         func_1002A0
label_52de04:
    if (ctx->pc == 0x52DE04u) {
        ctx->pc = 0x52DE08u;
        goto label_52de08;
    }
    ctx->pc = 0x52DE00u;
    SET_GPR_U32(ctx, 31, 0x52DE08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DE08u; }
        if (ctx->pc != 0x52DE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DE08u; }
        if (ctx->pc != 0x52DE08u) { return; }
    }
    ctx->pc = 0x52DE08u;
label_52de08:
    // 0x52de08: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x52de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_52de0c:
    // 0x52de0c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_52de10:
    if (ctx->pc == 0x52DE10u) {
        ctx->pc = 0x52DE10u;
            // 0x52de10: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x52DE14u;
        goto label_52de14;
    }
    ctx->pc = 0x52DE0Cu;
    {
        const bool branch_taken_0x52de0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52de0c) {
            ctx->pc = 0x52DE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DE0Cu;
            // 0x52de10: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DE3Cu;
            goto label_52de3c;
        }
    }
    ctx->pc = 0x52DE14u;
label_52de14:
    // 0x52de14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_52de18:
    if (ctx->pc == 0x52DE18u) {
        ctx->pc = 0x52DE1Cu;
        goto label_52de1c;
    }
    ctx->pc = 0x52DE14u;
    {
        const bool branch_taken_0x52de14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52de14) {
            ctx->pc = 0x52DE38u;
            goto label_52de38;
        }
    }
    ctx->pc = 0x52DE1Cu;
label_52de1c:
    // 0x52de1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_52de20:
    if (ctx->pc == 0x52DE20u) {
        ctx->pc = 0x52DE24u;
        goto label_52de24;
    }
    ctx->pc = 0x52DE1Cu;
    {
        const bool branch_taken_0x52de1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52de1c) {
            ctx->pc = 0x52DE38u;
            goto label_52de38;
        }
    }
    ctx->pc = 0x52DE24u;
label_52de24:
    // 0x52de24: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x52de24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_52de28:
    // 0x52de28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_52de2c:
    if (ctx->pc == 0x52DE2Cu) {
        ctx->pc = 0x52DE30u;
        goto label_52de30;
    }
    ctx->pc = 0x52DE28u;
    {
        const bool branch_taken_0x52de28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52de28) {
            ctx->pc = 0x52DE38u;
            goto label_52de38;
        }
    }
    ctx->pc = 0x52DE30u;
label_52de30:
    // 0x52de30: 0xc0400a8  jal         func_1002A0
label_52de34:
    if (ctx->pc == 0x52DE34u) {
        ctx->pc = 0x52DE38u;
        goto label_52de38;
    }
    ctx->pc = 0x52DE30u;
    SET_GPR_U32(ctx, 31, 0x52DE38u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DE38u; }
        if (ctx->pc != 0x52DE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DE38u; }
        if (ctx->pc != 0x52DE38u) { return; }
    }
    ctx->pc = 0x52DE38u;
label_52de38:
    // 0x52de38: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x52de38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_52de3c:
    // 0x52de3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_52de40:
    if (ctx->pc == 0x52DE40u) {
        ctx->pc = 0x52DE44u;
        goto label_52de44;
    }
    ctx->pc = 0x52DE3Cu;
    {
        const bool branch_taken_0x52de3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52de3c) {
            ctx->pc = 0x52DE58u;
            goto label_52de58;
        }
    }
    ctx->pc = 0x52DE44u;
label_52de44:
    // 0x52de44: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52de44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_52de48:
    // 0x52de48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x52de48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_52de4c:
    // 0x52de4c: 0x24636b30  addiu       $v1, $v1, 0x6B30
    ctx->pc = 0x52de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27440));
label_52de50:
    // 0x52de50: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x52de50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_52de54:
    // 0x52de54: 0xac403fe8  sw          $zero, 0x3FE8($v0)
    ctx->pc = 0x52de54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16360), GPR_U32(ctx, 0));
label_52de58:
    // 0x52de58: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_52de5c:
    if (ctx->pc == 0x52DE5Cu) {
        ctx->pc = 0x52DE5Cu;
            // 0x52de5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x52DE60u;
        goto label_52de60;
    }
    ctx->pc = 0x52DE58u;
    {
        const bool branch_taken_0x52de58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x52de58) {
            ctx->pc = 0x52DE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DE58u;
            // 0x52de5c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DEB4u;
            goto label_52deb4;
        }
    }
    ctx->pc = 0x52DE60u;
label_52de60:
    // 0x52de60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52de60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52de64:
    // 0x52de64: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x52de64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_52de68:
    // 0x52de68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x52de68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_52de6c:
    // 0x52de6c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x52de6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_52de70:
    // 0x52de70: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52de74:
    if (ctx->pc == 0x52DE74u) {
        ctx->pc = 0x52DE74u;
            // 0x52de74: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x52DE78u;
        goto label_52de78;
    }
    ctx->pc = 0x52DE70u;
    {
        const bool branch_taken_0x52de70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52de70) {
            ctx->pc = 0x52DE74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DE70u;
            // 0x52de74: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DE8Cu;
            goto label_52de8c;
        }
    }
    ctx->pc = 0x52DE78u;
label_52de78:
    // 0x52de78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52de78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52de7c:
    // 0x52de7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52de7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52de80:
    // 0x52de80: 0x320f809  jalr        $t9
label_52de84:
    if (ctx->pc == 0x52DE84u) {
        ctx->pc = 0x52DE84u;
            // 0x52de84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52DE88u;
        goto label_52de88;
    }
    ctx->pc = 0x52DE80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52DE88u);
        ctx->pc = 0x52DE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DE80u;
            // 0x52de84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52DE88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52DE88u; }
            if (ctx->pc != 0x52DE88u) { return; }
        }
        }
    }
    ctx->pc = 0x52DE88u;
label_52de88:
    // 0x52de88: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x52de88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_52de8c:
    // 0x52de8c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_52de90:
    if (ctx->pc == 0x52DE90u) {
        ctx->pc = 0x52DE90u;
            // 0x52de90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DE94u;
        goto label_52de94;
    }
    ctx->pc = 0x52DE8Cu;
    {
        const bool branch_taken_0x52de8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52de8c) {
            ctx->pc = 0x52DE90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DE8Cu;
            // 0x52de90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DEA8u;
            goto label_52dea8;
        }
    }
    ctx->pc = 0x52DE94u;
label_52de94:
    // 0x52de94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x52de94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52de98:
    // 0x52de98: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x52de98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52de9c:
    // 0x52de9c: 0x320f809  jalr        $t9
label_52dea0:
    if (ctx->pc == 0x52DEA0u) {
        ctx->pc = 0x52DEA0u;
            // 0x52dea0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x52DEA4u;
        goto label_52dea4;
    }
    ctx->pc = 0x52DE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x52DEA4u);
        ctx->pc = 0x52DEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DE9Cu;
            // 0x52dea0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x52DEA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x52DEA4u; }
            if (ctx->pc != 0x52DEA4u) { return; }
        }
        }
    }
    ctx->pc = 0x52DEA4u;
label_52dea4:
    // 0x52dea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x52dea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52dea8:
    // 0x52dea8: 0xc075bf8  jal         func_1D6FE0
label_52deac:
    if (ctx->pc == 0x52DEACu) {
        ctx->pc = 0x52DEACu;
            // 0x52deac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DEB0u;
        goto label_52deb0;
    }
    ctx->pc = 0x52DEA8u;
    SET_GPR_U32(ctx, 31, 0x52DEB0u);
    ctx->pc = 0x52DEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DEA8u;
            // 0x52deac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DEB0u; }
        if (ctx->pc != 0x52DEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DEB0u; }
        if (ctx->pc != 0x52DEB0u) { return; }
    }
    ctx->pc = 0x52DEB0u;
label_52deb0:
    // 0x52deb0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x52deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_52deb4:
    // 0x52deb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52deb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_52deb8:
    // 0x52deb8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52debc:
    if (ctx->pc == 0x52DEBCu) {
        ctx->pc = 0x52DEBCu;
            // 0x52debc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DEC0u;
        goto label_52dec0;
    }
    ctx->pc = 0x52DEB8u;
    {
        const bool branch_taken_0x52deb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52deb8) {
            ctx->pc = 0x52DEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DEB8u;
            // 0x52debc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DECCu;
            goto label_52decc;
        }
    }
    ctx->pc = 0x52DEC0u;
label_52dec0:
    // 0x52dec0: 0xc0400a8  jal         func_1002A0
label_52dec4:
    if (ctx->pc == 0x52DEC4u) {
        ctx->pc = 0x52DEC4u;
            // 0x52dec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DEC8u;
        goto label_52dec8;
    }
    ctx->pc = 0x52DEC0u;
    SET_GPR_U32(ctx, 31, 0x52DEC8u);
    ctx->pc = 0x52DEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DEC0u;
            // 0x52dec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DEC8u; }
        if (ctx->pc != 0x52DEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DEC8u; }
        if (ctx->pc != 0x52DEC8u) { return; }
    }
    ctx->pc = 0x52DEC8u;
label_52dec8:
    // 0x52dec8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x52dec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52decc:
    // 0x52decc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52deccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_52ded0:
    // 0x52ded0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x52ded0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52ded4:
    // 0x52ded4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52ded4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52ded8:
    // 0x52ded8: 0x3e00008  jr          $ra
label_52dedc:
    if (ctx->pc == 0x52DEDCu) {
        ctx->pc = 0x52DEDCu;
            // 0x52dedc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x52DEE0u;
        goto label_52dee0;
    }
    ctx->pc = 0x52DED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52DEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DED8u;
            // 0x52dedc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x52DEE0u;
label_52dee0:
    // 0x52dee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x52dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_52dee4:
    // 0x52dee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x52dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_52dee8:
    // 0x52dee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52dee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52deec:
    // 0x52deec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52deecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_52def0:
    // 0x52def0: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_52def4:
    if (ctx->pc == 0x52DEF4u) {
        ctx->pc = 0x52DEF4u;
            // 0x52def4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DEF8u;
        goto label_52def8;
    }
    ctx->pc = 0x52DEF0u;
    {
        const bool branch_taken_0x52def0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x52def0) {
            ctx->pc = 0x52DEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52DEF0u;
            // 0x52def4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52DF40u;
            goto label_52df40;
        }
    }
    ctx->pc = 0x52DEF8u;
label_52def8:
    // 0x52def8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x52def8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_52defc:
    // 0x52defc: 0x24426af0  addiu       $v0, $v0, 0x6AF0
    ctx->pc = 0x52defcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
label_52df00:
    // 0x52df00: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_52df04:
    if (ctx->pc == 0x52DF04u) {
        ctx->pc = 0x52DF04u;
            // 0x52df04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x52DF08u;
        goto label_52df08;
    }
    ctx->pc = 0x52DF00u;
    {
        const bool branch_taken_0x52df00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DF00u;
            // 0x52df04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52df00) {
            ctx->pc = 0x52DF24u;
            goto label_52df24;
        }
    }
    ctx->pc = 0x52DF08u;
label_52df08:
    // 0x52df08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52df08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52df0c:
    // 0x52df0c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x52df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_52df10:
    // 0x52df10: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_52df14:
    if (ctx->pc == 0x52DF14u) {
        ctx->pc = 0x52DF14u;
            // 0x52df14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x52DF18u;
        goto label_52df18;
    }
    ctx->pc = 0x52DF10u;
    {
        const bool branch_taken_0x52df10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x52DF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DF10u;
            // 0x52df14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52df10) {
            ctx->pc = 0x52DF24u;
            goto label_52df24;
        }
    }
    ctx->pc = 0x52DF18u;
label_52df18:
    // 0x52df18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x52df18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_52df1c:
    // 0x52df1c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x52df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_52df20:
    // 0x52df20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x52df20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_52df24:
    // 0x52df24: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x52df24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_52df28:
    // 0x52df28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52df28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_52df2c:
    // 0x52df2c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_52df30:
    if (ctx->pc == 0x52DF30u) {
        ctx->pc = 0x52DF34u;
        goto label_52df34;
    }
    ctx->pc = 0x52DF2Cu;
    {
        const bool branch_taken_0x52df2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x52df2c) {
            ctx->pc = 0x52DF3Cu;
            goto label_52df3c;
        }
    }
    ctx->pc = 0x52DF34u;
label_52df34:
    // 0x52df34: 0xc0400a8  jal         func_1002A0
label_52df38:
    if (ctx->pc == 0x52DF38u) {
        ctx->pc = 0x52DF38u;
            // 0x52df38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52DF3Cu;
        goto label_52df3c;
    }
    ctx->pc = 0x52DF34u;
    SET_GPR_U32(ctx, 31, 0x52DF3Cu);
    ctx->pc = 0x52DF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52DF34u;
            // 0x52df38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DF3Cu; }
        if (ctx->pc != 0x52DF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52DF3Cu; }
        if (ctx->pc != 0x52DF3Cu) { return; }
    }
    ctx->pc = 0x52DF3Cu;
label_52df3c:
    // 0x52df3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x52df3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_52df40:
    // 0x52df40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x52df40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_52df44:
    // 0x52df44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52df44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52df48:
    // 0x52df48: 0x3e00008  jr          $ra
label_52df4c:
    if (ctx->pc == 0x52DF4Cu) {
        ctx->pc = 0x52DF4Cu;
            // 0x52df4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x52DF50u;
        goto label_fallthrough_0x52df48;
    }
    ctx->pc = 0x52DF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52DF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52DF48u;
            // 0x52df4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x52df48:
    ctx->pc = 0x52DF50u;
}
