#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00230590
// Address: 0x230590 - 0x230730
void sub_00230590_0x230590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230590_0x230590");
#endif

    switch (ctx->pc) {
        case 0x230590u: goto label_230590;
        case 0x230594u: goto label_230594;
        case 0x230598u: goto label_230598;
        case 0x23059cu: goto label_23059c;
        case 0x2305a0u: goto label_2305a0;
        case 0x2305a4u: goto label_2305a4;
        case 0x2305a8u: goto label_2305a8;
        case 0x2305acu: goto label_2305ac;
        case 0x2305b0u: goto label_2305b0;
        case 0x2305b4u: goto label_2305b4;
        case 0x2305b8u: goto label_2305b8;
        case 0x2305bcu: goto label_2305bc;
        case 0x2305c0u: goto label_2305c0;
        case 0x2305c4u: goto label_2305c4;
        case 0x2305c8u: goto label_2305c8;
        case 0x2305ccu: goto label_2305cc;
        case 0x2305d0u: goto label_2305d0;
        case 0x2305d4u: goto label_2305d4;
        case 0x2305d8u: goto label_2305d8;
        case 0x2305dcu: goto label_2305dc;
        case 0x2305e0u: goto label_2305e0;
        case 0x2305e4u: goto label_2305e4;
        case 0x2305e8u: goto label_2305e8;
        case 0x2305ecu: goto label_2305ec;
        case 0x2305f0u: goto label_2305f0;
        case 0x2305f4u: goto label_2305f4;
        case 0x2305f8u: goto label_2305f8;
        case 0x2305fcu: goto label_2305fc;
        case 0x230600u: goto label_230600;
        case 0x230604u: goto label_230604;
        case 0x230608u: goto label_230608;
        case 0x23060cu: goto label_23060c;
        case 0x230610u: goto label_230610;
        case 0x230614u: goto label_230614;
        case 0x230618u: goto label_230618;
        case 0x23061cu: goto label_23061c;
        case 0x230620u: goto label_230620;
        case 0x230624u: goto label_230624;
        case 0x230628u: goto label_230628;
        case 0x23062cu: goto label_23062c;
        case 0x230630u: goto label_230630;
        case 0x230634u: goto label_230634;
        case 0x230638u: goto label_230638;
        case 0x23063cu: goto label_23063c;
        case 0x230640u: goto label_230640;
        case 0x230644u: goto label_230644;
        case 0x230648u: goto label_230648;
        case 0x23064cu: goto label_23064c;
        case 0x230650u: goto label_230650;
        case 0x230654u: goto label_230654;
        case 0x230658u: goto label_230658;
        case 0x23065cu: goto label_23065c;
        case 0x230660u: goto label_230660;
        case 0x230664u: goto label_230664;
        case 0x230668u: goto label_230668;
        case 0x23066cu: goto label_23066c;
        case 0x230670u: goto label_230670;
        case 0x230674u: goto label_230674;
        case 0x230678u: goto label_230678;
        case 0x23067cu: goto label_23067c;
        case 0x230680u: goto label_230680;
        case 0x230684u: goto label_230684;
        case 0x230688u: goto label_230688;
        case 0x23068cu: goto label_23068c;
        case 0x230690u: goto label_230690;
        case 0x230694u: goto label_230694;
        case 0x230698u: goto label_230698;
        case 0x23069cu: goto label_23069c;
        case 0x2306a0u: goto label_2306a0;
        case 0x2306a4u: goto label_2306a4;
        case 0x2306a8u: goto label_2306a8;
        case 0x2306acu: goto label_2306ac;
        case 0x2306b0u: goto label_2306b0;
        case 0x2306b4u: goto label_2306b4;
        case 0x2306b8u: goto label_2306b8;
        case 0x2306bcu: goto label_2306bc;
        case 0x2306c0u: goto label_2306c0;
        case 0x2306c4u: goto label_2306c4;
        case 0x2306c8u: goto label_2306c8;
        case 0x2306ccu: goto label_2306cc;
        case 0x2306d0u: goto label_2306d0;
        case 0x2306d4u: goto label_2306d4;
        case 0x2306d8u: goto label_2306d8;
        case 0x2306dcu: goto label_2306dc;
        case 0x2306e0u: goto label_2306e0;
        case 0x2306e4u: goto label_2306e4;
        case 0x2306e8u: goto label_2306e8;
        case 0x2306ecu: goto label_2306ec;
        case 0x2306f0u: goto label_2306f0;
        case 0x2306f4u: goto label_2306f4;
        case 0x2306f8u: goto label_2306f8;
        case 0x2306fcu: goto label_2306fc;
        case 0x230700u: goto label_230700;
        case 0x230704u: goto label_230704;
        case 0x230708u: goto label_230708;
        case 0x23070cu: goto label_23070c;
        case 0x230710u: goto label_230710;
        case 0x230714u: goto label_230714;
        case 0x230718u: goto label_230718;
        case 0x23071cu: goto label_23071c;
        case 0x230720u: goto label_230720;
        case 0x230724u: goto label_230724;
        case 0x230728u: goto label_230728;
        case 0x23072cu: goto label_23072c;
        default: break;
    }

    ctx->pc = 0x230590u;

label_230590:
    // 0x230590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x230590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_230594:
    // 0x230594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x230594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_230598:
    // 0x230598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x230598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23059c:
    // 0x23059c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23059cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2305a0:
    // 0x2305a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2305a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2305a4:
    // 0x2305a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2305a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2305a8:
    // 0x2305a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2305a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2305ac:
    // 0x2305ac: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2305acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_2305b0:
    // 0x2305b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2305b4:
    if (ctx->pc == 0x2305B4u) {
        ctx->pc = 0x2305B4u;
            // 0x2305b4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2305B8u;
        goto label_2305b8;
    }
    ctx->pc = 0x2305B0u;
    {
        const bool branch_taken_0x2305b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2305B0u;
            // 0x2305b4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305b0) {
            ctx->pc = 0x2305D8u;
            goto label_2305d8;
        }
    }
    ctx->pc = 0x2305B8u;
label_2305b8:
    // 0x2305b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2305b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2305bc:
    // 0x2305bc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2305bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2305c0:
    // 0x2305c0: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x2305c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
label_2305c4:
    // 0x2305c4: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x2305c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
label_2305c8:
    // 0x2305c8: 0xc08d1cc  jal         func_234730
label_2305cc:
    if (ctx->pc == 0x2305CCu) {
        ctx->pc = 0x2305CCu;
            // 0x2305cc: 0xafb00048  sw          $s0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
        ctx->pc = 0x2305D0u;
        goto label_2305d0;
    }
    ctx->pc = 0x2305C8u;
    SET_GPR_U32(ctx, 31, 0x2305D0u);
    ctx->pc = 0x2305CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2305C8u;
            // 0x2305cc: 0xafb00048  sw          $s0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2305D0u; }
        if (ctx->pc != 0x2305D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2305D0u; }
        if (ctx->pc != 0x2305D0u) { return; }
    }
    ctx->pc = 0x2305D0u;
label_2305d0:
    // 0x2305d0: 0x10000050  b           . + 4 + (0x50 << 2)
label_2305d4:
    if (ctx->pc == 0x2305D4u) {
        ctx->pc = 0x2305D4u;
            // 0x2305d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2305D8u;
        goto label_2305d8;
    }
    ctx->pc = 0x2305D0u;
    {
        const bool branch_taken_0x2305d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2305D0u;
            // 0x2305d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305d0) {
            ctx->pc = 0x230714u;
            goto label_230714;
        }
    }
    ctx->pc = 0x2305D8u;
label_2305d8:
    // 0x2305d8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2305d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2305dc:
    // 0x2305dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2305e0:
    if (ctx->pc == 0x2305E0u) {
        ctx->pc = 0x2305E4u;
        goto label_2305e4;
    }
    ctx->pc = 0x2305DCu;
    {
        const bool branch_taken_0x2305dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2305dc) {
            ctx->pc = 0x2305F8u;
            goto label_2305f8;
        }
    }
    ctx->pc = 0x2305E4u;
label_2305e4:
    // 0x2305e4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2305e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2305e8:
    // 0x2305e8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2305e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2305ec:
    // 0x2305ec: 0x320f809  jalr        $t9
label_2305f0:
    if (ctx->pc == 0x2305F0u) {
        ctx->pc = 0x2305F0u;
            // 0x2305f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2305F4u;
        goto label_2305f4;
    }
    ctx->pc = 0x2305ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2305F4u);
        ctx->pc = 0x2305F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2305ECu;
            // 0x2305f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2305F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2305F4u; }
            if (ctx->pc != 0x2305F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2305F4u;
label_2305f4:
    // 0x2305f4: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2305f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_2305f8:
    // 0x2305f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2305f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2305fc:
    // 0x2305fc: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x2305fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_230600:
    // 0x230600: 0xc0a43d8  jal         func_290F60
label_230604:
    if (ctx->pc == 0x230604u) {
        ctx->pc = 0x230604u;
            // 0x230604: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x230608u;
        goto label_230608;
    }
    ctx->pc = 0x230600u;
    SET_GPR_U32(ctx, 31, 0x230608u);
    ctx->pc = 0x230604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230600u;
            // 0x230604: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x290F60u;
    if (runtime->hasFunction(0x290F60u)) {
        auto targetFn = runtime->lookupFunction(0x290F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230608u; }
        if (ctx->pc != 0x230608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00290F60_0x290f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230608u; }
        if (ctx->pc != 0x230608u) { return; }
    }
    ctx->pc = 0x230608u;
label_230608:
    // 0x230608: 0xa62000aa  sh          $zero, 0xAA($s1)
    ctx->pc = 0x230608u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 170), (uint16_t)GPR_U32(ctx, 0));
label_23060c:
    // 0x23060c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23060cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230610:
    // 0x230610: 0xa62000ac  sh          $zero, 0xAC($s1)
    ctx->pc = 0x230610u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 172), (uint16_t)GPR_U32(ctx, 0));
label_230614:
    // 0x230614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230618:
    // 0x230618: 0xa242008d  sb          $v0, 0x8D($s2)
    ctx->pc = 0x230618u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 141), (uint8_t)GPR_U32(ctx, 2));
label_23061c:
    // 0x23061c: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x23061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_230620:
    // 0x230620: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x230620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_230624:
    // 0x230624: 0xae4200e8  sw          $v0, 0xE8($s2)
    ctx->pc = 0x230624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 2));
label_230628:
    // 0x230628: 0xc08d40c  jal         func_235030
label_23062c:
    if (ctx->pc == 0x23062Cu) {
        ctx->pc = 0x23062Cu;
            // 0x23062c: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->pc = 0x230630u;
        goto label_230630;
    }
    ctx->pc = 0x230628u;
    SET_GPR_U32(ctx, 31, 0x230630u);
    ctx->pc = 0x23062Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230628u;
            // 0x23062c: 0xae22009c  sw          $v0, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (runtime->hasFunction(0x235030u)) {
        auto targetFn = runtime->lookupFunction(0x235030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230630u; }
        if (ctx->pc != 0x230630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235030_0x235030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230630u; }
        if (ctx->pc != 0x230630u) { return; }
    }
    ctx->pc = 0x230630u;
label_230630:
    // 0x230630: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x230630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_230634:
    // 0x230634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_230638:
    // 0x230638: 0xc08f7e4  jal         func_23DF90
label_23063c:
    if (ctx->pc == 0x23063Cu) {
        ctx->pc = 0x23063Cu;
            // 0x23063c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230640u;
        goto label_230640;
    }
    ctx->pc = 0x230638u;
    SET_GPR_U32(ctx, 31, 0x230640u);
    ctx->pc = 0x23063Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230638u;
            // 0x23063c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DF90u;
    if (runtime->hasFunction(0x23DF90u)) {
        auto targetFn = runtime->lookupFunction(0x23DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230640u; }
        if (ctx->pc != 0x230640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DF90_0x23df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230640u; }
        if (ctx->pc != 0x230640u) { return; }
    }
    ctx->pc = 0x230640u;
label_230640:
    // 0x230640: 0x924802ef  lbu         $t0, 0x2EF($s2)
    ctx->pc = 0x230640u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 751)));
label_230644:
    // 0x230644: 0x922400a9  lbu         $a0, 0xA9($s1)
    ctx->pc = 0x230644u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 169)));
label_230648:
    // 0x230648: 0x924702ee  lbu         $a3, 0x2EE($s2)
    ctx->pc = 0x230648u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 750)));
label_23064c:
    // 0x23064c: 0x924502ed  lbu         $a1, 0x2ED($s2)
    ctx->pc = 0x23064cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 749)));
label_230650:
    // 0x230650: 0x31030003  andi        $v1, $t0, 0x3
    ctx->pc = 0x230650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_230654:
    // 0x230654: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x230654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_230658:
    // 0x230658: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x230658u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23065c:
    // 0x23065c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_230660:
    if (ctx->pc == 0x230660u) {
        ctx->pc = 0x230660u;
            // 0x230660: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x230664u;
        goto label_230664;
    }
    ctx->pc = 0x23065Cu;
    {
        const bool branch_taken_0x23065c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x230660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23065Cu;
            // 0x230660: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23065c) {
            ctx->pc = 0x230670u;
            goto label_230670;
        }
    }
    ctx->pc = 0x230664u;
label_230664:
    // 0x230664: 0xa01027  not         $v0, $a1
    ctx->pc = 0x230664u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_230668:
    // 0x230668: 0x10000002  b           . + 4 + (0x2 << 2)
label_23066c:
    if (ctx->pc == 0x23066Cu) {
        ctx->pc = 0x23066Cu;
            // 0x23066c: 0x24b80  sll         $t1, $v0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
        ctx->pc = 0x230670u;
        goto label_230670;
    }
    ctx->pc = 0x230668u;
    {
        const bool branch_taken_0x230668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23066Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230668u;
            // 0x23066c: 0x24b80  sll         $t1, $v0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230668) {
            ctx->pc = 0x230674u;
            goto label_230674;
        }
    }
    ctx->pc = 0x230670u;
label_230670:
    // 0x230670: 0x54b80  sll         $t1, $a1, 14
    ctx->pc = 0x230670u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
label_230674:
    // 0x230674: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x230674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_230678:
    // 0x230678: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x230678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23067c:
    // 0x23067c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_230680:
    if (ctx->pc == 0x230680u) {
        ctx->pc = 0x230680u;
            // 0x230680: 0x73b80  sll         $a3, $a3, 14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
        ctx->pc = 0x230684u;
        goto label_230684;
    }
    ctx->pc = 0x23067Cu;
    {
        const bool branch_taken_0x23067c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23067c) {
            ctx->pc = 0x230680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23067Cu;
            // 0x230680: 0x73b80  sll         $a3, $a3, 14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23068Cu;
            goto label_23068c;
        }
    }
    ctx->pc = 0x230684u;
label_230684:
    // 0x230684: 0xe01027  not         $v0, $a3
    ctx->pc = 0x230684u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
label_230688:
    // 0x230688: 0x23b80  sll         $a3, $v0, 14
    ctx->pc = 0x230688u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
label_23068c:
    // 0x23068c: 0x94c3000a  lhu         $v1, 0xA($a2)
    ctx->pc = 0x23068cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_230690:
    // 0x230690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230694:
    // 0x230694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_230698:
    // 0x230698: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23069c:
    // 0x23069c: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x23069cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_2306a0:
    // 0x2306a0: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x2306a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
label_2306a4:
    // 0x2306a4: 0xa4c3000a  sh          $v1, 0xA($a2)
    ctx->pc = 0x2306a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 3));
label_2306a8:
    // 0x2306a8: 0x94c3000c  lhu         $v1, 0xC($a2)
    ctx->pc = 0x2306a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
label_2306ac:
    // 0x2306ac: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x2306acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_2306b0:
    // 0x2306b0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2306b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_2306b4:
    // 0x2306b4: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x2306b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
label_2306b8:
    // 0x2306b8: 0xa242008d  sb          $v0, 0x8D($s2)
    ctx->pc = 0x2306b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 141), (uint8_t)GPR_U32(ctx, 2));
label_2306bc:
    // 0x2306bc: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x2306bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2306c0:
    // 0x2306c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2306c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2306c4:
    // 0x2306c4: 0xc08f724  jal         func_23DC90
label_2306c8:
    if (ctx->pc == 0x2306C8u) {
        ctx->pc = 0x2306C8u;
            // 0x2306c8: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x2306CCu;
        goto label_2306cc;
    }
    ctx->pc = 0x2306C4u;
    SET_GPR_U32(ctx, 31, 0x2306CCu);
    ctx->pc = 0x2306C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2306C4u;
            // 0x2306c8: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23DC90u;
    if (runtime->hasFunction(0x23DC90u)) {
        auto targetFn = runtime->lookupFunction(0x23DC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306CCu; }
        if (ctx->pc != 0x2306CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023DC90_0x23dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306CCu; }
        if (ctx->pc != 0x2306CCu) { return; }
    }
    ctx->pc = 0x2306CCu;
label_2306cc:
    // 0x2306cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2306ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2306d0:
    // 0x2306d0: 0xc08e414  jal         func_239050
label_2306d4:
    if (ctx->pc == 0x2306D4u) {
        ctx->pc = 0x2306D4u;
            // 0x2306d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2306D8u;
        goto label_2306d8;
    }
    ctx->pc = 0x2306D0u;
    SET_GPR_U32(ctx, 31, 0x2306D8u);
    ctx->pc = 0x2306D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2306D0u;
            // 0x2306d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239050u;
    if (runtime->hasFunction(0x239050u)) {
        auto targetFn = runtime->lookupFunction(0x239050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306D8u; }
        if (ctx->pc != 0x2306D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239050_0x239050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306D8u; }
        if (ctx->pc != 0x2306D8u) { return; }
    }
    ctx->pc = 0x2306D8u;
label_2306d8:
    // 0x2306d8: 0xc0893fc  jal         func_224FF0
label_2306dc:
    if (ctx->pc == 0x2306DCu) {
        ctx->pc = 0x2306DCu;
            // 0x2306dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2306E0u;
        goto label_2306e0;
    }
    ctx->pc = 0x2306D8u;
    SET_GPR_U32(ctx, 31, 0x2306E0u);
    ctx->pc = 0x2306DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2306D8u;
            // 0x2306dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224FF0u;
    if (runtime->hasFunction(0x224FF0u)) {
        auto targetFn = runtime->lookupFunction(0x224FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306E0u; }
        if (ctx->pc != 0x2306E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224FF0_0x224ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2306E0u; }
        if (ctx->pc != 0x2306E0u) { return; }
    }
    ctx->pc = 0x2306E0u;
label_2306e0:
    // 0x2306e0: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x2306e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2306e4:
    // 0x2306e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2306e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2306e8:
    // 0x2306e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2306ec:
    if (ctx->pc == 0x2306ECu) {
        ctx->pc = 0x2306ECu;
            // 0x2306ec: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x2306F0u;
        goto label_2306f0;
    }
    ctx->pc = 0x2306E8u;
    {
        const bool branch_taken_0x2306e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2306ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2306E8u;
            // 0x2306ec: 0xae420084  sw          $v0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306e8) {
            ctx->pc = 0x230710u;
            goto label_230710;
        }
    }
    ctx->pc = 0x2306F0u;
label_2306f0:
    // 0x2306f0: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2306f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2306f4:
    // 0x2306f4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2306f8:
    if (ctx->pc == 0x2306F8u) {
        ctx->pc = 0x2306F8u;
            // 0x2306f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2306FCu;
        goto label_2306fc;
    }
    ctx->pc = 0x2306F4u;
    {
        const bool branch_taken_0x2306f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2306f4) {
            ctx->pc = 0x2306F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2306F4u;
            // 0x2306f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230714u;
            goto label_230714;
        }
    }
    ctx->pc = 0x2306FCu;
label_2306fc:
    // 0x2306fc: 0x8242008c  lb          $v0, 0x8C($s2)
    ctx->pc = 0x2306fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_230700:
    // 0x230700: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_230704:
    if (ctx->pc == 0x230704u) {
        ctx->pc = 0x230708u;
        goto label_230708;
    }
    ctx->pc = 0x230700u;
    {
        const bool branch_taken_0x230700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230700) {
            ctx->pc = 0x230710u;
            goto label_230710;
        }
    }
    ctx->pc = 0x230708u;
label_230708:
    // 0x230708: 0xc08d1c4  jal         func_234710
label_23070c:
    if (ctx->pc == 0x23070Cu) {
        ctx->pc = 0x23070Cu;
            // 0x23070c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230710u;
        goto label_230710;
    }
    ctx->pc = 0x230708u;
    SET_GPR_U32(ctx, 31, 0x230710u);
    ctx->pc = 0x23070Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230708u;
            // 0x23070c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230710u; }
        if (ctx->pc != 0x230710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230710u; }
        if (ctx->pc != 0x230710u) { return; }
    }
    ctx->pc = 0x230710u;
label_230710:
    // 0x230710: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x230710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230714:
    // 0x230714: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x230714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_230718:
    // 0x230718: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x230718u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23071c:
    // 0x23071c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23071cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_230720:
    // 0x230720: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x230720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_230724:
    // 0x230724: 0x3e00008  jr          $ra
label_230728:
    if (ctx->pc == 0x230728u) {
        ctx->pc = 0x230728u;
            // 0x230728: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23072Cu;
        goto label_23072c;
    }
    ctx->pc = 0x230724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230724u;
            // 0x230728: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23072Cu;
label_23072c:
    // 0x23072c: 0x0  nop
    ctx->pc = 0x23072cu;
    // NOP
}
