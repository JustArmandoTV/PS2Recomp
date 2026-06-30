#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001098D8
// Address: 0x1098d8 - 0x109a48
void sub_001098D8_0x1098d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001098D8_0x1098d8");
#endif

    switch (ctx->pc) {
        case 0x1098d8u: goto label_1098d8;
        case 0x1098dcu: goto label_1098dc;
        case 0x1098e0u: goto label_1098e0;
        case 0x1098e4u: goto label_1098e4;
        case 0x1098e8u: goto label_1098e8;
        case 0x1098ecu: goto label_1098ec;
        case 0x1098f0u: goto label_1098f0;
        case 0x1098f4u: goto label_1098f4;
        case 0x1098f8u: goto label_1098f8;
        case 0x1098fcu: goto label_1098fc;
        case 0x109900u: goto label_109900;
        case 0x109904u: goto label_109904;
        case 0x109908u: goto label_109908;
        case 0x10990cu: goto label_10990c;
        case 0x109910u: goto label_109910;
        case 0x109914u: goto label_109914;
        case 0x109918u: goto label_109918;
        case 0x10991cu: goto label_10991c;
        case 0x109920u: goto label_109920;
        case 0x109924u: goto label_109924;
        case 0x109928u: goto label_109928;
        case 0x10992cu: goto label_10992c;
        case 0x109930u: goto label_109930;
        case 0x109934u: goto label_109934;
        case 0x109938u: goto label_109938;
        case 0x10993cu: goto label_10993c;
        case 0x109940u: goto label_109940;
        case 0x109944u: goto label_109944;
        case 0x109948u: goto label_109948;
        case 0x10994cu: goto label_10994c;
        case 0x109950u: goto label_109950;
        case 0x109954u: goto label_109954;
        case 0x109958u: goto label_109958;
        case 0x10995cu: goto label_10995c;
        case 0x109960u: goto label_109960;
        case 0x109964u: goto label_109964;
        case 0x109968u: goto label_109968;
        case 0x10996cu: goto label_10996c;
        case 0x109970u: goto label_109970;
        case 0x109974u: goto label_109974;
        case 0x109978u: goto label_109978;
        case 0x10997cu: goto label_10997c;
        case 0x109980u: goto label_109980;
        case 0x109984u: goto label_109984;
        case 0x109988u: goto label_109988;
        case 0x10998cu: goto label_10998c;
        case 0x109990u: goto label_109990;
        case 0x109994u: goto label_109994;
        case 0x109998u: goto label_109998;
        case 0x10999cu: goto label_10999c;
        case 0x1099a0u: goto label_1099a0;
        case 0x1099a4u: goto label_1099a4;
        case 0x1099a8u: goto label_1099a8;
        case 0x1099acu: goto label_1099ac;
        case 0x1099b0u: goto label_1099b0;
        case 0x1099b4u: goto label_1099b4;
        case 0x1099b8u: goto label_1099b8;
        case 0x1099bcu: goto label_1099bc;
        case 0x1099c0u: goto label_1099c0;
        case 0x1099c4u: goto label_1099c4;
        case 0x1099c8u: goto label_1099c8;
        case 0x1099ccu: goto label_1099cc;
        case 0x1099d0u: goto label_1099d0;
        case 0x1099d4u: goto label_1099d4;
        case 0x1099d8u: goto label_1099d8;
        case 0x1099dcu: goto label_1099dc;
        case 0x1099e0u: goto label_1099e0;
        case 0x1099e4u: goto label_1099e4;
        case 0x1099e8u: goto label_1099e8;
        case 0x1099ecu: goto label_1099ec;
        case 0x1099f0u: goto label_1099f0;
        case 0x1099f4u: goto label_1099f4;
        case 0x1099f8u: goto label_1099f8;
        case 0x1099fcu: goto label_1099fc;
        case 0x109a00u: goto label_109a00;
        case 0x109a04u: goto label_109a04;
        case 0x109a08u: goto label_109a08;
        case 0x109a0cu: goto label_109a0c;
        case 0x109a10u: goto label_109a10;
        case 0x109a14u: goto label_109a14;
        case 0x109a18u: goto label_109a18;
        case 0x109a1cu: goto label_109a1c;
        case 0x109a20u: goto label_109a20;
        case 0x109a24u: goto label_109a24;
        case 0x109a28u: goto label_109a28;
        case 0x109a2cu: goto label_109a2c;
        case 0x109a30u: goto label_109a30;
        case 0x109a34u: goto label_109a34;
        case 0x109a38u: goto label_109a38;
        case 0x109a3cu: goto label_109a3c;
        case 0x109a40u: goto label_109a40;
        case 0x109a44u: goto label_109a44;
        default: break;
    }

    ctx->pc = 0x1098d8u;

label_1098d8:
    // 0x1098d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1098d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1098dc:
    // 0x1098dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1098dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1098e0:
    // 0x1098e0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1098e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1098e4:
    // 0x1098e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1098e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1098e8:
    // 0x1098e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1098e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1098ec:
    // 0x1098ec: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1098ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1098f0:
    // 0x1098f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1098f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1098f4:
    // 0x1098f4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1098f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1098f8:
    // 0x1098f8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1098f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1098fc:
    // 0x1098fc: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_109900:
    if (ctx->pc == 0x109900u) {
        ctx->pc = 0x109900u;
            // 0x109900: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->pc = 0x109904u;
        goto label_109904;
    }
    ctx->pc = 0x1098FCu;
    {
        const bool branch_taken_0x1098fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x109900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1098FCu;
            // 0x109900: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1098fc) {
            ctx->pc = 0x109910u;
            goto label_109910;
        }
    }
    ctx->pc = 0x109904u;
label_109904:
    // 0x109904: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x109904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_109908:
    // 0x109908: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10990c:
    if (ctx->pc == 0x10990Cu) {
        ctx->pc = 0x10990Cu;
            // 0x10990c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109910u;
        goto label_109910;
    }
    ctx->pc = 0x109908u;
    {
        const bool branch_taken_0x109908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109908u;
            // 0x10990c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109908) {
            ctx->pc = 0x10994Cu;
            goto label_10994c;
        }
    }
    ctx->pc = 0x109910u;
label_109910:
    // 0x109910: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x109910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_109914:
    // 0x109914: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_109918:
    if (ctx->pc == 0x109918u) {
        ctx->pc = 0x109918u;
            // 0x109918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10991Cu;
        goto label_10991c;
    }
    ctx->pc = 0x109914u;
    {
        const bool branch_taken_0x109914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109914u;
            // 0x109918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109914) {
            ctx->pc = 0x109928u;
            goto label_109928;
        }
    }
    ctx->pc = 0x10991Cu;
label_10991c:
    // 0x10991c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x10991cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_109920:
    // 0x109920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109924:
    // 0x109924: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x109924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_109928:
    // 0x109928: 0xc042588  jal         func_109620
label_10992c:
    if (ctx->pc == 0x10992Cu) {
        ctx->pc = 0x10992Cu;
            // 0x10992c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109930u;
        goto label_109930;
    }
    ctx->pc = 0x109928u;
    SET_GPR_U32(ctx, 31, 0x109930u);
    ctx->pc = 0x10992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109928u;
            // 0x10992c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109620u;
    if (runtime->hasFunction(0x109620u)) {
        auto targetFn = runtime->lookupFunction(0x109620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109930u; }
        if (ctx->pc != 0x109930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109620_0x109620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109930u; }
        if (ctx->pc != 0x109930u) { return; }
    }
    ctx->pc = 0x109930u;
label_109930:
    // 0x109930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_109934:
    if (ctx->pc == 0x109934u) {
        ctx->pc = 0x109934u;
            // 0x109934: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109938u;
        goto label_109938;
    }
    ctx->pc = 0x109930u;
    {
        const bool branch_taken_0x109930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109930u;
            // 0x109934: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109930) {
            ctx->pc = 0x109944u;
            goto label_109944;
        }
    }
    ctx->pc = 0x109938u;
label_109938:
    // 0x109938: 0xc042862  jal         func_10A188
label_10993c:
    if (ctx->pc == 0x10993Cu) {
        ctx->pc = 0x10993Cu;
            // 0x10993c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109940u;
        goto label_109940;
    }
    ctx->pc = 0x109938u;
    SET_GPR_U32(ctx, 31, 0x109940u);
    ctx->pc = 0x10993Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109938u;
            // 0x10993c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A188u;
    if (runtime->hasFunction(0x10A188u)) {
        auto targetFn = runtime->lookupFunction(0x10A188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109940u; }
        if (ctx->pc != 0x109940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A188_0x10a188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109940u; }
        if (ctx->pc != 0x109940u) { return; }
    }
    ctx->pc = 0x109940u;
label_109940:
    // 0x109940: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x109940u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_109944:
    // 0x109944: 0x1000001b  b           . + 4 + (0x1B << 2)
label_109948:
    if (ctx->pc == 0x109948u) {
        ctx->pc = 0x109948u;
            // 0x109948: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10994Cu;
        goto label_10994c;
    }
    ctx->pc = 0x109944u;
    {
        const bool branch_taken_0x109944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109944u;
            // 0x109948: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109944) {
            ctx->pc = 0x1099B4u;
            goto label_1099b4;
        }
    }
    ctx->pc = 0x10994Cu;
label_10994c:
    // 0x10994c: 0xc042588  jal         func_109620
label_109950:
    if (ctx->pc == 0x109950u) {
        ctx->pc = 0x109950u;
            // 0x109950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109954u;
        goto label_109954;
    }
    ctx->pc = 0x10994Cu;
    SET_GPR_U32(ctx, 31, 0x109954u);
    ctx->pc = 0x109950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10994Cu;
            // 0x109950: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109620u;
    if (runtime->hasFunction(0x109620u)) {
        auto targetFn = runtime->lookupFunction(0x109620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109954u; }
        if (ctx->pc != 0x109954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109620_0x109620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109954u; }
        if (ctx->pc != 0x109954u) { return; }
    }
    ctx->pc = 0x109954u;
label_109954:
    // 0x109954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109958:
    // 0x109958: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x109958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10995c:
    // 0x10995c: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_109960:
    if (ctx->pc == 0x109960u) {
        ctx->pc = 0x109960u;
            // 0x109960: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x109964u;
        goto label_109964;
    }
    ctx->pc = 0x10995Cu;
    {
        const bool branch_taken_0x10995c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x109960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10995Cu;
            // 0x109960: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10995c) {
            ctx->pc = 0x1099B0u;
            goto label_1099b0;
        }
    }
    ctx->pc = 0x109964u;
label_109964:
    // 0x109964: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x109964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_109968:
    // 0x109968: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_10996c:
    if (ctx->pc == 0x10996Cu) {
        ctx->pc = 0x10996Cu;
            // 0x10996c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x109970u;
        goto label_109970;
    }
    ctx->pc = 0x109968u;
    {
        const bool branch_taken_0x109968 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10996Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109968u;
            // 0x10996c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109968) {
            ctx->pc = 0x1099B4u;
            goto label_1099b4;
        }
    }
    ctx->pc = 0x109970u;
label_109970:
    // 0x109970: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x109970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_109974:
    // 0x109974: 0x50e00010  beql        $a3, $zero, . + 4 + (0x10 << 2)
label_109978:
    if (ctx->pc == 0x109978u) {
        ctx->pc = 0x109978u;
            // 0x109978: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->pc = 0x10997Cu;
        goto label_10997c;
    }
    ctx->pc = 0x109974u;
    {
        const bool branch_taken_0x109974 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x109974) {
            ctx->pc = 0x109978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x109974u;
            // 0x109978: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1099B8u;
            goto label_1099b8;
        }
    }
    ctx->pc = 0x10997Cu;
label_10997c:
    // 0x10997c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x10997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_109980:
    // 0x109980: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x109980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_109984:
    // 0x109984: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x109984u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109988:
    // 0x109988: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x109988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10998c:
    // 0x10998c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_109990:
    // 0x109990: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x109990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_109994:
    // 0x109994: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x109994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_109998:
    // 0x109998: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x109998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_10999c:
    // 0x10999c: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x10999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_1099a0:
    // 0x1099a0: 0xe0f809  jalr        $a3
label_1099a4:
    if (ctx->pc == 0x1099A4u) {
        ctx->pc = 0x1099A4u;
            // 0x1099a4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x1099A8u;
        goto label_1099a8;
    }
    ctx->pc = 0x1099A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1099A8u);
        ctx->pc = 0x1099A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1099A0u;
            // 0x1099a4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1099A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1099A8u; }
            if (ctx->pc != 0x1099A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1099A8u;
label_1099a8:
    // 0x1099a8: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x1099a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1099ac:
    // 0x1099ac: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x1099acu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1099b0:
    // 0x1099b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1099b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1099b4:
    // 0x1099b4: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x1099b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_1099b8:
    // 0x1099b8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1099bc:
    if (ctx->pc == 0x1099BCu) {
        ctx->pc = 0x1099BCu;
            // 0x1099bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1099C0u;
        goto label_1099c0;
    }
    ctx->pc = 0x1099B8u;
    {
        const bool branch_taken_0x1099b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1099BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1099B8u;
            // 0x1099bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099b8) {
            ctx->pc = 0x109A2Cu;
            goto label_109a2c;
        }
    }
    ctx->pc = 0x1099C0u;
label_1099c0:
    // 0x1099c0: 0x8e250128  lw          $a1, 0x128($s1)
    ctx->pc = 0x1099c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_1099c4:
    // 0x1099c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1099c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1099c8:
    // 0x1099c8: 0xc042b66  jal         func_10AD98
label_1099cc:
    if (ctx->pc == 0x1099CCu) {
        ctx->pc = 0x1099CCu;
            // 0x1099cc: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1099D0u;
        goto label_1099d0;
    }
    ctx->pc = 0x1099C8u;
    SET_GPR_U32(ctx, 31, 0x1099D0u);
    ctx->pc = 0x1099CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1099C8u;
            // 0x1099cc: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AD98u;
    if (runtime->hasFunction(0x10AD98u)) {
        auto targetFn = runtime->lookupFunction(0x10AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1099D0u; }
        if (ctx->pc != 0x1099D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AD98_0x10ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1099D0u; }
        if (ctx->pc != 0x1099D0u) { return; }
    }
    ctx->pc = 0x1099D0u;
label_1099d0:
    // 0x1099d0: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x1099d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
label_1099d4:
    // 0x1099d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1099d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1099d8:
    // 0x1099d8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1099dc:
    if (ctx->pc == 0x1099DCu) {
        ctx->pc = 0x1099DCu;
            // 0x1099dc: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->pc = 0x1099E0u;
        goto label_1099e0;
    }
    ctx->pc = 0x1099D8u;
    {
        const bool branch_taken_0x1099d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1099d8) {
            ctx->pc = 0x1099DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1099D8u;
            // 0x1099dc: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1099F8u;
            goto label_1099f8;
        }
    }
    ctx->pc = 0x1099E0u;
label_1099e0:
    // 0x1099e0: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1099e4:
    if (ctx->pc == 0x1099E4u) {
        ctx->pc = 0x1099E4u;
            // 0x1099e4: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->pc = 0x1099E8u;
        goto label_1099e8;
    }
    ctx->pc = 0x1099E0u;
    {
        const bool branch_taken_0x1099e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1099e0) {
            ctx->pc = 0x1099E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1099E0u;
            // 0x1099e4: 0x8e2300c0  lw          $v1, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1099F8u;
            goto label_1099f8;
        }
    }
    ctx->pc = 0x1099E8u;
label_1099e8:
    // 0x1099e8: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x1099e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_1099ec:
    // 0x1099ec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1099ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1099f0:
    // 0x1099f0: 0xae220130  sw          $v0, 0x130($s1)
    ctx->pc = 0x1099f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
label_1099f4:
    // 0x1099f4: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x1099f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1099f8:
    // 0x1099f8: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x1099f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_1099fc:
    // 0x1099fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1099fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_109a00:
    // 0x109a00: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x109a00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_109a04:
    // 0x109a04: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x109a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
label_109a08:
    // 0x109a08: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_109a0c:
    if (ctx->pc == 0x109A0Cu) {
        ctx->pc = 0x109A0Cu;
            // 0x109a0c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x109A10u;
        goto label_109a10;
    }
    ctx->pc = 0x109A08u;
    {
        const bool branch_taken_0x109a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x109A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A08u;
            // 0x109a0c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a08) {
            ctx->pc = 0x109A2Cu;
            goto label_109a2c;
        }
    }
    ctx->pc = 0x109A10u;
label_109a10:
    // 0x109a10: 0x8e220128  lw          $v0, 0x128($s1)
    ctx->pc = 0x109a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_109a14:
    // 0x109a14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x109a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_109a18:
    // 0x109a18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x109a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_109a1c:
    // 0x109a1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x109a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_109a20:
    // 0x109a20: 0xae220128  sw          $v0, 0x128($s1)
    ctx->pc = 0x109a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 2));
label_109a24:
    // 0x109a24: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x109a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_109a28:
    // 0x109a28: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x109a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_109a2c:
    // 0x109a2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x109a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_109a30:
    // 0x109a30: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x109a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_109a34:
    // 0x109a34: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x109a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_109a38:
    // 0x109a38: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x109a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_109a3c:
    // 0x109a3c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x109a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_109a40:
    // 0x109a40: 0x3e00008  jr          $ra
label_109a44:
    if (ctx->pc == 0x109A44u) {
        ctx->pc = 0x109A44u;
            // 0x109a44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x109A48u;
        goto label_fallthrough_0x109a40;
    }
    ctx->pc = 0x109A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109A40u;
            // 0x109a44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x109a40:
    ctx->pc = 0x109A48u;
}
