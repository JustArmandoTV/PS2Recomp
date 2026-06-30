#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDEA8
// Address: 0x1bdea8 - 0x1bdf60
void sub_001BDEA8_0x1bdea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDEA8_0x1bdea8");
#endif

    switch (ctx->pc) {
        case 0x1bdea8u: goto label_1bdea8;
        case 0x1bdeacu: goto label_1bdeac;
        case 0x1bdeb0u: goto label_1bdeb0;
        case 0x1bdeb4u: goto label_1bdeb4;
        case 0x1bdeb8u: goto label_1bdeb8;
        case 0x1bdebcu: goto label_1bdebc;
        case 0x1bdec0u: goto label_1bdec0;
        case 0x1bdec4u: goto label_1bdec4;
        case 0x1bdec8u: goto label_1bdec8;
        case 0x1bdeccu: goto label_1bdecc;
        case 0x1bded0u: goto label_1bded0;
        case 0x1bded4u: goto label_1bded4;
        case 0x1bded8u: goto label_1bded8;
        case 0x1bdedcu: goto label_1bdedc;
        case 0x1bdee0u: goto label_1bdee0;
        case 0x1bdee4u: goto label_1bdee4;
        case 0x1bdee8u: goto label_1bdee8;
        case 0x1bdeecu: goto label_1bdeec;
        case 0x1bdef0u: goto label_1bdef0;
        case 0x1bdef4u: goto label_1bdef4;
        case 0x1bdef8u: goto label_1bdef8;
        case 0x1bdefcu: goto label_1bdefc;
        case 0x1bdf00u: goto label_1bdf00;
        case 0x1bdf04u: goto label_1bdf04;
        case 0x1bdf08u: goto label_1bdf08;
        case 0x1bdf0cu: goto label_1bdf0c;
        case 0x1bdf10u: goto label_1bdf10;
        case 0x1bdf14u: goto label_1bdf14;
        case 0x1bdf18u: goto label_1bdf18;
        case 0x1bdf1cu: goto label_1bdf1c;
        case 0x1bdf20u: goto label_1bdf20;
        case 0x1bdf24u: goto label_1bdf24;
        case 0x1bdf28u: goto label_1bdf28;
        case 0x1bdf2cu: goto label_1bdf2c;
        case 0x1bdf30u: goto label_1bdf30;
        case 0x1bdf34u: goto label_1bdf34;
        case 0x1bdf38u: goto label_1bdf38;
        case 0x1bdf3cu: goto label_1bdf3c;
        case 0x1bdf40u: goto label_1bdf40;
        case 0x1bdf44u: goto label_1bdf44;
        case 0x1bdf48u: goto label_1bdf48;
        case 0x1bdf4cu: goto label_1bdf4c;
        case 0x1bdf50u: goto label_1bdf50;
        case 0x1bdf54u: goto label_1bdf54;
        case 0x1bdf58u: goto label_1bdf58;
        case 0x1bdf5cu: goto label_1bdf5c;
        default: break;
    }

    ctx->pc = 0x1bdea8u;

label_1bdea8:
    // 0x1bdea8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bdea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1bdeac:
    // 0x1bdeac: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1bdeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_1bdeb0:
    // 0x1bdeb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bdeb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bdeb4:
    // 0x1bdeb4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x1bdeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_1bdeb8:
    // 0x1bdeb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bdeb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bdebc:
    // 0x1bdebc: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x1bdebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_1bdec0:
    // 0x1bdec0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1bdec0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bdec4:
    // 0x1bdec4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bdec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bdec8:
    // 0x1bdec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdecc:
    // 0x1bdecc: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1bdeccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1bded0:
    // 0x1bded0: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1bded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_1bded4:
    // 0x1bded4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1bded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1bded8:
    // 0x1bded8: 0xc04a576  jal         func_1295D8
label_1bdedc:
    if (ctx->pc == 0x1BDEDCu) {
        ctx->pc = 0x1BDEDCu;
            // 0x1bdedc: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BDEE0u;
        goto label_1bdee0;
    }
    ctx->pc = 0x1BDED8u;
    SET_GPR_U32(ctx, 31, 0x1BDEE0u);
    ctx->pc = 0x1BDEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDED8u;
            // 0x1bdedc: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEE0u; }
        if (ctx->pc != 0x1BDEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEE0u; }
        if (ctx->pc != 0x1BDEE0u) { return; }
    }
    ctx->pc = 0x1BDEE0u;
label_1bdee0:
    // 0x1bdee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bdee4:
    // 0x1bdee4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bdee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bdee8:
    // 0x1bdee8: 0xc06f7d8  jal         func_1BDF60
label_1bdeec:
    if (ctx->pc == 0x1BDEECu) {
        ctx->pc = 0x1BDEECu;
            // 0x1bdeec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BDEF0u;
        goto label_1bdef0;
    }
    ctx->pc = 0x1BDEE8u;
    SET_GPR_U32(ctx, 31, 0x1BDEF0u);
    ctx->pc = 0x1BDEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEE8u;
            // 0x1bdeec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDF60u;
    if (runtime->hasFunction(0x1BDF60u)) {
        auto targetFn = runtime->lookupFunction(0x1BDF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEF0u; }
        if (ctx->pc != 0x1BDEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDF60_0x1bdf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDEF0u; }
        if (ctx->pc != 0x1BDEF0u) { return; }
    }
    ctx->pc = 0x1BDEF0u;
label_1bdef0:
    // 0x1bdef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bdef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bdef4:
    // 0x1bdef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdef8:
    // 0x1bdef8: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_1bdefc:
    if (ctx->pc == 0x1BDEFCu) {
        ctx->pc = 0x1BDEFCu;
            // 0x1bdefc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF00u;
        goto label_1bdf00;
    }
    ctx->pc = 0x1BDEF8u;
    {
        const bool branch_taken_0x1bdef8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BDEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDEF8u;
            // 0x1bdefc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdef8) {
            ctx->pc = 0x1BDF04u;
            goto label_1bdf04;
        }
    }
    ctx->pc = 0x1BDF00u;
label_1bdf00:
    // 0x1bdf00: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1bdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1bdf04:
    // 0x1bdf04: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1bdf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1bdf08:
    // 0x1bdf08: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1bdf08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_1bdf0c:
    // 0x1bdf0c: 0xc06fa9a  jal         func_1BEA68
label_1bdf10:
    if (ctx->pc == 0x1BDF10u) {
        ctx->pc = 0x1BDF10u;
            // 0x1bdf10: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->pc = 0x1BDF14u;
        goto label_1bdf14;
    }
    ctx->pc = 0x1BDF0Cu;
    SET_GPR_U32(ctx, 31, 0x1BDF14u);
    ctx->pc = 0x1BDF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF0Cu;
            // 0x1bdf10: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA68u;
    if (runtime->hasFunction(0x1BEA68u)) {
        auto targetFn = runtime->lookupFunction(0x1BEA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF14u; }
        if (ctx->pc != 0x1BDF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEA68_0x1bea68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF14u; }
        if (ctx->pc != 0x1BDF14u) { return; }
    }
    ctx->pc = 0x1BDF14u;
label_1bdf14:
    // 0x1bdf14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdf18:
    // 0x1bdf18: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1bdf1c:
    if (ctx->pc == 0x1BDF1Cu) {
        ctx->pc = 0x1BDF1Cu;
            // 0x1bdf1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF20u;
        goto label_1bdf20;
    }
    ctx->pc = 0x1BDF18u;
    {
        const bool branch_taken_0x1bdf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BDF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF18u;
            // 0x1bdf1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf18) {
            ctx->pc = 0x1BDF28u;
            goto label_1bdf28;
        }
    }
    ctx->pc = 0x1BDF20u;
label_1bdf20:
    // 0x1bdf20: 0xc06f588  jal         func_1BD620
label_1bdf24:
    if (ctx->pc == 0x1BDF24u) {
        ctx->pc = 0x1BDF28u;
        goto label_1bdf28;
    }
    ctx->pc = 0x1BDF20u;
    SET_GPR_U32(ctx, 31, 0x1BDF28u);
    ctx->pc = 0x1BD620u;
    if (runtime->hasFunction(0x1BD620u)) {
        auto targetFn = runtime->lookupFunction(0x1BD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF28u; }
        if (ctx->pc != 0x1BDF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD620_0x1bd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF28u; }
        if (ctx->pc != 0x1BDF28u) { return; }
    }
    ctx->pc = 0x1BDF28u;
label_1bdf28:
    // 0x1bdf28: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x1bdf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_1bdf2c:
    // 0x1bdf2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bdf30:
    if (ctx->pc == 0x1BDF30u) {
        ctx->pc = 0x1BDF30u;
            // 0x1bdf30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF34u;
        goto label_1bdf34;
    }
    ctx->pc = 0x1BDF2Cu;
    {
        const bool branch_taken_0x1bdf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF2Cu;
            // 0x1bdf30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf2c) {
            ctx->pc = 0x1BDF40u;
            goto label_1bdf40;
        }
    }
    ctx->pc = 0x1BDF34u;
label_1bdf34:
    // 0x1bdf34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bdf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bdf38:
    // 0x1bdf38: 0x40f809  jalr        $v0
label_1bdf3c:
    if (ctx->pc == 0x1BDF3Cu) {
        ctx->pc = 0x1BDF3Cu;
            // 0x1bdf3c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1BDF40u;
        goto label_1bdf40;
    }
    ctx->pc = 0x1BDF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BDF40u);
        ctx->pc = 0x1BDF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF38u;
            // 0x1bdf3c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BDF40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF40u; }
            if (ctx->pc != 0x1BDF40u) { return; }
        }
        }
    }
    ctx->pc = 0x1BDF40u;
label_1bdf40:
    // 0x1bdf40: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1bdf40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1bdf44:
    // 0x1bdf44: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1bdf44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1bdf48:
    // 0x1bdf48: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x1bdf48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1bdf4c:
    // 0x1bdf4c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x1bdf4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_1bdf50:
    // 0x1bdf50: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1bdf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1bdf54:
    // 0x1bdf54: 0x3e00008  jr          $ra
label_1bdf58:
    if (ctx->pc == 0x1BDF58u) {
        ctx->pc = 0x1BDF58u;
            // 0x1bdf58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1BDF5Cu;
        goto label_1bdf5c;
    }
    ctx->pc = 0x1BDF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF54u;
            // 0x1bdf58: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BDF5Cu;
label_1bdf5c:
    // 0x1bdf5c: 0x0  nop
    ctx->pc = 0x1bdf5cu;
    // NOP
}
