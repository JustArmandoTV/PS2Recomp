#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA010
// Address: 0x1aa010 - 0x1aa078
void sub_001AA010_0x1aa010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA010_0x1aa010");
#endif

    switch (ctx->pc) {
        case 0x1aa03cu: goto label_1aa03c;
        case 0x1aa054u: goto label_1aa054;
        default: break;
    }

    ctx->pc = 0x1aa010u;

    // 0x1aa010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa01c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aa020: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1aa020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa028: 0x26021fe4  addiu       $v0, $s0, 0x1FE4
    ctx->pc = 0x1aa028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8164));
    // 0x1aa02c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aa030: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1aa030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1aa034: 0xc069962  jal         func_1A6588
    ctx->pc = 0x1AA034u;
    SET_GPR_U32(ctx, 31, 0x1AA03Cu);
    ctx->pc = 0x1AA038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA034u;
            // 0x1aa038: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6588u;
    if (runtime->hasFunction(0x1A6588u)) {
        auto targetFn = runtime->lookupFunction(0x1A6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA03Cu; }
        if (ctx->pc != 0x1AA03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6588_0x1a6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA03Cu; }
        if (ctx->pc != 0x1AA03Cu) { return; }
    }
    ctx->pc = 0x1AA03Cu;
label_1aa03c:
    // 0x1aa03c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa044: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA044u;
    {
        const bool branch_taken_0x1aa044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AA048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA044u;
            // 0x1aa048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa044) {
            ctx->pc = 0x1AA058u;
            goto label_1aa058;
        }
    }
    ctx->pc = 0x1AA04Cu;
    // 0x1aa04c: 0xc06a752  jal         func_1A9D48
    ctx->pc = 0x1AA04Cu;
    SET_GPR_U32(ctx, 31, 0x1AA054u);
    ctx->pc = 0x1AA050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA04Cu;
            // 0x1aa050: 0x8e25003c  lw          $a1, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9D48u;
    if (runtime->hasFunction(0x1A9D48u)) {
        auto targetFn = runtime->lookupFunction(0x1A9D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA054u; }
        if (ctx->pc != 0x1AA054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9D48_0x1a9d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA054u; }
        if (ctx->pc != 0x1AA054u) { return; }
    }
    ctx->pc = 0x1AA054u;
label_1aa054:
    // 0x1aa054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa058:
    // 0x1aa058: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA058u;
    {
        const bool branch_taken_0x1aa058 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa058) {
            ctx->pc = 0x1AA05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA058u;
            // 0x1aa05c: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AA060u;
            goto label_1aa060;
        }
    }
    ctx->pc = 0x1AA060u;
label_1aa060:
    // 0x1aa060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa064: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa06c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa070: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA070u;
            // 0x1aa074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA078u;
}
