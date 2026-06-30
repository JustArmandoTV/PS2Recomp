#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1278
// Address: 0x1a1278 - 0x1a1340
void sub_001A1278_0x1a1278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1278_0x1a1278");
#endif

    switch (ctx->pc) {
        case 0x1a1278u: goto label_1a1278;
        case 0x1a127cu: goto label_1a127c;
        case 0x1a1280u: goto label_1a1280;
        case 0x1a1284u: goto label_1a1284;
        case 0x1a1288u: goto label_1a1288;
        case 0x1a128cu: goto label_1a128c;
        case 0x1a1290u: goto label_1a1290;
        case 0x1a1294u: goto label_1a1294;
        case 0x1a1298u: goto label_1a1298;
        case 0x1a129cu: goto label_1a129c;
        case 0x1a12a0u: goto label_1a12a0;
        case 0x1a12a4u: goto label_1a12a4;
        case 0x1a12a8u: goto label_1a12a8;
        case 0x1a12acu: goto label_1a12ac;
        case 0x1a12b0u: goto label_1a12b0;
        case 0x1a12b4u: goto label_1a12b4;
        case 0x1a12b8u: goto label_1a12b8;
        case 0x1a12bcu: goto label_1a12bc;
        case 0x1a12c0u: goto label_1a12c0;
        case 0x1a12c4u: goto label_1a12c4;
        case 0x1a12c8u: goto label_1a12c8;
        case 0x1a12ccu: goto label_1a12cc;
        case 0x1a12d0u: goto label_1a12d0;
        case 0x1a12d4u: goto label_1a12d4;
        case 0x1a12d8u: goto label_1a12d8;
        case 0x1a12dcu: goto label_1a12dc;
        case 0x1a12e0u: goto label_1a12e0;
        case 0x1a12e4u: goto label_1a12e4;
        case 0x1a12e8u: goto label_1a12e8;
        case 0x1a12ecu: goto label_1a12ec;
        case 0x1a12f0u: goto label_1a12f0;
        case 0x1a12f4u: goto label_1a12f4;
        case 0x1a12f8u: goto label_1a12f8;
        case 0x1a12fcu: goto label_1a12fc;
        case 0x1a1300u: goto label_1a1300;
        case 0x1a1304u: goto label_1a1304;
        case 0x1a1308u: goto label_1a1308;
        case 0x1a130cu: goto label_1a130c;
        case 0x1a1310u: goto label_1a1310;
        case 0x1a1314u: goto label_1a1314;
        case 0x1a1318u: goto label_1a1318;
        case 0x1a131cu: goto label_1a131c;
        case 0x1a1320u: goto label_1a1320;
        case 0x1a1324u: goto label_1a1324;
        case 0x1a1328u: goto label_1a1328;
        case 0x1a132cu: goto label_1a132c;
        case 0x1a1330u: goto label_1a1330;
        case 0x1a1334u: goto label_1a1334;
        case 0x1a1338u: goto label_1a1338;
        case 0x1a133cu: goto label_1a133c;
        default: break;
    }

    ctx->pc = 0x1a1278u;

label_1a1278:
    // 0x1a1278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a127c:
    // 0x1a127c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a127cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1280:
    // 0x1a1280: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a1280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a1284:
    // 0x1a1284: 0xc0685d4  jal         func_1A1750
label_1a1288:
    if (ctx->pc == 0x1A1288u) {
        ctx->pc = 0x1A1288u;
            // 0x1a1288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A128Cu;
        goto label_1a128c;
    }
    ctx->pc = 0x1A1284u;
    SET_GPR_U32(ctx, 31, 0x1A128Cu);
    ctx->pc = 0x1A1288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1284u;
            // 0x1a1288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (runtime->hasFunction(0x1A1750u)) {
        auto targetFn = runtime->lookupFunction(0x1A1750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A128Cu; }
        if (ctx->pc != 0x1A128Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1750_0x1a1750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A128Cu; }
        if (ctx->pc != 0x1A128Cu) { return; }
    }
    ctx->pc = 0x1A128Cu;
label_1a128c:
    // 0x1a128c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1290:
    // 0x1a1290: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1a1294:
    if (ctx->pc == 0x1A1294u) {
        ctx->pc = 0x1A1294u;
            // 0x1a1294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1298u;
        goto label_1a1298;
    }
    ctx->pc = 0x1A1290u;
    {
        const bool branch_taken_0x1a1290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1290u;
            // 0x1a1294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1290) {
            ctx->pc = 0x1A12A0u;
            goto label_1a12a0;
        }
    }
    ctx->pc = 0x1A1298u;
label_1a1298:
    // 0x1a1298: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a129c:
    if (ctx->pc == 0x1A129Cu) {
        ctx->pc = 0x1A129Cu;
            // 0x1a129c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A12A0u;
        goto label_1a12a0;
    }
    ctx->pc = 0x1A1298u;
    {
        const bool branch_taken_0x1a1298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A129Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1298u;
            // 0x1a129c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1298) {
            ctx->pc = 0x1A12C8u;
            goto label_1a12c8;
        }
    }
    ctx->pc = 0x1A12A0u;
label_1a12a0:
    // 0x1a12a0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a12a4:
    // 0x1a12a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a12a8:
    if (ctx->pc == 0x1A12A8u) {
        ctx->pc = 0x1A12A8u;
            // 0x1a12a8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x1A12ACu;
        goto label_1a12ac;
    }
    ctx->pc = 0x1A12A4u;
    {
        const bool branch_taken_0x1a12a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12A4u;
            // 0x1a12a8: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12a4) {
            ctx->pc = 0x1A12C4u;
            goto label_1a12c4;
        }
    }
    ctx->pc = 0x1A12ACu;
label_1a12ac:
    // 0x1a12ac: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1a12acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1a12b0:
    // 0x1a12b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a12b4:
    if (ctx->pc == 0x1A12B4u) {
        ctx->pc = 0x1A12B4u;
            // 0x1a12b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A12B8u;
        goto label_1a12b8;
    }
    ctx->pc = 0x1A12B0u;
    {
        const bool branch_taken_0x1a12b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12b0) {
            ctx->pc = 0x1A12B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12B0u;
            // 0x1a12b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A12C8u;
            goto label_1a12c8;
        }
    }
    ctx->pc = 0x1A12B8u;
label_1a12b8:
    // 0x1a12b8: 0x40f809  jalr        $v0
label_1a12bc:
    if (ctx->pc == 0x1A12BCu) {
        ctx->pc = 0x1A12C0u;
        goto label_1a12c0;
    }
    ctx->pc = 0x1A12B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A12C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A12C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A12C0u; }
            if (ctx->pc != 0x1A12C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1A12C0u;
label_1a12c0:
    // 0x1a12c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a12c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a12c4:
    // 0x1a12c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a12c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a12c8:
    // 0x1a12c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a12c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a12cc:
    // 0x1a12cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a12ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a12d0:
    // 0x1a12d0: 0x3e00008  jr          $ra
label_1a12d4:
    if (ctx->pc == 0x1A12D4u) {
        ctx->pc = 0x1A12D4u;
            // 0x1a12d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1A12D8u;
        goto label_1a12d8;
    }
    ctx->pc = 0x1A12D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A12D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12D0u;
            // 0x1a12d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A12D8u;
label_1a12d8:
    // 0x1a12d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a12d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a12dc:
    // 0x1a12dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a12dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a12e0:
    // 0x1a12e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a12e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a12e4:
    // 0x1a12e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a12e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a12e8:
    // 0x1a12e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a12e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a12ec:
    // 0x1a12ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a12ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a12f0:
    // 0x1a12f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a12f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a12f4:
    // 0x1a12f4: 0xc0685d4  jal         func_1A1750
label_1a12f8:
    if (ctx->pc == 0x1A12F8u) {
        ctx->pc = 0x1A12F8u;
            // 0x1a12f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A12FCu;
        goto label_1a12fc;
    }
    ctx->pc = 0x1A12F4u;
    SET_GPR_U32(ctx, 31, 0x1A12FCu);
    ctx->pc = 0x1A12F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A12F4u;
            // 0x1a12f8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    if (runtime->hasFunction(0x1A1750u)) {
        auto targetFn = runtime->lookupFunction(0x1A1750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12FCu; }
        if (ctx->pc != 0x1A12FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1750_0x1a1750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A12FCu; }
        if (ctx->pc != 0x1A12FCu) { return; }
    }
    ctx->pc = 0x1A12FCu;
label_1a12fc:
    // 0x1a12fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a12fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1300:
    // 0x1a1300: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_1a1304:
    if (ctx->pc == 0x1A1304u) {
        ctx->pc = 0x1A1304u;
            // 0x1a1304: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A1308u;
        goto label_1a1308;
    }
    ctx->pc = 0x1A1300u;
    {
        const bool branch_taken_0x1a1300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1300) {
            ctx->pc = 0x1A1304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1300u;
            // 0x1a1304: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A132Cu;
            goto label_1a132c;
        }
    }
    ctx->pc = 0x1A1308u;
label_1a1308:
    // 0x1a1308: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a1308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a130c:
    // 0x1a130c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a1310:
    if (ctx->pc == 0x1A1310u) {
        ctx->pc = 0x1A1310u;
            // 0x1a1310: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x1A1314u;
        goto label_1a1314;
    }
    ctx->pc = 0x1A130Cu;
    {
        const bool branch_taken_0x1a130c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A130Cu;
            // 0x1a1310: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a130c) {
            ctx->pc = 0x1A1328u;
            goto label_1a1328;
        }
    }
    ctx->pc = 0x1A1314u;
label_1a1314:
    // 0x1a1314: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1a1318:
    // 0x1a1318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a131c:
    if (ctx->pc == 0x1A131Cu) {
        ctx->pc = 0x1A131Cu;
            // 0x1a131c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1320u;
        goto label_1a1320;
    }
    ctx->pc = 0x1A1318u;
    {
        const bool branch_taken_0x1a1318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A131Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1318u;
            // 0x1a131c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1318) {
            ctx->pc = 0x1A1328u;
            goto label_1a1328;
        }
    }
    ctx->pc = 0x1A1320u;
label_1a1320:
    // 0x1a1320: 0x40f809  jalr        $v0
label_1a1324:
    if (ctx->pc == 0x1A1324u) {
        ctx->pc = 0x1A1324u;
            // 0x1a1324: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A1328u;
        goto label_1a1328;
    }
    ctx->pc = 0x1A1320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1328u);
        ctx->pc = 0x1A1324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1320u;
            // 0x1a1324: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1328u; }
            if (ctx->pc != 0x1A1328u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1328u;
label_1a1328:
    // 0x1a1328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a132c:
    // 0x1a132c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a132cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a1330:
    // 0x1a1330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a1330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1334:
    // 0x1a1334: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a1334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a1338:
    // 0x1a1338: 0x3e00008  jr          $ra
label_1a133c:
    if (ctx->pc == 0x1A133Cu) {
        ctx->pc = 0x1A133Cu;
            // 0x1a133c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1A1340u;
        goto label_fallthrough_0x1a1338;
    }
    ctx->pc = 0x1A1338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1338u;
            // 0x1a133c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a1338:
    ctx->pc = 0x1A1340u;
}
