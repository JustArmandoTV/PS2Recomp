#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199FB0
// Address: 0x199fb0 - 0x19a030
void sub_00199FB0_0x199fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199FB0_0x199fb0");
#endif

    switch (ctx->pc) {
        case 0x19a000u: goto label_19a000;
        default: break;
    }

    ctx->pc = 0x199fb0u;

    // 0x199fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199fb4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x199fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x199fb8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x199fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199fbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x199fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x199fc0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x199fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x199fc4: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x199fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x199fc8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x199fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x199fcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x199fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199fd0: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x199fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x199fd4: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x199fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x199fd8: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x199fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x199fdc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x199FDCu;
    {
        const bool branch_taken_0x199fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199FDCu;
            // 0x199fe0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199fdc) {
            ctx->pc = 0x19A000u;
            goto label_19a000;
        }
    }
    ctx->pc = 0x199FE4u;
    // 0x199fe4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x199FE4u;
    {
        const bool branch_taken_0x199fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199FE4u;
            // 0x199fe8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199fe4) {
            ctx->pc = 0x19A004u;
            goto label_19a004;
        }
    }
    ctx->pc = 0x199FECu;
    // 0x199fec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x199fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x199ff0: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x199ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x199ff4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x199ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ff8: 0xc07008e  jal         func_1C0238
    ctx->pc = 0x199FF8u;
    SET_GPR_U32(ctx, 31, 0x19A000u);
    ctx->pc = 0x199FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199FF8u;
            // 0x199ffc: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0238u;
    if (runtime->hasFunction(0x1C0238u)) {
        auto targetFn = runtime->lookupFunction(0x1C0238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A000u; }
        if (ctx->pc != 0x19A000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0238_0x1c0238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A000u; }
        if (ctx->pc != 0x19A000u) { return; }
    }
    ctx->pc = 0x19A000u;
label_19a000:
    // 0x19a000: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19a000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_19a004:
    // 0x19a004: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19A004u;
    {
        const bool branch_taken_0x19a004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A004u;
            // 0x19a008: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a004) {
            ctx->pc = 0x19A01Cu;
            goto label_19a01c;
        }
    }
    ctx->pc = 0x19A00Cu;
    // 0x19a00c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A00Cu;
    {
        const bool branch_taken_0x19a00c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19a00c) {
            ctx->pc = 0x19A010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19A00Cu;
            // 0x19a010: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19A020u;
            goto label_19a020;
        }
    }
    ctx->pc = 0x19A014u;
    // 0x19a014: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x19a014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x19a018: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x19a018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
label_19a01c:
    // 0x19a01c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19a01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19a020:
    // 0x19a020: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19a020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19a024: 0x3e00008  jr          $ra
    ctx->pc = 0x19A024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A024u;
            // 0x19a028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A02Cu;
    // 0x19a02c: 0x0  nop
    ctx->pc = 0x19a02cu;
    // NOP
}
