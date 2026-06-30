#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7240
// Address: 0x1b7240 - 0x1b72f0
void sub_001B7240_0x1b7240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7240_0x1b7240");
#endif

    switch (ctx->pc) {
        case 0x1b72a4u: goto label_1b72a4;
        default: break;
    }

    ctx->pc = 0x1b7240u;

    // 0x1b7240: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1b7240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1b7244: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b7244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b7248: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B7248u;
    {
        const bool branch_taken_0x1b7248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b7248) {
            ctx->pc = 0x1B7288u;
            goto label_1b7288;
        }
    }
    ctx->pc = 0x1B7250u;
    // 0x1b7250: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1b7250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1b7254: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B7254u;
    {
        const bool branch_taken_0x1b7254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b7254) {
            ctx->pc = 0x1B7288u;
            goto label_1b7288;
        }
    }
    ctx->pc = 0x1B725Cu;
    // 0x1b725c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b7260: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7260u;
    {
        const bool branch_taken_0x1b7260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b7260) {
            ctx->pc = 0x1B7288u;
            goto label_1b7288;
        }
    }
    ctx->pc = 0x1B7268u;
    // 0x1b7268: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x1b7268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x1b726c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B726Cu;
    {
        const bool branch_taken_0x1b726c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B7270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B726Cu;
            // 0x1b7270: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b726c) {
            ctx->pc = 0x1B7288u;
            goto label_1b7288;
        }
    }
    ctx->pc = 0x1B7274u;
    // 0x1b7274: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b7274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7278: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1b7278u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b727c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b727cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7280: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7280u;
            // 0x1b7284: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7288u;
label_1b7288:
    // 0x1b7288: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B728Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7288u;
            // 0x1b728c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7290u;
    // 0x1b7290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7298: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b729c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B729Cu;
    SET_GPR_U32(ctx, 31, 0x1B72A4u);
    ctx->pc = 0x1B72A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B729Cu;
            // 0x1b72a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72A4u; }
        if (ctx->pc != 0x1B72A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B72A4u; }
        if (ctx->pc != 0x1B72A4u) { return; }
    }
    ctx->pc = 0x1B72A4u;
label_1b72a4:
    // 0x1b72a4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b72a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b72a8: 0x26060d88  addiu       $a2, $s0, 0xD88
    ctx->pc = 0x1b72a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1b72ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b72acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b72b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B72B0u;
    {
        const bool branch_taken_0x1b72b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B72B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B72B0u;
            // 0x1b72b4: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b72b0) {
            ctx->pc = 0x1B72C8u;
            goto label_1b72c8;
        }
    }
    ctx->pc = 0x1B72B8u;
    // 0x1b72b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b72b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b72bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b72bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b72c0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B72C0u;
    ctx->pc = 0x1B72C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B72C0u;
            // 0x1b72c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B72C8u;
label_1b72c8:
    // 0x1b72c8: 0x8cc302a4  lw          $v1, 0x2A4($a2)
    ctx->pc = 0x1b72c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 676)));
    // 0x1b72cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b72d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b72d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b72d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b72d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b72d8: 0xacc302a4  sw          $v1, 0x2A4($a2)
    ctx->pc = 0x1b72d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 676), GPR_U32(ctx, 3));
    // 0x1b72dc: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x1b72dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x1b72e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b72e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b72e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B72E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B72E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B72E4u;
            // 0x1b72e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B72ECu;
    // 0x1b72ec: 0x0  nop
    ctx->pc = 0x1b72ecu;
    // NOP
}
