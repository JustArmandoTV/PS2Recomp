#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044DDF0
// Address: 0x44ddf0 - 0x44df30
void sub_0044DDF0_0x44ddf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044DDF0_0x44ddf0");
#endif

    switch (ctx->pc) {
        case 0x44de0cu: goto label_44de0c;
        case 0x44de2cu: goto label_44de2c;
        case 0x44de60u: goto label_44de60;
        case 0x44dec0u: goto label_44dec0;
        case 0x44deccu: goto label_44decc;
        case 0x44ded8u: goto label_44ded8;
        case 0x44dee4u: goto label_44dee4;
        case 0x44def0u: goto label_44def0;
        case 0x44defcu: goto label_44defc;
        case 0x44df14u: goto label_44df14;
        default: break;
    }

    ctx->pc = 0x44ddf0u;

    // 0x44ddf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44ddf4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x44ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x44ddf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44ddfc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x44ddfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x44de00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44de00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44de04: 0xc113804  jal         func_44E010
    ctx->pc = 0x44DE04u;
    SET_GPR_U32(ctx, 31, 0x44DE0Cu);
    ctx->pc = 0x44DE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DE04u;
            // 0x44de08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44E010u;
    if (runtime->hasFunction(0x44E010u)) {
        auto targetFn = runtime->lookupFunction(0x44E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DE0Cu; }
        if (ctx->pc != 0x44DE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044E010_0x44e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DE0Cu; }
        if (ctx->pc != 0x44DE0Cu) { return; }
    }
    ctx->pc = 0x44DE0Cu;
label_44de0c:
    // 0x44de0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44de10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44de10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44de14: 0x2463db60  addiu       $v1, $v1, -0x24A0
    ctx->pc = 0x44de14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957920));
    // 0x44de18: 0x2442db98  addiu       $v0, $v0, -0x2468
    ctx->pc = 0x44de18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957976));
    // 0x44de1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44de20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44de20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44de24: 0xc113800  jal         func_44E000
    ctx->pc = 0x44DE24u;
    SET_GPR_U32(ctx, 31, 0x44DE2Cu);
    ctx->pc = 0x44DE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DE24u;
            // 0x44de28: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44E000u;
    if (runtime->hasFunction(0x44E000u)) {
        auto targetFn = runtime->lookupFunction(0x44E000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DE2Cu; }
        if (ctx->pc != 0x44DE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044E000_0x44e000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DE2Cu; }
        if (ctx->pc != 0x44DE2Cu) { return; }
    }
    ctx->pc = 0x44DE2Cu;
label_44de2c:
    // 0x44de2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x44de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x44de30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44de30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44de34: 0x2442dab0  addiu       $v0, $v0, -0x2550
    ctx->pc = 0x44de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957744));
    // 0x44de38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x44de38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x44de3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44de40: 0x2442dae8  addiu       $v0, $v0, -0x2518
    ctx->pc = 0x44de40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957800));
    // 0x44de44: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x44de44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x44de48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44de48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44de4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44de4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44de50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44de50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44de54: 0x3e00008  jr          $ra
    ctx->pc = 0x44DE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44DE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DE54u;
            // 0x44de58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44DE5Cu;
    // 0x44de5c: 0x0  nop
    ctx->pc = 0x44de5cu;
    // NOP
label_44de60:
    // 0x44de60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44de60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44de64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44de64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44de68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44de6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44de70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44de70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44de74: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x44DE74u;
    {
        const bool branch_taken_0x44de74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44DE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DE74u;
            // 0x44de78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44de74) {
            ctx->pc = 0x44DF14u;
            goto label_44df14;
        }
    }
    ctx->pc = 0x44DE7Cu;
    // 0x44de7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44de80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44de80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44de84: 0x2463db60  addiu       $v1, $v1, -0x24A0
    ctx->pc = 0x44de84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957920));
    // 0x44de88: 0x2442db98  addiu       $v0, $v0, -0x2468
    ctx->pc = 0x44de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957976));
    // 0x44de8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44de90: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x44DE90u;
    {
        const bool branch_taken_0x44de90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44DE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DE90u;
            // 0x44de94: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44de90) {
            ctx->pc = 0x44DEFCu;
            goto label_44defc;
        }
    }
    ctx->pc = 0x44DE98u;
    // 0x44de98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44de98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x44de9c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x44dea0: 0x2463db10  addiu       $v1, $v1, -0x24F0
    ctx->pc = 0x44dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957840));
    // 0x44dea4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x44dea8: 0x2442db48  addiu       $v0, $v0, -0x24B8
    ctx->pc = 0x44dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957896));
    // 0x44deac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x44deacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x44deb0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x44deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x44deb4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x44deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x44deb8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x44DEB8u;
    SET_GPR_U32(ctx, 31, 0x44DEC0u);
    ctx->pc = 0x44DEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DEB8u;
            // 0x44debc: 0x24a5db20  addiu       $a1, $a1, -0x24E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DEC0u; }
        if (ctx->pc != 0x44DEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DEC0u; }
        if (ctx->pc != 0x44DEC0u) { return; }
    }
    ctx->pc = 0x44DEC0u;
label_44dec0:
    // 0x44dec0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x44dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x44dec4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x44DEC4u;
    SET_GPR_U32(ctx, 31, 0x44DECCu);
    ctx->pc = 0x44DEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DEC4u;
            // 0x44dec8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DECCu; }
        if (ctx->pc != 0x44DECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DECCu; }
        if (ctx->pc != 0x44DECCu) { return; }
    }
    ctx->pc = 0x44DECCu;
label_44decc:
    // 0x44decc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x44deccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x44ded0: 0xc1137e4  jal         func_44DF90
    ctx->pc = 0x44DED0u;
    SET_GPR_U32(ctx, 31, 0x44DED8u);
    ctx->pc = 0x44DED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DED0u;
            // 0x44ded4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44DF90u;
    if (runtime->hasFunction(0x44DF90u)) {
        auto targetFn = runtime->lookupFunction(0x44DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DED8u; }
        if (ctx->pc != 0x44DED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044DF90_0x44df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DED8u; }
        if (ctx->pc != 0x44DED8u) { return; }
    }
    ctx->pc = 0x44DED8u;
label_44ded8:
    // 0x44ded8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x44ded8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x44dedc: 0xc1137e4  jal         func_44DF90
    ctx->pc = 0x44DEDCu;
    SET_GPR_U32(ctx, 31, 0x44DEE4u);
    ctx->pc = 0x44DEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DEDCu;
            // 0x44dee0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44DF90u;
    if (runtime->hasFunction(0x44DF90u)) {
        auto targetFn = runtime->lookupFunction(0x44DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DEE4u; }
        if (ctx->pc != 0x44DEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044DF90_0x44df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DEE4u; }
        if (ctx->pc != 0x44DEE4u) { return; }
    }
    ctx->pc = 0x44DEE4u;
label_44dee4:
    // 0x44dee4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x44dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x44dee8: 0xc1137cc  jal         func_44DF30
    ctx->pc = 0x44DEE8u;
    SET_GPR_U32(ctx, 31, 0x44DEF0u);
    ctx->pc = 0x44DEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DEE8u;
            // 0x44deec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44DF30u;
    if (runtime->hasFunction(0x44DF30u)) {
        auto targetFn = runtime->lookupFunction(0x44DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DEF0u; }
        if (ctx->pc != 0x44DEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044DF30_0x44df30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DEF0u; }
        if (ctx->pc != 0x44DEF0u) { return; }
    }
    ctx->pc = 0x44DEF0u;
label_44def0:
    // 0x44def0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44def0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44def4: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x44DEF4u;
    SET_GPR_U32(ctx, 31, 0x44DEFCu);
    ctx->pc = 0x44DEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DEF4u;
            // 0x44def8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DEFCu; }
        if (ctx->pc != 0x44DEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DEFCu; }
        if (ctx->pc != 0x44DEFCu) { return; }
    }
    ctx->pc = 0x44DEFCu;
label_44defc:
    // 0x44defc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x44defcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x44df00: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44df00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44df04: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44DF04u;
    {
        const bool branch_taken_0x44df04 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44df04) {
            ctx->pc = 0x44DF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DF04u;
            // 0x44df08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DF18u;
            goto label_44df18;
        }
    }
    ctx->pc = 0x44DF0Cu;
    // 0x44df0c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44DF0Cu;
    SET_GPR_U32(ctx, 31, 0x44DF14u);
    ctx->pc = 0x44DF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DF0Cu;
            // 0x44df10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DF14u; }
        if (ctx->pc != 0x44DF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DF14u; }
        if (ctx->pc != 0x44DF14u) { return; }
    }
    ctx->pc = 0x44DF14u;
label_44df14:
    // 0x44df14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44df14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44df18:
    // 0x44df18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44df18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44df1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44df1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44df20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44df20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44df24: 0x3e00008  jr          $ra
    ctx->pc = 0x44DF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44DF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DF24u;
            // 0x44df28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44DF2Cu;
    // 0x44df2c: 0x0  nop
    ctx->pc = 0x44df2cu;
    // NOP
}
