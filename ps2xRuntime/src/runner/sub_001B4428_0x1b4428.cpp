#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4428
// Address: 0x1b4428 - 0x1b44d0
void sub_001B4428_0x1b4428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4428_0x1b4428");
#endif

    switch (ctx->pc) {
        case 0x1b443cu: goto label_1b443c;
        case 0x1b4484u: goto label_1b4484;
        case 0x1b449cu: goto label_1b449c;
        default: break;
    }

    ctx->pc = 0x1b4428u;

    // 0x1b4428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b442c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b442cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4430: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b4430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b4434: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B4434u;
    SET_GPR_U32(ctx, 31, 0x1B443Cu);
    ctx->pc = 0x1B4438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4434u;
            // 0x1b4438: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B443Cu; }
        if (ctx->pc != 0x1B443Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B443Cu; }
        if (ctx->pc != 0x1B443Cu) { return; }
    }
    ctx->pc = 0x1B443Cu;
label_1b443c:
    // 0x1b443c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b443cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b4440: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4444: 0x34a5013c  ori         $a1, $a1, 0x13C
    ctx->pc = 0x1b4444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)316);
    // 0x1b4448: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4448u;
    {
        const bool branch_taken_0x1b4448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4448u;
            // 0x1b444c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4448) {
            ctx->pc = 0x1B4460u;
            goto label_1b4460;
        }
    }
    ctx->pc = 0x1B4450u;
    // 0x1b4450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4454: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b4454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4458: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B4458u;
    ctx->pc = 0x1B445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4458u;
            // 0x1b445c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B4460u;
label_1b4460:
    // 0x1b4460: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1b4460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b4464: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B4464u;
    {
        const bool branch_taken_0x1b4464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B4468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4464u;
            // 0x1b4468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4464) {
            ctx->pc = 0x1B44C0u;
            goto label_1b44c0;
        }
    }
    ctx->pc = 0x1B446Cu;
    // 0x1b446c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1b446cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1b4470: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4474: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1b4474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b4478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b4478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b447c: 0xc06e35c  jal         func_1B8D70
    ctx->pc = 0x1B447Cu;
    SET_GPR_U32(ctx, 31, 0x1B4484u);
    ctx->pc = 0x1B4480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B447Cu;
            // 0x1b4480: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4484u; }
        if (ctx->pc != 0x1B4484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4484u; }
        if (ctx->pc != 0x1B4484u) { return; }
    }
    ctx->pc = 0x1B4484u;
label_1b4484:
    // 0x1b4484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4488: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b4488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b448c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1b448cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b4490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b4490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4494: 0xc06e35c  jal         func_1B8D70
    ctx->pc = 0x1B4494u;
    SET_GPR_U32(ctx, 31, 0x1B449Cu);
    ctx->pc = 0x1B4498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4494u;
            // 0x1b4498: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B449Cu; }
        if (ctx->pc != 0x1B449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B449Cu; }
        if (ctx->pc != 0x1B449Cu) { return; }
    }
    ctx->pc = 0x1B449Cu;
label_1b449c:
    // 0x1b449c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b44a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b44a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b44a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b44a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b44a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b44ac: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1b44acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b44b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b44b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b44b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44b8: 0x806e35c  j           func_1B8D70
    ctx->pc = 0x1B44B8u;
    ctx->pc = 0x1B44BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44B8u;
            // 0x1b44bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D70u;
    if (runtime->hasFunction(0x1B8D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8D70_0x1b8d70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B44C0u;
label_1b44c0:
    // 0x1b44c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b44c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b44c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b44c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b44c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B44C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B44CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B44C8u;
            // 0x1b44cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B44D0u;
}
