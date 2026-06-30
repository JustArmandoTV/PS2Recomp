#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F1F40
// Address: 0x3f1f40 - 0x3f2080
void sub_003F1F40_0x3f1f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1F40_0x3f1f40");
#endif

    switch (ctx->pc) {
        case 0x3f1f5cu: goto label_3f1f5c;
        case 0x3f1f7cu: goto label_3f1f7c;
        case 0x3f1fb0u: goto label_3f1fb0;
        case 0x3f2010u: goto label_3f2010;
        case 0x3f201cu: goto label_3f201c;
        case 0x3f2028u: goto label_3f2028;
        case 0x3f2034u: goto label_3f2034;
        case 0x3f2040u: goto label_3f2040;
        case 0x3f204cu: goto label_3f204c;
        case 0x3f2064u: goto label_3f2064;
        default: break;
    }

    ctx->pc = 0x3f1f40u;

    // 0x3f1f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f1f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f1f44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3f1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3f1f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f1f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f1f4c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3f1f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x3f1f50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f1f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f1f54: 0xc0fc858  jal         func_3F2160
    ctx->pc = 0x3F1F54u;
    SET_GPR_U32(ctx, 31, 0x3F1F5Cu);
    ctx->pc = 0x3F1F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1F54u;
            // 0x3f1f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2160u;
    if (runtime->hasFunction(0x3F2160u)) {
        auto targetFn = runtime->lookupFunction(0x3F2160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1F5Cu; }
        if (ctx->pc != 0x3F1F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2160_0x3f2160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1F5Cu; }
        if (ctx->pc != 0x3F1F5Cu) { return; }
    }
    ctx->pc = 0x3F1F5Cu;
label_3f1f5c:
    // 0x3f1f5c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f1f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3f1f60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3f1f64: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x3f1f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x3f1f68: 0x2442a188  addiu       $v0, $v0, -0x5E78
    ctx->pc = 0x3f1f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943112));
    // 0x3f1f6c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f1f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3f1f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f1f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1f74: 0xc0fc854  jal         func_3F2150
    ctx->pc = 0x3F1F74u;
    SET_GPR_U32(ctx, 31, 0x3F1F7Cu);
    ctx->pc = 0x3F1F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1F74u;
            // 0x3f1f78: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2150u;
    if (runtime->hasFunction(0x3F2150u)) {
        auto targetFn = runtime->lookupFunction(0x3F2150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1F7Cu; }
        if (ctx->pc != 0x3F1F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2150_0x3f2150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F1F7Cu; }
        if (ctx->pc != 0x3F1F7Cu) { return; }
    }
    ctx->pc = 0x3F1F7Cu;
label_3f1f7c:
    // 0x3f1f7c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3f1f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3f1f80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3f1f84: 0x2442a0a0  addiu       $v0, $v0, -0x5F60
    ctx->pc = 0x3f1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942880));
    // 0x3f1f88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3f1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3f1f8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f1f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3f1f90: 0x2442a0d8  addiu       $v0, $v0, -0x5F28
    ctx->pc = 0x3f1f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942936));
    // 0x3f1f94: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3f1f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3f1f98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f1f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1f9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f1f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f1fa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f1fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f1fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1FA4u;
            // 0x3f1fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F1FACu;
    // 0x3f1fac: 0x0  nop
    ctx->pc = 0x3f1facu;
    // NOP
label_3f1fb0:
    // 0x3f1fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f1fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f1fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f1fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f1fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f1fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f1fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f1fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f1fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f1fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f1fc4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3F1FC4u;
    {
        const bool branch_taken_0x3f1fc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1FC4u;
            // 0x3f1fc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1fc4) {
            ctx->pc = 0x3F2064u;
            goto label_3f2064;
        }
    }
    ctx->pc = 0x3F1FCCu;
    // 0x3f1fcc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f1fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3f1fd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3f1fd4: 0x2463a150  addiu       $v1, $v1, -0x5EB0
    ctx->pc = 0x3f1fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943056));
    // 0x3f1fd8: 0x2442a188  addiu       $v0, $v0, -0x5E78
    ctx->pc = 0x3f1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943112));
    // 0x3f1fdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f1fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3f1fe0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3F1FE0u;
    {
        const bool branch_taken_0x3f1fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F1FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F1FE0u;
            // 0x3f1fe4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f1fe0) {
            ctx->pc = 0x3F204Cu;
            goto label_3f204c;
        }
    }
    ctx->pc = 0x3F1FE8u;
    // 0x3f1fe8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3f1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3f1fec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3f1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3f1ff0: 0x2463a100  addiu       $v1, $v1, -0x5F00
    ctx->pc = 0x3f1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942976));
    // 0x3f1ff4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3f1ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x3f1ff8: 0x2442a138  addiu       $v0, $v0, -0x5EC8
    ctx->pc = 0x3f1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943032));
    // 0x3f1ffc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3f1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3f2000: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3f2000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3f2004: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3f2004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3f2008: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3F2008u;
    SET_GPR_U32(ctx, 31, 0x3F2010u);
    ctx->pc = 0x3F200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2008u;
            // 0x3f200c: 0x24a517d0  addiu       $a1, $a1, 0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2010u; }
        if (ctx->pc != 0x3F2010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2010u; }
        if (ctx->pc != 0x3F2010u) { return; }
    }
    ctx->pc = 0x3F2010u;
label_3f2010:
    // 0x3f2010: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3f2010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3f2014: 0xc0aeacc  jal         func_2BAB30
    ctx->pc = 0x3F2014u;
    SET_GPR_U32(ctx, 31, 0x3F201Cu);
    ctx->pc = 0x3F2018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2014u;
            // 0x3f2018: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB30u;
    if (runtime->hasFunction(0x2BAB30u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F201Cu; }
        if (ctx->pc != 0x3F201Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB30_0x2bab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F201Cu; }
        if (ctx->pc != 0x3F201Cu) { return; }
    }
    ctx->pc = 0x3F201Cu;
label_3f201c:
    // 0x3f201c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3f201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3f2020: 0xc0fc838  jal         func_3F20E0
    ctx->pc = 0x3F2020u;
    SET_GPR_U32(ctx, 31, 0x3F2028u);
    ctx->pc = 0x3F2024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2020u;
            // 0x3f2024: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F20E0u;
    if (runtime->hasFunction(0x3F20E0u)) {
        auto targetFn = runtime->lookupFunction(0x3F20E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2028u; }
        if (ctx->pc != 0x3F2028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F20E0_0x3f20e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2028u; }
        if (ctx->pc != 0x3F2028u) { return; }
    }
    ctx->pc = 0x3F2028u;
label_3f2028:
    // 0x3f2028: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3f2028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3f202c: 0xc0fc838  jal         func_3F20E0
    ctx->pc = 0x3F202Cu;
    SET_GPR_U32(ctx, 31, 0x3F2034u);
    ctx->pc = 0x3F2030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F202Cu;
            // 0x3f2030: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F20E0u;
    if (runtime->hasFunction(0x3F20E0u)) {
        auto targetFn = runtime->lookupFunction(0x3F20E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2034u; }
        if (ctx->pc != 0x3F2034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F20E0_0x3f20e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2034u; }
        if (ctx->pc != 0x3F2034u) { return; }
    }
    ctx->pc = 0x3F2034u;
label_3f2034:
    // 0x3f2034: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3f2034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x3f2038: 0xc0fc820  jal         func_3F2080
    ctx->pc = 0x3F2038u;
    SET_GPR_U32(ctx, 31, 0x3F2040u);
    ctx->pc = 0x3F203Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2038u;
            // 0x3f203c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2080u;
    if (runtime->hasFunction(0x3F2080u)) {
        auto targetFn = runtime->lookupFunction(0x3F2080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2040u; }
        if (ctx->pc != 0x3F2040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2080_0x3f2080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2040u; }
        if (ctx->pc != 0x3F2040u) { return; }
    }
    ctx->pc = 0x3F2040u;
label_3f2040:
    // 0x3f2040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2044: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x3F2044u;
    SET_GPR_U32(ctx, 31, 0x3F204Cu);
    ctx->pc = 0x3F2048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2044u;
            // 0x3f2048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F204Cu; }
        if (ctx->pc != 0x3F204Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F204Cu; }
        if (ctx->pc != 0x3F204Cu) { return; }
    }
    ctx->pc = 0x3F204Cu;
label_3f204c:
    // 0x3f204c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3f204cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3f2050: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3f2050u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3f2054: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F2054u;
    {
        const bool branch_taken_0x3f2054 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3f2054) {
            ctx->pc = 0x3F2058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2054u;
            // 0x3f2058: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F2068u;
            goto label_3f2068;
        }
    }
    ctx->pc = 0x3F205Cu;
    // 0x3f205c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3F205Cu;
    SET_GPR_U32(ctx, 31, 0x3F2064u);
    ctx->pc = 0x3F2060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F205Cu;
            // 0x3f2060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2064u; }
        if (ctx->pc != 0x3F2064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F2064u; }
        if (ctx->pc != 0x3F2064u) { return; }
    }
    ctx->pc = 0x3F2064u;
label_3f2064:
    // 0x3f2064: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3f2064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f2068:
    // 0x3f2068: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f2068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f206c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f206cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f2070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2074: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F2074u;
            // 0x3f2078: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F207Cu;
    // 0x3f207c: 0x0  nop
    ctx->pc = 0x3f207cu;
    // NOP
}
