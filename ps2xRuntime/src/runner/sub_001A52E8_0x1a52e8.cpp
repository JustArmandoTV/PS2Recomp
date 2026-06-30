#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A52E8
// Address: 0x1a52e8 - 0x1a53a0
void sub_001A52E8_0x1a52e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A52E8_0x1a52e8");
#endif

    switch (ctx->pc) {
        case 0x1a533cu: goto label_1a533c;
        case 0x1a5368u: goto label_1a5368;
        default: break;
    }

    ctx->pc = 0x1a52e8u;

    // 0x1a52e8: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x1a52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1a52ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a52ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a52f0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1a52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1a52f4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1a52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a52f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a52f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a52fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a52fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5300: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5304: 0xc38821  addu        $s1, $a2, $v1
    ctx->pc = 0x1a5304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a5308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a5308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a530c: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x1a530cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1a5310: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a5310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a5314: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a5314u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a5318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a531c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1a531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1a5320: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a5324: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a5324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a5328: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x1a5328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1a532c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a532cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5330: 0x4302b  sltu        $a2, $zero, $a0
    ctx->pc = 0x1a5330u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a5334: 0xc069546  jal         func_1A5518
    ctx->pc = 0x1A5334u;
    SET_GPR_U32(ctx, 31, 0x1A533Cu);
    ctx->pc = 0x1A5338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5334u;
            // 0x1a5338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5518u;
    if (runtime->hasFunction(0x1A5518u)) {
        auto targetFn = runtime->lookupFunction(0x1A5518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A533Cu; }
        if (ctx->pc != 0x1A533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5518_0x1a5518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A533Cu; }
        if (ctx->pc != 0x1A533Cu) { return; }
    }
    ctx->pc = 0x1A533Cu;
label_1a533c:
    // 0x1a533c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a5340: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1a5340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a5344: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1a5344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a5348: 0x26621720  addiu       $v0, $s3, 0x1720
    ctx->pc = 0x1a5348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5920));
    // 0x1a534c: 0x26731f18  addiu       $s3, $s3, 0x1F18
    ctx->pc = 0x1a534cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7960));
    // 0x1a5350: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a5350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a5354: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1a5354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1a5358: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a5358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a535c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a535cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a5360: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a5360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a5364: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1a5364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1a5368:
    // 0x1a5368: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a536c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a536cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1a5370: 0x0  nop
    ctx->pc = 0x1a5370u;
    // NOP
    // 0x1a5374: 0x0  nop
    ctx->pc = 0x1a5374u;
    // NOP
    // 0x1a5378: 0x0  nop
    ctx->pc = 0x1a5378u;
    // NOP
    // 0x1a537c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A537Cu;
    {
        const bool branch_taken_0x1a537c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A5380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A537Cu;
            // 0x1a5380: 0x2673ff78  addiu       $s3, $s3, -0x88 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a537c) {
            ctx->pc = 0x1A5368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5368;
        }
    }
    ctx->pc = 0x1A5384u;
    // 0x1a5384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a5388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a538c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a538cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5390: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a5390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a5394: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a5394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5398: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5398u;
            // 0x1a539c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A53A0u;
}
