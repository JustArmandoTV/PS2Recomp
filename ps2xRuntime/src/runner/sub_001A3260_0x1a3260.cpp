#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A3260
// Address: 0x1a3260 - 0x1a32f0
void sub_001A3260_0x1a3260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3260_0x1a3260");
#endif

    switch (ctx->pc) {
        case 0x1a3260u: goto label_1a3260;
        case 0x1a3264u: goto label_1a3264;
        case 0x1a3268u: goto label_1a3268;
        case 0x1a326cu: goto label_1a326c;
        case 0x1a3270u: goto label_1a3270;
        case 0x1a3274u: goto label_1a3274;
        case 0x1a3278u: goto label_1a3278;
        case 0x1a327cu: goto label_1a327c;
        case 0x1a3280u: goto label_1a3280;
        case 0x1a3284u: goto label_1a3284;
        case 0x1a3288u: goto label_1a3288;
        case 0x1a328cu: goto label_1a328c;
        case 0x1a3290u: goto label_1a3290;
        case 0x1a3294u: goto label_1a3294;
        case 0x1a3298u: goto label_1a3298;
        case 0x1a329cu: goto label_1a329c;
        case 0x1a32a0u: goto label_1a32a0;
        case 0x1a32a4u: goto label_1a32a4;
        case 0x1a32a8u: goto label_1a32a8;
        case 0x1a32acu: goto label_1a32ac;
        case 0x1a32b0u: goto label_1a32b0;
        case 0x1a32b4u: goto label_1a32b4;
        case 0x1a32b8u: goto label_1a32b8;
        case 0x1a32bcu: goto label_1a32bc;
        case 0x1a32c0u: goto label_1a32c0;
        case 0x1a32c4u: goto label_1a32c4;
        case 0x1a32c8u: goto label_1a32c8;
        case 0x1a32ccu: goto label_1a32cc;
        case 0x1a32d0u: goto label_1a32d0;
        case 0x1a32d4u: goto label_1a32d4;
        case 0x1a32d8u: goto label_1a32d8;
        case 0x1a32dcu: goto label_1a32dc;
        case 0x1a32e0u: goto label_1a32e0;
        case 0x1a32e4u: goto label_1a32e4;
        case 0x1a32e8u: goto label_1a32e8;
        case 0x1a32ecu: goto label_1a32ec;
        default: break;
    }

    ctx->pc = 0x1a3260u;

label_1a3260:
    // 0x1a3260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3264:
    // 0x1a3264: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a3264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a3268:
    // 0x1a3268: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a3268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a326c:
    // 0x1a326c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a3270:
    // 0x1a3270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a3274:
    // 0x1a3274: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a3274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a3278:
    // 0x1a3278: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a3278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a327c:
    // 0x1a327c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1a3280:
    // 0x1a3280: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1a3280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1a3284:
    // 0x1a3284: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1a3284u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1a3288:
    // 0x1a3288: 0xc068f4a  jal         func_1A3D28
label_1a328c:
    if (ctx->pc == 0x1A328Cu) {
        ctx->pc = 0x1A328Cu;
            // 0x1a328c: 0x8e112074  lw          $s1, 0x2074($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8308)));
        ctx->pc = 0x1A3290u;
        goto label_1a3290;
    }
    ctx->pc = 0x1A3288u;
    SET_GPR_U32(ctx, 31, 0x1A3290u);
    ctx->pc = 0x1A328Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3288u;
            // 0x1a328c: 0x8e112074  lw          $s1, 0x2074($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8308)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3D28u;
    if (runtime->hasFunction(0x1A3D28u)) {
        auto targetFn = runtime->lookupFunction(0x1A3D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3290u; }
        if (ctx->pc != 0x1A3290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3D28_0x1a3d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3290u; }
        if (ctx->pc != 0x1A3290u) { return; }
    }
    ctx->pc = 0x1A3290u;
label_1a3290:
    // 0x1a3290: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1a3290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1a3294:
    // 0x1a3294: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1a3298:
    if (ctx->pc == 0x1A3298u) {
        ctx->pc = 0x1A3298u;
            // 0x1a3298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A329Cu;
        goto label_1a329c;
    }
    ctx->pc = 0x1A3294u;
    {
        const bool branch_taken_0x1a3294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A3298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3294u;
            // 0x1a3298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3294) {
            ctx->pc = 0x1A32D4u;
            goto label_1a32d4;
        }
    }
    ctx->pc = 0x1A329Cu;
label_1a329c:
    // 0x1a329c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a32a0:
    // 0x1a32a0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1a32a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a32a4:
    // 0x1a32a4: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x1a32a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_1a32a8:
    // 0x1a32a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a32a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a32ac:
    // 0x1a32ac: 0x60f809  jalr        $v1
label_1a32b0:
    if (ctx->pc == 0x1A32B0u) {
        ctx->pc = 0x1A32B0u;
            // 0x1a32b0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1A32B4u;
        goto label_1a32b4;
    }
    ctx->pc = 0x1A32ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A32B4u);
        ctx->pc = 0x1A32B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A32ACu;
            // 0x1a32b0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A32B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A32B4u; }
            if (ctx->pc != 0x1A32B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A32B4u;
label_1a32b4:
    // 0x1a32b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a32b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a32b8:
    // 0x1a32b8: 0xc068f5c  jal         func_1A3D70
label_1a32bc:
    if (ctx->pc == 0x1A32BCu) {
        ctx->pc = 0x1A32BCu;
            // 0x1a32bc: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x1A32C0u;
        goto label_1a32c0;
    }
    ctx->pc = 0x1A32B8u;
    SET_GPR_U32(ctx, 31, 0x1A32C0u);
    ctx->pc = 0x1A32BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A32B8u;
            // 0x1a32bc: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3D70u;
    if (runtime->hasFunction(0x1A3D70u)) {
        auto targetFn = runtime->lookupFunction(0x1A3D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32C0u; }
        if (ctx->pc != 0x1A32C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3D70_0x1a3d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32C0u; }
        if (ctx->pc != 0x1A32C0u) { return; }
    }
    ctx->pc = 0x1A32C0u;
label_1a32c0:
    // 0x1a32c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1a32c4:
    if (ctx->pc == 0x1A32C4u) {
        ctx->pc = 0x1A32C4u;
            // 0x1a32c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A32C8u;
        goto label_1a32c8;
    }
    ctx->pc = 0x1A32C0u;
    {
        const bool branch_taken_0x1a32c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A32C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A32C0u;
            // 0x1a32c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a32c0) {
            ctx->pc = 0x1A32D4u;
            goto label_1a32d4;
        }
    }
    ctx->pc = 0x1A32C8u;
label_1a32c8:
    // 0x1a32c8: 0xc068f64  jal         func_1A3D90
label_1a32cc:
    if (ctx->pc == 0x1A32CCu) {
        ctx->pc = 0x1A32D0u;
        goto label_1a32d0;
    }
    ctx->pc = 0x1A32C8u;
    SET_GPR_U32(ctx, 31, 0x1A32D0u);
    ctx->pc = 0x1A3D90u;
    if (runtime->hasFunction(0x1A3D90u)) {
        auto targetFn = runtime->lookupFunction(0x1A3D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32D0u; }
        if (ctx->pc != 0x1A32D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3D90_0x1a3d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A32D0u; }
        if (ctx->pc != 0x1A32D0u) { return; }
    }
    ctx->pc = 0x1A32D0u;
label_1a32d0:
    // 0x1a32d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a32d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a32d4:
    // 0x1a32d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a32d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a32d8:
    // 0x1a32d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a32d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a32dc:
    // 0x1a32dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a32dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a32e0:
    // 0x1a32e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a32e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a32e4:
    // 0x1a32e4: 0x3e00008  jr          $ra
label_1a32e8:
    if (ctx->pc == 0x1A32E8u) {
        ctx->pc = 0x1A32E8u;
            // 0x1a32e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A32ECu;
        goto label_1a32ec;
    }
    ctx->pc = 0x1A32E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A32E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A32E4u;
            // 0x1a32e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A32ECu;
label_1a32ec:
    // 0x1a32ec: 0x0  nop
    ctx->pc = 0x1a32ecu;
    // NOP
}
