#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E228
// Address: 0x15e228 - 0x15e2e8
void sub_0015E228_0x15e228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E228_0x15e228");
#endif

    switch (ctx->pc) {
        case 0x15e250u: goto label_15e250;
        case 0x15e26cu: goto label_15e26c;
        case 0x15e290u: goto label_15e290;
        case 0x15e298u: goto label_15e298;
        case 0x15e2b0u: goto label_15e2b0;
        case 0x15e2b8u: goto label_15e2b8;
        default: break;
    }

    ctx->pc = 0x15e228u;

label_15e228:
    // 0x15e228: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15e228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e22c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x15e22cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x15e230: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E230u;
    {
        const bool branch_taken_0x15e230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E230u;
            // 0x15e234: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e230) {
            ctx->pc = 0x15E244u;
            goto label_15e244;
        }
    }
    ctx->pc = 0x15E238u;
    // 0x15e238: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x15e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x15e23c: 0x8057854  j           func_15E150
    ctx->pc = 0x15E23Cu;
    ctx->pc = 0x15E240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E23Cu;
            // 0x15e240: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E150u;
    {
        auto targetFn = runtime->lookupFunction(0x15E150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15E244u;
label_15e244:
    // 0x15e244: 0x3e00008  jr          $ra
    ctx->pc = 0x15E244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E244u;
            // 0x15e248: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E24Cu;
    // 0x15e24c: 0x0  nop
    ctx->pc = 0x15e24cu;
    // NOP
label_15e250:
    // 0x15e250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15e250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15e254: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x15e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x15e258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15e258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15e25c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15e25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e260: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e264: 0xc0577f2  jal         func_15DFC8
    ctx->pc = 0x15E264u;
    SET_GPR_U32(ctx, 31, 0x15E26Cu);
    ctx->pc = 0x15E268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E264u;
            // 0x15e268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DFC8u;
    if (runtime->hasFunction(0x15DFC8u)) {
        auto targetFn = runtime->lookupFunction(0x15DFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E26Cu; }
        if (ctx->pc != 0x15E26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DFC8_0x15dfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E26Cu; }
        if (ctx->pc != 0x15E26Cu) { return; }
    }
    ctx->pc = 0x15E26Cu;
label_15e26c:
    // 0x15e26c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x15e26cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x15e270: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x15e270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15e274: 0x602000e  bltzl       $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x15E274u;
    {
        const bool branch_taken_0x15e274 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x15e274) {
            ctx->pc = 0x15E278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E274u;
            // 0x15e278: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E2B0u;
            goto label_15e2b0;
        }
    }
    ctx->pc = 0x15E27Cu;
    // 0x15e27c: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x15e27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x15e280: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x15E280u;
    {
        const bool branch_taken_0x15e280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e280) {
            ctx->pc = 0x15E284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E280u;
            // 0x15e284: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E2C4u;
            goto label_15e2c4;
        }
    }
    ctx->pc = 0x15E288u;
    // 0x15e288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e28c: 0x0  nop
    ctx->pc = 0x15e28cu;
    // NOP
label_15e290:
    // 0x15e290: 0xc05787e  jal         func_15E1F8
    ctx->pc = 0x15E290u;
    SET_GPR_U32(ctx, 31, 0x15E298u);
    ctx->pc = 0x15E294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E290u;
            // 0x15e294: 0x2610ffc4  addiu       $s0, $s0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E1F8u;
    if (runtime->hasFunction(0x15E1F8u)) {
        auto targetFn = runtime->lookupFunction(0x15E1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E298u; }
        if (ctx->pc != 0x15E298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E1F8_0x15e1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E298u; }
        if (ctx->pc != 0x15E298u) { return; }
    }
    ctx->pc = 0x15E298u;
label_15e298:
    // 0x15e298: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x15e298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x15e29c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x15E29Cu;
    {
        const bool branch_taken_0x15e29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E29Cu;
            // 0x15e2a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e29c) {
            ctx->pc = 0x15E290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e290;
        }
    }
    ctx->pc = 0x15E2A4u;
    // 0x15e2a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15E2A4u;
    {
        const bool branch_taken_0x15e2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2A4u;
            // 0x15e2a8: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2a4) {
            ctx->pc = 0x15E2C8u;
            goto label_15e2c8;
        }
    }
    ctx->pc = 0x15E2ACu;
    // 0x15e2ac: 0x0  nop
    ctx->pc = 0x15e2acu;
    // NOP
label_15e2b0:
    // 0x15e2b0: 0xc05788a  jal         func_15E228
    ctx->pc = 0x15E2B0u;
    SET_GPR_U32(ctx, 31, 0x15E2B8u);
    ctx->pc = 0x15E2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2B0u;
            // 0x15e2b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E228u;
    goto label_15e228;
    ctx->pc = 0x15E2B8u;
label_15e2b8:
    // 0x15e2b8: 0x602fffd  bltzl       $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x15E2B8u;
    {
        const bool branch_taken_0x15e2b8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x15e2b8) {
            ctx->pc = 0x15E2BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2B8u;
            // 0x15e2bc: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15E2B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e2b0;
        }
    }
    ctx->pc = 0x15E2C0u;
    // 0x15e2c0: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x15e2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
label_15e2c4:
    // 0x15e2c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e2c8:
    // 0x15e2c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15e2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e2cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x15e2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15e2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e2d4: 0x805780c  j           func_15E030
    ctx->pc = 0x15E2D4u;
    ctx->pc = 0x15E2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2D4u;
            // 0x15e2d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E030u;
    {
        auto targetFn = runtime->lookupFunction(0x15E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15E2DCu;
    // 0x15e2dc: 0x0  nop
    ctx->pc = 0x15e2dcu;
    // NOP
    // 0x15e2e0: 0x8057894  j           func_15E250
    ctx->pc = 0x15E2E0u;
    ctx->pc = 0x15E2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E2E0u;
            // 0x15e2e4: 0x2405fde4  addiu       $a1, $zero, -0x21C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966756));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E250u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_15e250;
    ctx->pc = 0x15E2E8u;
}
