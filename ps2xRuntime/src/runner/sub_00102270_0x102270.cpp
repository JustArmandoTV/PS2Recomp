#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102270
// Address: 0x102270 - 0x102320
void sub_00102270_0x102270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102270_0x102270");
#endif

    switch (ctx->pc) {
        case 0x102270u: goto label_102270;
        case 0x102274u: goto label_102274;
        case 0x102278u: goto label_102278;
        case 0x10227cu: goto label_10227c;
        case 0x102280u: goto label_102280;
        case 0x102284u: goto label_102284;
        case 0x102288u: goto label_102288;
        case 0x10228cu: goto label_10228c;
        case 0x102290u: goto label_102290;
        case 0x102294u: goto label_102294;
        case 0x102298u: goto label_102298;
        case 0x10229cu: goto label_10229c;
        case 0x1022a0u: goto label_1022a0;
        case 0x1022a4u: goto label_1022a4;
        case 0x1022a8u: goto label_1022a8;
        case 0x1022acu: goto label_1022ac;
        case 0x1022b0u: goto label_1022b0;
        case 0x1022b4u: goto label_1022b4;
        case 0x1022b8u: goto label_1022b8;
        case 0x1022bcu: goto label_1022bc;
        case 0x1022c0u: goto label_1022c0;
        case 0x1022c4u: goto label_1022c4;
        case 0x1022c8u: goto label_1022c8;
        case 0x1022ccu: goto label_1022cc;
        case 0x1022d0u: goto label_1022d0;
        case 0x1022d4u: goto label_1022d4;
        case 0x1022d8u: goto label_1022d8;
        case 0x1022dcu: goto label_1022dc;
        case 0x1022e0u: goto label_1022e0;
        case 0x1022e4u: goto label_1022e4;
        case 0x1022e8u: goto label_1022e8;
        case 0x1022ecu: goto label_1022ec;
        case 0x1022f0u: goto label_1022f0;
        case 0x1022f4u: goto label_1022f4;
        case 0x1022f8u: goto label_1022f8;
        case 0x1022fcu: goto label_1022fc;
        case 0x102300u: goto label_102300;
        case 0x102304u: goto label_102304;
        case 0x102308u: goto label_102308;
        case 0x10230cu: goto label_10230c;
        case 0x102310u: goto label_102310;
        case 0x102314u: goto label_102314;
        case 0x102318u: goto label_102318;
        case 0x10231cu: goto label_10231c;
        default: break;
    }

    ctx->pc = 0x102270u;

label_102270:
    // 0x102270: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x102270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_102274:
    // 0x102274: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x102274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_102278:
    // 0x102278: 0x8c478a10  lw          $a3, -0x75F0($v0)
    ctx->pc = 0x102278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937104)));
label_10227c:
    // 0x10227c: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x10227cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_102280:
    // 0x102280: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x102280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_102284:
    // 0x102284: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x102284u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
label_102288:
    // 0x102288: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x102288u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_10228c:
    // 0x10228c: 0x3e00008  jr          $ra
label_102290:
    if (ctx->pc == 0x102290u) {
        ctx->pc = 0x102290u;
            // 0x102290: 0xac668a10  sw          $a2, -0x75F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937104), GPR_U32(ctx, 6));
        ctx->pc = 0x102294u;
        goto label_102294;
    }
    ctx->pc = 0x10228Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10228Cu;
            // 0x102290: 0xac668a10  sw          $a2, -0x75F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937104), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102294u;
label_102294:
    // 0x102294: 0x0  nop
    ctx->pc = 0x102294u;
    // NOP
label_102298:
    // 0x102298: 0x0  nop
    ctx->pc = 0x102298u;
    // NOP
label_10229c:
    // 0x10229c: 0x0  nop
    ctx->pc = 0x10229cu;
    // NOP
label_1022a0:
    // 0x1022a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1022a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1022a4:
    // 0x1022a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1022a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1022a8:
    // 0x1022a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1022a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1022ac:
    // 0x1022ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1022acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1022b0:
    // 0x1022b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1022b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1022b4:
    // 0x1022b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1022b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1022b8:
    // 0x1022b8: 0x93082b  sltu        $at, $a0, $s3
    ctx->pc = 0x1022b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1022bc:
    // 0x1022bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1022bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1022c0:
    // 0x1022c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1022c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1022c4:
    // 0x1022c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1022c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1022c8:
    // 0x1022c8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1022cc:
    if (ctx->pc == 0x1022CCu) {
        ctx->pc = 0x1022CCu;
            // 0x1022cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1022D0u;
        goto label_1022d0;
    }
    ctx->pc = 0x1022C8u;
    {
        const bool branch_taken_0x1022c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022C8u;
            // 0x1022cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022c8) {
            ctx->pc = 0x1022F0u;
            goto label_1022f0;
        }
    }
    ctx->pc = 0x1022D0u;
label_1022d0:
    // 0x1022d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1022d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1022d4:
    // 0x1022d4: 0x40f809  jalr        $v0
label_1022d8:
    if (ctx->pc == 0x1022D8u) {
        ctx->pc = 0x1022DCu;
        goto label_1022dc;
    }
    ctx->pc = 0x1022D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1022DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1022DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1022DCu; }
            if (ctx->pc != 0x1022DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1022DCu;
label_1022dc:
    // 0x1022dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1022dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1022e0:
    // 0x1022e0: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1022e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1022e4:
    // 0x1022e4: 0x0  nop
    ctx->pc = 0x1022e4u;
    // NOP
label_1022e8:
    // 0x1022e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1022ec:
    if (ctx->pc == 0x1022ECu) {
        ctx->pc = 0x1022F0u;
        goto label_1022f0;
    }
    ctx->pc = 0x1022E8u;
    {
        const bool branch_taken_0x1022e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1022e8) {
            ctx->pc = 0x1022D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1022d0;
        }
    }
    ctx->pc = 0x1022F0u;
label_1022f0:
    // 0x1022f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1022f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1022f4:
    // 0x1022f4: 0xc0408f4  jal         func_1023D0
label_1022f8:
    if (ctx->pc == 0x1022F8u) {
        ctx->pc = 0x1022F8u;
            // 0x1022f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1022FCu;
        goto label_1022fc;
    }
    ctx->pc = 0x1022F4u;
    SET_GPR_U32(ctx, 31, 0x1022FCu);
    ctx->pc = 0x1022F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1022F4u;
            // 0x1022f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023D0u;
    if (runtime->hasFunction(0x1023D0u)) {
        auto targetFn = runtime->lookupFunction(0x1023D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022FCu; }
        if (ctx->pc != 0x1022FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001023D0_0x1023d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022FCu; }
        if (ctx->pc != 0x1022FCu) { return; }
    }
    ctx->pc = 0x1022FCu;
label_1022fc:
    // 0x1022fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1022fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_102300:
    // 0x102300: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x102300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_102304:
    // 0x102304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x102304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_102308:
    // 0x102308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10230c:
    // 0x10230c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10230cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_102310:
    // 0x102310: 0x3e00008  jr          $ra
label_102314:
    if (ctx->pc == 0x102314u) {
        ctx->pc = 0x102314u;
            // 0x102314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x102318u;
        goto label_102318;
    }
    ctx->pc = 0x102310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102310u;
            // 0x102314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102318u;
label_102318:
    // 0x102318: 0x0  nop
    ctx->pc = 0x102318u;
    // NOP
label_10231c:
    // 0x10231c: 0x0  nop
    ctx->pc = 0x10231cu;
    // NOP
}
