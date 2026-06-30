#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044ABD0
// Address: 0x44abd0 - 0x44ac90
void sub_0044ABD0_0x44abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044ABD0_0x44abd0");
#endif

    switch (ctx->pc) {
        case 0x44ac04u: goto label_44ac04;
        case 0x44ac28u: goto label_44ac28;
        case 0x44ac5cu: goto label_44ac5c;
        case 0x44ac7cu: goto label_44ac7c;
        default: break;
    }

    ctx->pc = 0x44abd0u;

    // 0x44abd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x44abd4: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x44ABD4u;
    {
        const bool branch_taken_0x44abd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44ABD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44ABD4u;
            // 0x44abd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44abd4) {
            ctx->pc = 0x44AC30u;
            goto label_44ac30;
        }
    }
    ctx->pc = 0x44ABDCu;
    // 0x44abdc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44abe0: 0x90637548  lbu         $v1, 0x7548($v1)
    ctx->pc = 0x44abe0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30024)));
    // 0x44abe4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x44ABE4u;
    {
        const bool branch_taken_0x44abe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44abe4) {
            ctx->pc = 0x44AC0Cu;
            goto label_44ac0c;
        }
    }
    ctx->pc = 0x44ABECu;
    // 0x44abec: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x44ABECu;
    {
        const bool branch_taken_0x44abec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44abec) {
            ctx->pc = 0x44ABF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44ABECu;
            // 0x44abf0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44AC80u;
            goto label_44ac80;
        }
    }
    ctx->pc = 0x44ABF4u;
    // 0x44abf4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44abf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44abf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44abfc: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x44ABFCu;
    SET_GPR_U32(ctx, 31, 0x44AC04u);
    ctx->pc = 0x44AC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44ABFCu;
            // 0x44ac00: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AC04u; }
        if (ctx->pc != 0x44AC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AC04u; }
        if (ctx->pc != 0x44AC04u) { return; }
    }
    ctx->pc = 0x44AC04u;
label_44ac04:
    // 0x44ac04: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x44AC04u;
    {
        const bool branch_taken_0x44ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ac04) {
            ctx->pc = 0x44AC7Cu;
            goto label_44ac7c;
        }
    }
    ctx->pc = 0x44AC0Cu;
label_44ac0c:
    // 0x44ac0c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x44AC0Cu;
    {
        const bool branch_taken_0x44ac0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ac0c) {
            ctx->pc = 0x44AC7Cu;
            goto label_44ac7c;
        }
    }
    ctx->pc = 0x44AC14u;
    // 0x44ac14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ac18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44ac18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ac1c: 0x8c423eb8  lw          $v0, 0x3EB8($v0)
    ctx->pc = 0x44ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16056)));
    // 0x44ac20: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x44AC20u;
    SET_GPR_U32(ctx, 31, 0x44AC28u);
    ctx->pc = 0x44AC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AC20u;
            // 0x44ac24: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AC28u; }
        if (ctx->pc != 0x44AC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AC28u; }
        if (ctx->pc != 0x44AC28u) { return; }
    }
    ctx->pc = 0x44AC28u;
label_44ac28:
    // 0x44ac28: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x44AC28u;
    {
        const bool branch_taken_0x44ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ac28) {
            ctx->pc = 0x44AC7Cu;
            goto label_44ac7c;
        }
    }
    ctx->pc = 0x44AC30u;
label_44ac30:
    // 0x44ac30: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x44ac34: 0x90637548  lbu         $v1, 0x7548($v1)
    ctx->pc = 0x44ac34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 30024)));
    // 0x44ac38: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x44AC38u;
    {
        const bool branch_taken_0x44ac38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ac38) {
            ctx->pc = 0x44AC64u;
            goto label_44ac64;
        }
    }
    ctx->pc = 0x44AC40u;
    // 0x44ac40: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x44AC40u;
    {
        const bool branch_taken_0x44ac40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ac40) {
            ctx->pc = 0x44AC7Cu;
            goto label_44ac7c;
        }
    }
    ctx->pc = 0x44AC48u;
    // 0x44ac48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ac4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44ac4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ac50: 0x8c423eb8  lw          $v0, 0x3EB8($v0)
    ctx->pc = 0x44ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16056)));
    // 0x44ac54: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x44AC54u;
    SET_GPR_U32(ctx, 31, 0x44AC5Cu);
    ctx->pc = 0x44AC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AC54u;
            // 0x44ac58: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AC5Cu; }
        if (ctx->pc != 0x44AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AC5Cu; }
        if (ctx->pc != 0x44AC5Cu) { return; }
    }
    ctx->pc = 0x44AC5Cu;
label_44ac5c:
    // 0x44ac5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x44AC5Cu;
    {
        const bool branch_taken_0x44ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ac5c) {
            ctx->pc = 0x44AC7Cu;
            goto label_44ac7c;
        }
    }
    ctx->pc = 0x44AC64u;
label_44ac64:
    // 0x44ac64: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44AC64u;
    {
        const bool branch_taken_0x44ac64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44ac64) {
            ctx->pc = 0x44AC7Cu;
            goto label_44ac7c;
        }
    }
    ctx->pc = 0x44AC6Cu;
    // 0x44ac6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44ac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ac70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44ac74: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x44AC74u;
    SET_GPR_U32(ctx, 31, 0x44AC7Cu);
    ctx->pc = 0x44AC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AC74u;
            // 0x44ac78: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AC7Cu; }
        if (ctx->pc != 0x44AC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AC7Cu; }
        if (ctx->pc != 0x44AC7Cu) { return; }
    }
    ctx->pc = 0x44AC7Cu;
label_44ac7c:
    // 0x44ac7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44ac7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44ac80:
    // 0x44ac80: 0x3e00008  jr          $ra
    ctx->pc = 0x44AC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44AC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AC80u;
            // 0x44ac84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44AC88u;
    // 0x44ac88: 0x0  nop
    ctx->pc = 0x44ac88u;
    // NOP
    // 0x44ac8c: 0x0  nop
    ctx->pc = 0x44ac8cu;
    // NOP
}
