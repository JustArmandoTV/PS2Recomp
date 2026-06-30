#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1340
// Address: 0x1a1340 - 0x1a13a0
void sub_001A1340_0x1a1340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1340_0x1a1340");
#endif

    switch (ctx->pc) {
        case 0x1a1340u: goto label_1a1340;
        case 0x1a1344u: goto label_1a1344;
        case 0x1a1348u: goto label_1a1348;
        case 0x1a134cu: goto label_1a134c;
        case 0x1a1350u: goto label_1a1350;
        case 0x1a1354u: goto label_1a1354;
        case 0x1a1358u: goto label_1a1358;
        case 0x1a135cu: goto label_1a135c;
        case 0x1a1360u: goto label_1a1360;
        case 0x1a1364u: goto label_1a1364;
        case 0x1a1368u: goto label_1a1368;
        case 0x1a136cu: goto label_1a136c;
        case 0x1a1370u: goto label_1a1370;
        case 0x1a1374u: goto label_1a1374;
        case 0x1a1378u: goto label_1a1378;
        case 0x1a137cu: goto label_1a137c;
        case 0x1a1380u: goto label_1a1380;
        case 0x1a1384u: goto label_1a1384;
        case 0x1a1388u: goto label_1a1388;
        case 0x1a138cu: goto label_1a138c;
        case 0x1a1390u: goto label_1a1390;
        case 0x1a1394u: goto label_1a1394;
        case 0x1a1398u: goto label_1a1398;
        case 0x1a139cu: goto label_1a139c;
        default: break;
    }

    ctx->pc = 0x1a1340u;

label_1a1340:
    // 0x1a1340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a1344:
    // 0x1a1344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1348:
    // 0x1a1348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a134c:
    // 0x1a134c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a1350:
    // 0x1a1350: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a1354:
    // 0x1a1354: 0xc0685d4  jal         func_1A1750
label_1a1358:
    if (ctx->pc == 0x1A1358u) {
        ctx->pc = 0x1A1358u;
            // 0x1a1358: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A135Cu;
        goto label_1a135c;
    }
    ctx->pc = 0x1A1354u;
    SET_GPR_U32(ctx, 31, 0x1A135Cu);
    ctx->pc = 0x1A1358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1354u;
            // 0x1a1358: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (runtime->hasFunction(0x1A1750u)) {
        auto targetFn = runtime->lookupFunction(0x1A1750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A135Cu; }
        if (ctx->pc != 0x1A135Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1750_0x1a1750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A135Cu; }
        if (ctx->pc != 0x1A135Cu) { return; }
    }
    ctx->pc = 0x1A135Cu;
label_1a135c:
    // 0x1a135c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a135cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1360:
    // 0x1a1360: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1a1364:
    if (ctx->pc == 0x1A1364u) {
        ctx->pc = 0x1A1364u;
            // 0x1a1364: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1368u;
        goto label_1a1368;
    }
    ctx->pc = 0x1A1360u;
    {
        const bool branch_taken_0x1a1360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1360) {
            ctx->pc = 0x1A1364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1360u;
            // 0x1a1364: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A138Cu;
            goto label_1a138c;
        }
    }
    ctx->pc = 0x1A1368u;
label_1a1368:
    // 0x1a1368: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a136c:
    // 0x1a136c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a1370:
    if (ctx->pc == 0x1A1370u) {
        ctx->pc = 0x1A1370u;
            // 0x1a1370: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x1A1374u;
        goto label_1a1374;
    }
    ctx->pc = 0x1A136Cu;
    {
        const bool branch_taken_0x1a136c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A136Cu;
            // 0x1a1370: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a136c) {
            ctx->pc = 0x1A1388u;
            goto label_1a1388;
        }
    }
    ctx->pc = 0x1A1374u;
label_1a1374:
    // 0x1a1374: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1a1374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a1378:
    // 0x1a1378: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a137c:
    if (ctx->pc == 0x1A137Cu) {
        ctx->pc = 0x1A137Cu;
            // 0x1a137c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1380u;
        goto label_1a1380;
    }
    ctx->pc = 0x1A1378u;
    {
        const bool branch_taken_0x1a1378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1378) {
            ctx->pc = 0x1A137Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1378u;
            // 0x1a137c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A138Cu;
            goto label_1a138c;
        }
    }
    ctx->pc = 0x1A1380u;
label_1a1380:
    // 0x1a1380: 0x40f809  jalr        $v0
label_1a1384:
    if (ctx->pc == 0x1A1384u) {
        ctx->pc = 0x1A1384u;
            // 0x1a1384: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1388u;
        goto label_1a1388;
    }
    ctx->pc = 0x1A1380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1388u);
        ctx->pc = 0x1A1384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1380u;
            // 0x1a1384: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1388u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1388u; }
            if (ctx->pc != 0x1A1388u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1388u;
label_1a1388:
    // 0x1a1388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a138c:
    // 0x1a138c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a138cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1390:
    // 0x1a1390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1394:
    // 0x1a1394: 0x3e00008  jr          $ra
label_1a1398:
    if (ctx->pc == 0x1A1398u) {
        ctx->pc = 0x1A1398u;
            // 0x1a1398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A139Cu;
        goto label_1a139c;
    }
    ctx->pc = 0x1A1394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1394u;
            // 0x1a1398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A139Cu;
label_1a139c:
    // 0x1a139c: 0x0  nop
    ctx->pc = 0x1a139cu;
    // NOP
}
