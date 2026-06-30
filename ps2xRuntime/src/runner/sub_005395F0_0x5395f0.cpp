#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005395F0
// Address: 0x5395f0 - 0x539830
void sub_005395F0_0x5395f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005395F0_0x5395f0");
#endif

    switch (ctx->pc) {
        case 0x539634u: goto label_539634;
        case 0x539658u: goto label_539658;
        case 0x539664u: goto label_539664;
        case 0x539694u: goto label_539694;
        case 0x539708u: goto label_539708;
        case 0x539714u: goto label_539714;
        case 0x539720u: goto label_539720;
        case 0x539734u: goto label_539734;
        case 0x539770u: goto label_539770;
        case 0x5397a0u: goto label_5397a0;
        default: break;
    }

    ctx->pc = 0x5395f0u;

    // 0x5395f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x5395f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x5395f4: 0x24025555  addiu       $v0, $zero, 0x5555
    ctx->pc = 0x5395f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21845));
    // 0x5395f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x5395f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x5395fc: 0x24053fff  addiu       $a1, $zero, 0x3FFF
    ctx->pc = 0x5395fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x539600: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x539600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x539604: 0x2406071c  addiu       $a2, $zero, 0x71C
    ctx->pc = 0x539604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1820));
    // 0x539608: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x539608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x53960c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x53960cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x539610: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x539610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x539614: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x539614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x539618: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x539618u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x53961c: 0x8c8300f8  lw          $v1, 0xF8($a0)
    ctx->pc = 0x53961cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x539620: 0x8c9000e0  lw          $s0, 0xE0($a0)
    ctx->pc = 0x539620u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x539624: 0x8c920050  lw          $s2, 0x50($a0)
    ctx->pc = 0x539624u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x539628: 0x623818  mult        $a3, $v1, $v0
    ctx->pc = 0x539628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x53962c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x53962Cu;
    SET_GPR_U32(ctx, 31, 0x539634u);
    ctx->pc = 0x539630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53962Cu;
            // 0x539630: 0x266400e8  addiu       $a0, $s3, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539634u; }
        if (ctx->pc != 0x539634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539634u; }
        if (ctx->pc != 0x539634u) { return; }
    }
    ctx->pc = 0x539634u;
label_539634:
    // 0x539634: 0x8e6200f8  lw          $v0, 0xF8($s3)
    ctx->pc = 0x539634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x539638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x539638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x53963c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x53963Cu;
    {
        const bool branch_taken_0x53963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x539640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53963Cu;
            // 0x539640: 0x24030600  addiu       $v1, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53963c) {
            ctx->pc = 0x5396F4u;
            goto label_5396f4;
        }
    }
    ctx->pc = 0x539644u;
    // 0x539644: 0x34710004  ori         $s1, $v1, 0x4
    ctx->pc = 0x539644u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x539648: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x539648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x53964c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x53964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x539650: 0xc04cc90  jal         func_133240
    ctx->pc = 0x539650u;
    SET_GPR_U32(ctx, 31, 0x539658u);
    ctx->pc = 0x539654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539650u;
            // 0x539654: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539658u; }
        if (ctx->pc != 0x539658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539658u; }
        if (ctx->pc != 0x539658u) { return; }
    }
    ctx->pc = 0x539658u;
label_539658:
    // 0x539658: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x539658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x53965c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x53965Cu;
    SET_GPR_U32(ctx, 31, 0x539664u);
    ctx->pc = 0x539660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53965Cu;
            // 0x539660: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539664u; }
        if (ctx->pc != 0x539664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539664u; }
        if (ctx->pc != 0x539664u) { return; }
    }
    ctx->pc = 0x539664u;
label_539664:
    // 0x539664: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x539664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x539668: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x539668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x53966c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53966cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x539670: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x539670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x539674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x539674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x539678: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x539678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x53967c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x53967cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x539680: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x539680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x539684: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x539684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x539688: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x539688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x53968c: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x53968Cu;
    SET_GPR_U32(ctx, 31, 0x539694u);
    ctx->pc = 0x539690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53968Cu;
            // 0x539690: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539694u; }
        if (ctx->pc != 0x539694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539694u; }
        if (ctx->pc != 0x539694u) { return; }
    }
    ctx->pc = 0x539694u;
label_539694:
    // 0x539694: 0x8e6a00a0  lw          $t2, 0xA0($s3)
    ctx->pc = 0x539694u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x539698: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x539698u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x53969c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x53969cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x5396a0: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x5396a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
    // 0x5396a4: 0x3c054416  lui         $a1, 0x4416
    ctx->pc = 0x5396a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17430 << 16));
    // 0x5396a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5396a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5396ac: 0x8d490060  lw          $t1, 0x60($t2)
    ctx->pc = 0x5396acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 96)));
    // 0x5396b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5396b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5396b4: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x5396b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x5396b8: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x5396b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x5396bc: 0xad480060  sw          $t0, 0x60($t2)
    ctx->pc = 0x5396bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 8));
    // 0x5396c0: 0xae67008c  sw          $a3, 0x8C($s3)
    ctx->pc = 0x5396c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 7));
    // 0x5396c4: 0xae660070  sw          $a2, 0x70($s3)
    ctx->pc = 0x5396c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 6));
    // 0x5396c8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x5396c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x5396cc: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x5396ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
    // 0x5396d0: 0xa2640064  sb          $a0, 0x64($s3)
    ctx->pc = 0x5396d0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 4));
    // 0x5396d4: 0xa2640065  sb          $a0, 0x65($s3)
    ctx->pc = 0x5396d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 101), (uint8_t)GPR_U32(ctx, 4));
    // 0x5396d8: 0xa2630066  sb          $v1, 0x66($s3)
    ctx->pc = 0x5396d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 102), (uint8_t)GPR_U32(ctx, 3));
    // 0x5396dc: 0xa2640067  sb          $a0, 0x67($s3)
    ctx->pc = 0x5396dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 103), (uint8_t)GPR_U32(ctx, 4));
    // 0x5396e0: 0xa2600068  sb          $zero, 0x68($s3)
    ctx->pc = 0x5396e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x5396e4: 0xa2640069  sb          $a0, 0x69($s3)
    ctx->pc = 0x5396e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 105), (uint8_t)GPR_U32(ctx, 4));
    // 0x5396e8: 0xa260006a  sb          $zero, 0x6A($s3)
    ctx->pc = 0x5396e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x5396ec: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x5396ECu;
    {
        const bool branch_taken_0x5396ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5396F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5396ECu;
            // 0x5396f0: 0xa264006b  sb          $a0, 0x6B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 107), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5396ec) {
            ctx->pc = 0x5397FCu;
            goto label_5397fc;
        }
    }
    ctx->pc = 0x5396F4u;
label_5396f4:
    // 0x5396f4: 0x34710004  ori         $s1, $v1, 0x4
    ctx->pc = 0x5396f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x5396f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x5396f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x5396fc: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x5396fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x539700: 0xc04cc90  jal         func_133240
    ctx->pc = 0x539700u;
    SET_GPR_U32(ctx, 31, 0x539708u);
    ctx->pc = 0x539704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539700u;
            // 0x539704: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539708u; }
        if (ctx->pc != 0x539708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539708u; }
        if (ctx->pc != 0x539708u) { return; }
    }
    ctx->pc = 0x539708u;
label_539708:
    // 0x539708: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x539708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x53970c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x53970Cu;
    SET_GPR_U32(ctx, 31, 0x539714u);
    ctx->pc = 0x539710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53970Cu;
            // 0x539710: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539714u; }
        if (ctx->pc != 0x539714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539714u; }
        if (ctx->pc != 0x539714u) { return; }
    }
    ctx->pc = 0x539714u;
label_539714:
    // 0x539714: 0x26040470  addiu       $a0, $s0, 0x470
    ctx->pc = 0x539714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1136));
    // 0x539718: 0xc04cc08  jal         func_133020
    ctx->pc = 0x539718u;
    SET_GPR_U32(ctx, 31, 0x539720u);
    ctx->pc = 0x53971Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539718u;
            // 0x53971c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539720u; }
        if (ctx->pc != 0x539720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539720u; }
        if (ctx->pc != 0x539720u) { return; }
    }
    ctx->pc = 0x539720u;
label_539720:
    // 0x539720: 0x3c023f1c  lui         $v0, 0x3F1C
    ctx->pc = 0x539720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16156 << 16));
    // 0x539724: 0x344261aa  ori         $v0, $v0, 0x61AA
    ctx->pc = 0x539724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25002);
    // 0x539728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x539728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x53972c: 0xc047714  jal         func_11DC50
    ctx->pc = 0x53972Cu;
    SET_GPR_U32(ctx, 31, 0x539734u);
    ctx->pc = 0x539730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53972Cu;
            // 0x539730: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539734u; }
        if (ctx->pc != 0x539734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539734u; }
        if (ctx->pc != 0x539734u) { return; }
    }
    ctx->pc = 0x539734u;
label_539734:
    // 0x539734: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x539734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x539738: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x539738u;
    {
        const bool branch_taken_0x539738 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x539738) {
            ctx->pc = 0x53973Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x539738u;
            // 0x53973c: 0x8e44002c  lw          $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x539778u;
            goto label_539778;
        }
    }
    ctx->pc = 0x539740u;
    // 0x539740: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x539740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x539744: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x539744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x539748: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x539748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x53974c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x53974cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x539750: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x539750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x539754: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x539754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x539758: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x539758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x53975c: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x53975cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x539760: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x539760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x539764: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x539764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x539768: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x539768u;
    SET_GPR_U32(ctx, 31, 0x539770u);
    ctx->pc = 0x53976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539768u;
            // 0x53976c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539770u; }
        if (ctx->pc != 0x539770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x539770u; }
        if (ctx->pc != 0x539770u) { return; }
    }
    ctx->pc = 0x539770u;
label_539770:
    // 0x539770: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x539770u;
    {
        const bool branch_taken_0x539770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x539774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539770u;
            // 0x539774: 0x8e6b00a0  lw          $t3, 0xA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x539770) {
            ctx->pc = 0x5397A4u;
            goto label_5397a4;
        }
    }
    ctx->pc = 0x539778u;
label_539778:
    // 0x539778: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x539778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x53977c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53977cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x539780: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x539780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x539784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x539784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x539788: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x539788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x53978c: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x53978cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    // 0x539790: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x539790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x539794: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x539794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x539798: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x539798u;
    SET_GPR_U32(ctx, 31, 0x5397A0u);
    ctx->pc = 0x53979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x539798u;
            // 0x53979c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5397A0u; }
        if (ctx->pc != 0x5397A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5397A0u; }
        if (ctx->pc != 0x5397A0u) { return; }
    }
    ctx->pc = 0x5397A0u;
label_5397a0:
    // 0x5397a0: 0x8e6b00a0  lw          $t3, 0xA0($s3)
    ctx->pc = 0x5397a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
label_5397a4:
    // 0x5397a4: 0x2409fffe  addiu       $t1, $zero, -0x2
    ctx->pc = 0x5397a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x5397a8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x5397a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x5397ac: 0x3c074120  lui         $a3, 0x4120
    ctx->pc = 0x5397acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16672 << 16));
    // 0x5397b0: 0x3c064416  lui         $a2, 0x4416
    ctx->pc = 0x5397b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17430 << 16));
    // 0x5397b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x5397b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5397b8: 0x8d6a0060  lw          $t2, 0x60($t3)
    ctx->pc = 0x5397b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 96)));
    // 0x5397bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x5397bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x5397c0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x5397c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x5397c4: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x5397c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x5397c8: 0xad690060  sw          $t1, 0x60($t3)
    ctx->pc = 0x5397c8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 96), GPR_U32(ctx, 9));
    // 0x5397cc: 0xae68008c  sw          $t0, 0x8C($s3)
    ctx->pc = 0x5397ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 8));
    // 0x5397d0: 0xae670070  sw          $a3, 0x70($s3)
    ctx->pc = 0x5397d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 7));
    // 0x5397d4: 0xae660078  sw          $a2, 0x78($s3)
    ctx->pc = 0x5397d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 6));
    // 0x5397d8: 0xae660080  sw          $a2, 0x80($s3)
    ctx->pc = 0x5397d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 6));
    // 0x5397dc: 0xa2650064  sb          $a1, 0x64($s3)
    ctx->pc = 0x5397dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 5));
    // 0x5397e0: 0xa2650065  sb          $a1, 0x65($s3)
    ctx->pc = 0x5397e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 101), (uint8_t)GPR_U32(ctx, 5));
    // 0x5397e4: 0xa2640066  sb          $a0, 0x66($s3)
    ctx->pc = 0x5397e4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 102), (uint8_t)GPR_U32(ctx, 4));
    // 0x5397e8: 0xa2650067  sb          $a1, 0x67($s3)
    ctx->pc = 0x5397e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 103), (uint8_t)GPR_U32(ctx, 5));
    // 0x5397ec: 0xa2630068  sb          $v1, 0x68($s3)
    ctx->pc = 0x5397ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 3));
    // 0x5397f0: 0xa2600069  sb          $zero, 0x69($s3)
    ctx->pc = 0x5397f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x5397f4: 0xa260006a  sb          $zero, 0x6A($s3)
    ctx->pc = 0x5397f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x5397f8: 0xa265006b  sb          $a1, 0x6B($s3)
    ctx->pc = 0x5397f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 107), (uint8_t)GPR_U32(ctx, 5));
label_5397fc:
    // 0x5397fc: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x5397fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x539800: 0x2201827  not         $v1, $s1
    ctx->pc = 0x539800u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 17) | GPR_U64(ctx, 0)));
    // 0x539804: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x539804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x539808: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x539808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x53980c: 0xae6300b0  sw          $v1, 0xB0($s3)
    ctx->pc = 0x53980cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 3));
    // 0x539810: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x539810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x539814: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x539814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x539818: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x539818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x53981c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x53981cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x539820: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x539820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x539824: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x539824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x539828: 0x3e00008  jr          $ra
    ctx->pc = 0x539828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53982Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x539828u;
            // 0x53982c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x539830u;
}
