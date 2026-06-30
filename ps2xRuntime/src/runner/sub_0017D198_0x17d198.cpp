#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017D198
// Address: 0x17d198 - 0x17d280
void sub_0017D198_0x17d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D198_0x17d198");
#endif

    switch (ctx->pc) {
        case 0x17d20cu: goto label_17d20c;
        case 0x17d218u: goto label_17d218;
        case 0x17d220u: goto label_17d220;
        case 0x17d228u: goto label_17d228;
        case 0x17d230u: goto label_17d230;
        case 0x17d254u: goto label_17d254;
        default: break;
    }

    ctx->pc = 0x17d198u;

    // 0x17d198: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17d19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17d1a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17d1a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17d1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d1ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17d1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17d1b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17d1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17d1b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17d1b8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x17D1B8u;
    {
        const bool branch_taken_0x17d1b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D1B8u;
            // 0x17d1bc: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1b8) {
            ctx->pc = 0x17D1E8u;
            goto label_17d1e8;
        }
    }
    ctx->pc = 0x17D1C0u;
    // 0x17d1c0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17d1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d1c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d1cc: 0x24a55f98  addiu       $a1, $a1, 0x5F98
    ctx->pc = 0x17d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24472));
    // 0x17d1d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17d1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d1d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17d1d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d1d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17d1d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d1dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17d1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d1e0: 0x805f242  j           func_17C908
    ctx->pc = 0x17D1E0u;
    ctx->pc = 0x17D1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D1E0u;
            // 0x17d1e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C908u;
    if (runtime->hasFunction(0x17C908u)) {
        auto targetFn = runtime->lookupFunction(0x17C908u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017C908_0x17c908(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17D1E8u;
label_17d1e8:
    // 0x17d1e8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x17d1e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17d1ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17d1ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17d1f0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x17D1F0u;
    {
        const bool branch_taken_0x17d1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d1f0) {
            ctx->pc = 0x17D1F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D1F0u;
            // 0x17d1f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D260u;
            goto label_17d260;
        }
    }
    ctx->pc = 0x17D1F8u;
    // 0x17d1f8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x17d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17d1fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D1FCu;
    {
        const bool branch_taken_0x17d1fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D1FCu;
            // 0x17d200: 0x3c110009  lui         $s1, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)9 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d1fc) {
            ctx->pc = 0x17D20Cu;
            goto label_17d20c;
        }
    }
    ctx->pc = 0x17D204u;
    // 0x17d204: 0xc05eaae  jal         func_17AAB8
    ctx->pc = 0x17D204u;
    SET_GPR_U32(ctx, 31, 0x17D20Cu);
    ctx->pc = 0x17AAB8u;
    if (runtime->hasFunction(0x17AAB8u)) {
        auto targetFn = runtime->lookupFunction(0x17AAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D20Cu; }
        if (ctx->pc != 0x17D20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AAB8_0x17aab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D20Cu; }
        if (ctx->pc != 0x17D20Cu) { return; }
    }
    ctx->pc = 0x17D20Cu;
label_17d20c:
    // 0x17d20c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x17d20cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17d210: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x17d210u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x17d214: 0x3c140063  lui         $s4, 0x63
    ctx->pc = 0x17d214u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)99 << 16));
label_17d218:
    // 0x17d218: 0xc05ec12  jal         func_17B048
    ctx->pc = 0x17D218u;
    SET_GPR_U32(ctx, 31, 0x17D220u);
    ctx->pc = 0x17B048u;
    if (runtime->hasFunction(0x17B048u)) {
        auto targetFn = runtime->lookupFunction(0x17B048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D220u; }
        if (ctx->pc != 0x17D220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B048_0x17b048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D220u; }
        if (ctx->pc != 0x17D220u) { return; }
    }
    ctx->pc = 0x17D220u;
label_17d220:
    // 0x17d220: 0xc05f2aa  jal         func_17CAA8
    ctx->pc = 0x17D220u;
    SET_GPR_U32(ctx, 31, 0x17D228u);
    ctx->pc = 0x17CAA8u;
    if (runtime->hasFunction(0x17CAA8u)) {
        auto targetFn = runtime->lookupFunction(0x17CAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D228u; }
        if (ctx->pc != 0x17D228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017CAA8_0x17caa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D228u; }
        if (ctx->pc != 0x17D228u) { return; }
    }
    ctx->pc = 0x17D228u;
label_17d228:
    // 0x17d228: 0xc05f4a0  jal         func_17D280
    ctx->pc = 0x17D228u;
    SET_GPR_U32(ctx, 31, 0x17D230u);
    ctx->pc = 0x17D22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D228u;
            // 0x17d22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D280u;
    if (runtime->hasFunction(0x17D280u)) {
        auto targetFn = runtime->lookupFunction(0x17D280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D230u; }
        if (ctx->pc != 0x17D230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D280_0x17d280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D230u; }
        if (ctx->pc != 0x17D230u) { return; }
    }
    ctx->pc = 0x17D230u;
label_17d230:
    // 0x17d230: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x17d230u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17d234: 0x54730008  bnel        $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x17D234u;
    {
        const bool branch_taken_0x17d234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x17d234) {
            ctx->pc = 0x17D238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17D234u;
            // 0x17d238: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17D258u;
            goto label_17d258;
        }
    }
    ctx->pc = 0x17D23Cu;
    // 0x17d23c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17d23cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17d240: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x17d240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17d244: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17D244u;
    {
        const bool branch_taken_0x17d244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d244) {
            ctx->pc = 0x17D218u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17d218;
        }
    }
    ctx->pc = 0x17D24Cu;
    // 0x17d24c: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17D24Cu;
    SET_GPR_U32(ctx, 31, 0x17D254u);
    ctx->pc = 0x17D250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17D24Cu;
            // 0x17d250: 0x26845ff8  addiu       $a0, $s4, 0x5FF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D254u; }
        if (ctx->pc != 0x17D254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D254u; }
        if (ctx->pc != 0x17D254u) { return; }
    }
    ctx->pc = 0x17D254u;
label_17d254:
    // 0x17d254: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x17d254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_17d258:
    // 0x17d258: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x17d258u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17d25c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17d25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d260:
    // 0x17d260: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d260u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d264: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17d264u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d268: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17d268u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d26c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17d26cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d270: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17d270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d274: 0x3e00008  jr          $ra
    ctx->pc = 0x17D274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17D274u;
            // 0x17d278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17D27Cu;
    // 0x17d27c: 0x0  nop
    ctx->pc = 0x17d27cu;
    // NOP
}
