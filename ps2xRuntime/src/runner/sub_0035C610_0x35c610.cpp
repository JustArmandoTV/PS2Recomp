#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035C610
// Address: 0x35c610 - 0x35c7e0
void sub_0035C610_0x35c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C610_0x35c610");
#endif

    switch (ctx->pc) {
        case 0x35c610u: goto label_35c610;
        case 0x35c614u: goto label_35c614;
        case 0x35c618u: goto label_35c618;
        case 0x35c61cu: goto label_35c61c;
        case 0x35c620u: goto label_35c620;
        case 0x35c624u: goto label_35c624;
        case 0x35c628u: goto label_35c628;
        case 0x35c62cu: goto label_35c62c;
        case 0x35c630u: goto label_35c630;
        case 0x35c634u: goto label_35c634;
        case 0x35c638u: goto label_35c638;
        case 0x35c63cu: goto label_35c63c;
        case 0x35c640u: goto label_35c640;
        case 0x35c644u: goto label_35c644;
        case 0x35c648u: goto label_35c648;
        case 0x35c64cu: goto label_35c64c;
        case 0x35c650u: goto label_35c650;
        case 0x35c654u: goto label_35c654;
        case 0x35c658u: goto label_35c658;
        case 0x35c65cu: goto label_35c65c;
        case 0x35c660u: goto label_35c660;
        case 0x35c664u: goto label_35c664;
        case 0x35c668u: goto label_35c668;
        case 0x35c66cu: goto label_35c66c;
        case 0x35c670u: goto label_35c670;
        case 0x35c674u: goto label_35c674;
        case 0x35c678u: goto label_35c678;
        case 0x35c67cu: goto label_35c67c;
        case 0x35c680u: goto label_35c680;
        case 0x35c684u: goto label_35c684;
        case 0x35c688u: goto label_35c688;
        case 0x35c68cu: goto label_35c68c;
        case 0x35c690u: goto label_35c690;
        case 0x35c694u: goto label_35c694;
        case 0x35c698u: goto label_35c698;
        case 0x35c69cu: goto label_35c69c;
        case 0x35c6a0u: goto label_35c6a0;
        case 0x35c6a4u: goto label_35c6a4;
        case 0x35c6a8u: goto label_35c6a8;
        case 0x35c6acu: goto label_35c6ac;
        case 0x35c6b0u: goto label_35c6b0;
        case 0x35c6b4u: goto label_35c6b4;
        case 0x35c6b8u: goto label_35c6b8;
        case 0x35c6bcu: goto label_35c6bc;
        case 0x35c6c0u: goto label_35c6c0;
        case 0x35c6c4u: goto label_35c6c4;
        case 0x35c6c8u: goto label_35c6c8;
        case 0x35c6ccu: goto label_35c6cc;
        case 0x35c6d0u: goto label_35c6d0;
        case 0x35c6d4u: goto label_35c6d4;
        case 0x35c6d8u: goto label_35c6d8;
        case 0x35c6dcu: goto label_35c6dc;
        case 0x35c6e0u: goto label_35c6e0;
        case 0x35c6e4u: goto label_35c6e4;
        case 0x35c6e8u: goto label_35c6e8;
        case 0x35c6ecu: goto label_35c6ec;
        case 0x35c6f0u: goto label_35c6f0;
        case 0x35c6f4u: goto label_35c6f4;
        case 0x35c6f8u: goto label_35c6f8;
        case 0x35c6fcu: goto label_35c6fc;
        case 0x35c700u: goto label_35c700;
        case 0x35c704u: goto label_35c704;
        case 0x35c708u: goto label_35c708;
        case 0x35c70cu: goto label_35c70c;
        case 0x35c710u: goto label_35c710;
        case 0x35c714u: goto label_35c714;
        case 0x35c718u: goto label_35c718;
        case 0x35c71cu: goto label_35c71c;
        case 0x35c720u: goto label_35c720;
        case 0x35c724u: goto label_35c724;
        case 0x35c728u: goto label_35c728;
        case 0x35c72cu: goto label_35c72c;
        case 0x35c730u: goto label_35c730;
        case 0x35c734u: goto label_35c734;
        case 0x35c738u: goto label_35c738;
        case 0x35c73cu: goto label_35c73c;
        case 0x35c740u: goto label_35c740;
        case 0x35c744u: goto label_35c744;
        case 0x35c748u: goto label_35c748;
        case 0x35c74cu: goto label_35c74c;
        case 0x35c750u: goto label_35c750;
        case 0x35c754u: goto label_35c754;
        case 0x35c758u: goto label_35c758;
        case 0x35c75cu: goto label_35c75c;
        case 0x35c760u: goto label_35c760;
        case 0x35c764u: goto label_35c764;
        case 0x35c768u: goto label_35c768;
        case 0x35c76cu: goto label_35c76c;
        case 0x35c770u: goto label_35c770;
        case 0x35c774u: goto label_35c774;
        case 0x35c778u: goto label_35c778;
        case 0x35c77cu: goto label_35c77c;
        case 0x35c780u: goto label_35c780;
        case 0x35c784u: goto label_35c784;
        case 0x35c788u: goto label_35c788;
        case 0x35c78cu: goto label_35c78c;
        case 0x35c790u: goto label_35c790;
        case 0x35c794u: goto label_35c794;
        case 0x35c798u: goto label_35c798;
        case 0x35c79cu: goto label_35c79c;
        case 0x35c7a0u: goto label_35c7a0;
        case 0x35c7a4u: goto label_35c7a4;
        case 0x35c7a8u: goto label_35c7a8;
        case 0x35c7acu: goto label_35c7ac;
        case 0x35c7b0u: goto label_35c7b0;
        case 0x35c7b4u: goto label_35c7b4;
        case 0x35c7b8u: goto label_35c7b8;
        case 0x35c7bcu: goto label_35c7bc;
        case 0x35c7c0u: goto label_35c7c0;
        case 0x35c7c4u: goto label_35c7c4;
        case 0x35c7c8u: goto label_35c7c8;
        case 0x35c7ccu: goto label_35c7cc;
        case 0x35c7d0u: goto label_35c7d0;
        case 0x35c7d4u: goto label_35c7d4;
        case 0x35c7d8u: goto label_35c7d8;
        case 0x35c7dcu: goto label_35c7dc;
        default: break;
    }

    ctx->pc = 0x35c610u;

label_35c610:
    // 0x35c610: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x35c610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_35c614:
    // 0x35c614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35c618:
    // 0x35c618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c61c:
    // 0x35c61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c620:
    // 0x35c620: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35c620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35c624:
    // 0x35c624: 0xc04f278  jal         func_13C9E0
label_35c628:
    if (ctx->pc == 0x35C628u) {
        ctx->pc = 0x35C628u;
            // 0x35c628: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x35C62Cu;
        goto label_35c62c;
    }
    ctx->pc = 0x35C624u;
    SET_GPR_U32(ctx, 31, 0x35C62Cu);
    ctx->pc = 0x35C628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C624u;
            // 0x35c628: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C62Cu; }
        if (ctx->pc != 0x35C62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C62Cu; }
        if (ctx->pc != 0x35C62Cu) { return; }
    }
    ctx->pc = 0x35C62Cu;
label_35c62c:
    // 0x35c62c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x35c62cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_35c630:
    // 0x35c630: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x35c630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_35c634:
    // 0x35c634: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x35c634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_35c638:
    // 0x35c638: 0xc04cca0  jal         func_133280
label_35c63c:
    if (ctx->pc == 0x35C63Cu) {
        ctx->pc = 0x35C63Cu;
            // 0x35c63c: 0x24c64550  addiu       $a2, $a2, 0x4550 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17744));
        ctx->pc = 0x35C640u;
        goto label_35c640;
    }
    ctx->pc = 0x35C638u;
    SET_GPR_U32(ctx, 31, 0x35C640u);
    ctx->pc = 0x35C63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C638u;
            // 0x35c63c: 0x24c64550  addiu       $a2, $a2, 0x4550 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C640u; }
        if (ctx->pc != 0x35C640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C640u; }
        if (ctx->pc != 0x35C640u) { return; }
    }
    ctx->pc = 0x35C640u;
label_35c640:
    // 0x35c640: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x35c640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_35c644:
    // 0x35c644: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x35c644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_35c648:
    // 0x35c648: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x35c648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_35c64c:
    // 0x35c64c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x35c64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_35c650:
    // 0x35c650: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35c650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35c654:
    // 0x35c654: 0xc04cc7c  jal         func_1331F0
label_35c658:
    if (ctx->pc == 0x35C658u) {
        ctx->pc = 0x35C658u;
            // 0x35c658: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C65Cu;
        goto label_35c65c;
    }
    ctx->pc = 0x35C654u;
    SET_GPR_U32(ctx, 31, 0x35C65Cu);
    ctx->pc = 0x35C658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C654u;
            // 0x35c658: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C65Cu; }
        if (ctx->pc != 0x35C65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C65Cu; }
        if (ctx->pc != 0x35C65Cu) { return; }
    }
    ctx->pc = 0x35C65Cu;
label_35c65c:
    // 0x35c65c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x35c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35c660:
    // 0x35c660: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x35c660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_35c664:
    // 0x35c664: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x35c664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35c668:
    // 0x35c668: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35c668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_35c66c:
    // 0x35c66c: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x35c66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35c670:
    // 0x35c670: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x35c670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_35c674:
    // 0x35c674: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x35c674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_35c678:
    // 0x35c678: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x35c678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_35c67c:
    // 0x35c67c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x35c67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_35c680:
    // 0x35c680: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x35c680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35c684:
    // 0x35c684: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x35c684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_35c688:
    // 0x35c688: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x35c688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_35c68c:
    // 0x35c68c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x35c68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35c690:
    // 0x35c690: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x35c690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_35c694:
    // 0x35c694: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x35c694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_35c698:
    // 0x35c698: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x35c698u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_35c69c:
    // 0x35c69c: 0xc0a3830  jal         func_28E0C0
label_35c6a0:
    if (ctx->pc == 0x35C6A0u) {
        ctx->pc = 0x35C6A0u;
            // 0x35c6a0: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x35C6A4u;
        goto label_35c6a4;
    }
    ctx->pc = 0x35C69Cu;
    SET_GPR_U32(ctx, 31, 0x35C6A4u);
    ctx->pc = 0x35C6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C69Cu;
            // 0x35c6a0: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C6A4u; }
        if (ctx->pc != 0x35C6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C6A4u; }
        if (ctx->pc != 0x35C6A4u) { return; }
    }
    ctx->pc = 0x35C6A4u;
label_35c6a4:
    // 0x35c6a4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x35c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_35c6a8:
    // 0x35c6a8: 0xc08af10  jal         func_22BC40
label_35c6ac:
    if (ctx->pc == 0x35C6ACu) {
        ctx->pc = 0x35C6ACu;
            // 0x35c6ac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35C6B0u;
        goto label_35c6b0;
    }
    ctx->pc = 0x35C6A8u;
    SET_GPR_U32(ctx, 31, 0x35C6B0u);
    ctx->pc = 0x35C6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C6A8u;
            // 0x35c6ac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C6B0u; }
        if (ctx->pc != 0x35C6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C6B0u; }
        if (ctx->pc != 0x35C6B0u) { return; }
    }
    ctx->pc = 0x35C6B0u;
label_35c6b0:
    // 0x35c6b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35c6b4:
    // 0x35c6b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c6b8:
    // 0x35c6b8: 0x3e00008  jr          $ra
label_35c6bc:
    if (ctx->pc == 0x35C6BCu) {
        ctx->pc = 0x35C6BCu;
            // 0x35c6bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x35C6C0u;
        goto label_35c6c0;
    }
    ctx->pc = 0x35C6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C6B8u;
            // 0x35c6bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C6C0u;
label_35c6c0:
    // 0x35c6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35c6c4:
    // 0x35c6c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35c6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_35c6c8:
    // 0x35c6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c6cc:
    // 0x35c6cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c6d0:
    // 0x35c6d0: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x35c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_35c6d4:
    // 0x35c6d4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_35c6d8:
    if (ctx->pc == 0x35C6D8u) {
        ctx->pc = 0x35C6D8u;
            // 0x35c6d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x35C6DCu;
        goto label_35c6dc;
    }
    ctx->pc = 0x35C6D4u;
    {
        const bool branch_taken_0x35c6d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c6d4) {
            ctx->pc = 0x35C6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35C6D4u;
            // 0x35c6d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35C6FCu;
            goto label_35c6fc;
        }
    }
    ctx->pc = 0x35C6DCu;
label_35c6dc:
    // 0x35c6dc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_35c6e0:
    if (ctx->pc == 0x35C6E0u) {
        ctx->pc = 0x35C6E0u;
            // 0x35c6e0: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x35C6E4u;
        goto label_35c6e4;
    }
    ctx->pc = 0x35C6DCu;
    {
        const bool branch_taken_0x35c6dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c6dc) {
            ctx->pc = 0x35C6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35C6DCu;
            // 0x35c6e0: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35C6F8u;
            goto label_35c6f8;
        }
    }
    ctx->pc = 0x35C6E4u;
label_35c6e4:
    // 0x35c6e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x35c6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_35c6e8:
    // 0x35c6e8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x35c6e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_35c6ec:
    // 0x35c6ec: 0x320f809  jalr        $t9
label_35c6f0:
    if (ctx->pc == 0x35C6F0u) {
        ctx->pc = 0x35C6F0u;
            // 0x35c6f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35C6F4u;
        goto label_35c6f4;
    }
    ctx->pc = 0x35C6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35C6F4u);
        ctx->pc = 0x35C6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C6ECu;
            // 0x35c6f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35C6F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35C6F4u; }
            if (ctx->pc != 0x35C6F4u) { return; }
        }
        }
    }
    ctx->pc = 0x35C6F4u;
label_35c6f4:
    // 0x35c6f4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x35c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_35c6f8:
    // 0x35c6f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35c6fc:
    // 0x35c6fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c700:
    // 0x35c700: 0x3e00008  jr          $ra
label_35c704:
    if (ctx->pc == 0x35C704u) {
        ctx->pc = 0x35C704u;
            // 0x35c704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35C708u;
        goto label_35c708;
    }
    ctx->pc = 0x35C700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C700u;
            // 0x35c704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C708u;
label_35c708:
    // 0x35c708: 0x0  nop
    ctx->pc = 0x35c708u;
    // NOP
label_35c70c:
    // 0x35c70c: 0x0  nop
    ctx->pc = 0x35c70cu;
    // NOP
label_35c710:
    // 0x35c710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_35c714:
    // 0x35c714: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35c714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35c718:
    // 0x35c718: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35c718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35c71c:
    // 0x35c71c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x35c71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_35c720:
    // 0x35c720: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35c724:
    // 0x35c724: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35c728:
    // 0x35c728: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35c72c:
    // 0x35c72c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x35c72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_35c730:
    // 0x35c730: 0xc0a7a88  jal         func_29EA20
label_35c734:
    if (ctx->pc == 0x35C734u) {
        ctx->pc = 0x35C734u;
            // 0x35c734: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x35C738u;
        goto label_35c738;
    }
    ctx->pc = 0x35C730u;
    SET_GPR_U32(ctx, 31, 0x35C738u);
    ctx->pc = 0x35C734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C730u;
            // 0x35c734: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C738u; }
        if (ctx->pc != 0x35C738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C738u; }
        if (ctx->pc != 0x35C738u) { return; }
    }
    ctx->pc = 0x35C738u;
label_35c738:
    // 0x35c738: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x35c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_35c73c:
    // 0x35c73c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35c73cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35c740:
    // 0x35c740: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_35c744:
    if (ctx->pc == 0x35C744u) {
        ctx->pc = 0x35C744u;
            // 0x35c744: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x35C748u;
        goto label_35c748;
    }
    ctx->pc = 0x35C740u;
    {
        const bool branch_taken_0x35c740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C740u;
            // 0x35c744: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c740) {
            ctx->pc = 0x35C788u;
            goto label_35c788;
        }
    }
    ctx->pc = 0x35C748u;
label_35c748:
    // 0x35c748: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x35c748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_35c74c:
    // 0x35c74c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x35c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35c750:
    // 0x35c750: 0x8c420e48  lw          $v0, 0xE48($v0)
    ctx->pc = 0x35c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3656)));
label_35c754:
    // 0x35c754: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x35c754u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_35c758:
    // 0x35c758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35c75c:
    // 0x35c75c: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x35c75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_35c760:
    // 0x35c760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35c760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_35c764:
    // 0x35c764: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_35c768:
    // 0x35c768: 0x8c456ad8  lw          $a1, 0x6AD8($v0)
    ctx->pc = 0x35c768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27352)));
label_35c76c:
    // 0x35c76c: 0xc08afe0  jal         func_22BF80
label_35c770:
    if (ctx->pc == 0x35C770u) {
        ctx->pc = 0x35C770u;
            // 0x35c770: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x35C774u;
        goto label_35c774;
    }
    ctx->pc = 0x35C76Cu;
    SET_GPR_U32(ctx, 31, 0x35C774u);
    ctx->pc = 0x35C770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C76Cu;
            // 0x35c770: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C774u; }
        if (ctx->pc != 0x35C774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C774u; }
        if (ctx->pc != 0x35C774u) { return; }
    }
    ctx->pc = 0x35C774u;
label_35c774:
    // 0x35c774: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x35c774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35c778:
    // 0x35c778: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x35c778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_35c77c:
    // 0x35c77c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x35c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_35c780:
    // 0x35c780: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x35c780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_35c784:
    // 0x35c784: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x35c784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_35c788:
    // 0x35c788: 0xae300060  sw          $s0, 0x60($s1)
    ctx->pc = 0x35c788u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 16));
label_35c78c:
    // 0x35c78c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35c790:
    // 0x35c790: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35c794:
    // 0x35c794: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35c798:
    // 0x35c798: 0xc08c798  jal         func_231E60
label_35c79c:
    if (ctx->pc == 0x35C79Cu) {
        ctx->pc = 0x35C79Cu;
            // 0x35c79c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C7A0u;
        goto label_35c7a0;
    }
    ctx->pc = 0x35C798u;
    SET_GPR_U32(ctx, 31, 0x35C7A0u);
    ctx->pc = 0x35C79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C798u;
            // 0x35c79c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C7A0u; }
        if (ctx->pc != 0x35C7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C7A0u; }
        if (ctx->pc != 0x35C7A0u) { return; }
    }
    ctx->pc = 0x35C7A0u;
label_35c7a0:
    // 0x35c7a0: 0xc0d7184  jal         func_35C610
label_35c7a4:
    if (ctx->pc == 0x35C7A4u) {
        ctx->pc = 0x35C7A4u;
            // 0x35c7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C7A8u;
        goto label_35c7a8;
    }
    ctx->pc = 0x35C7A0u;
    SET_GPR_U32(ctx, 31, 0x35C7A8u);
    ctx->pc = 0x35C7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C7A0u;
            // 0x35c7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35C610u;
    goto label_35c610;
    ctx->pc = 0x35C7A8u;
label_35c7a8:
    // 0x35c7a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35c7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35c7ac:
    // 0x35c7ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35c7b0:
    // 0x35c7b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c7b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35c7b4:
    // 0x35c7b4: 0x3e00008  jr          $ra
label_35c7b8:
    if (ctx->pc == 0x35C7B8u) {
        ctx->pc = 0x35C7B8u;
            // 0x35c7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x35C7BCu;
        goto label_35c7bc;
    }
    ctx->pc = 0x35C7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C7B4u;
            // 0x35c7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C7BCu;
label_35c7bc:
    // 0x35c7bc: 0x0  nop
    ctx->pc = 0x35c7bcu;
    // NOP
label_35c7c0:
    // 0x35c7c0: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x35c7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_35c7c4:
    // 0x35c7c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35c7c8:
    // 0x35c7c8: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x35c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_35c7cc:
    // 0x35c7cc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_35c7d0:
    // 0x35c7d0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35c7d4:
    // 0x35c7d4: 0x808bf20  j           func_22FC80
label_35c7d8:
    if (ctx->pc == 0x35C7D8u) {
        ctx->pc = 0x35C7D8u;
            // 0x35c7d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35C7DCu;
        goto label_35c7dc;
    }
    ctx->pc = 0x35C7D4u;
    ctx->pc = 0x35C7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C7D4u;
            // 0x35c7d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022FC80_0x22fc80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x35C7DCu;
label_35c7dc:
    // 0x35c7dc: 0x0  nop
    ctx->pc = 0x35c7dcu;
    // NOP
}
