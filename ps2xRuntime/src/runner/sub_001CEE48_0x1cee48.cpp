#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CEE48
// Address: 0x1cee48 - 0x1ceed0
void sub_001CEE48_0x1cee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEE48_0x1cee48");
#endif

    switch (ctx->pc) {
        case 0x1cee84u: goto label_1cee84;
        case 0x1ceeb0u: goto label_1ceeb0;
        default: break;
    }

    ctx->pc = 0x1cee48u;

    // 0x1cee48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cee48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cee4c: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x1cee4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1cee50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cee50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cee54: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1cee54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1cee58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cee58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cee5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cee60: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cee64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cee64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cee68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cee6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cee6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee70: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1cee70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1cee74: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cee78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cee78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cee7c: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CEE7Cu;
    SET_GPR_U32(ctx, 31, 0x1CEE84u);
    ctx->pc = 0x1CEE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE7Cu;
            // 0x1cee80: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE84u; }
        if (ctx->pc != 0x1CEE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEE84u; }
        if (ctx->pc != 0x1CEE84u) { return; }
    }
    ctx->pc = 0x1CEE84u;
label_1cee84:
    // 0x1cee84: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEE84u;
    {
        const bool branch_taken_0x1cee84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cee84) {
            ctx->pc = 0x1CEE88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE84u;
            // 0x1cee88: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEE94u;
            goto label_1cee94;
        }
    }
    ctx->pc = 0x1CEE8Cu;
    // 0x1cee8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CEE8Cu;
    {
        const bool branch_taken_0x1cee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE8Cu;
            // 0x1cee90: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee8c) {
            ctx->pc = 0x1CEEB8u;
            goto label_1ceeb8;
        }
    }
    ctx->pc = 0x1CEE94u;
label_1cee94:
    // 0x1cee94: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEE94u;
    {
        const bool branch_taken_0x1cee94 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CEE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEE94u;
            // 0x1cee98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee94) {
            ctx->pc = 0x1CEEB8u;
            goto label_1ceeb8;
        }
    }
    ctx->pc = 0x1CEE9Cu;
    // 0x1cee9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cee9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceea0: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x1ceea0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ceea4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ceea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceea8: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CEEA8u;
    SET_GPR_U32(ctx, 31, 0x1CEEB0u);
    ctx->pc = 0x1CEEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEEA8u;
            // 0x1ceeac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEEB0u; }
        if (ctx->pc != 0x1CEEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEEB0u; }
        if (ctx->pc != 0x1CEEB0u) { return; }
    }
    ctx->pc = 0x1CEEB0u;
label_1ceeb0:
    // 0x1ceeb0: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CEEB0u;
    {
        const bool branch_taken_0x1ceeb0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ceeb0) {
            ctx->pc = 0x1CEEB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEEB0u;
            // 0x1ceeb4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEEB8u;
            goto label_1ceeb8;
        }
    }
    ctx->pc = 0x1CEEB8u;
label_1ceeb8:
    // 0x1ceeb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ceeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ceebc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ceebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ceec0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ceec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ceec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceec8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEEC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEEC8u;
            // 0x1ceecc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEED0u;
}
