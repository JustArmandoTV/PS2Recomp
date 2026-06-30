#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001398E0
// Address: 0x1398e0 - 0x1399e0
void sub_001398E0_0x1398e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001398E0_0x1398e0");
#endif

    switch (ctx->pc) {
        case 0x1398f8u: goto label_1398f8;
        case 0x139900u: goto label_139900;
        case 0x139950u: goto label_139950;
        case 0x139974u: goto label_139974;
        case 0x139998u: goto label_139998;
        case 0x1399acu: goto label_1399ac;
        case 0x1399b8u: goto label_1399b8;
        case 0x1399ccu: goto label_1399cc;
        case 0x1399d4u: goto label_1399d4;
        default: break;
    }

    ctx->pc = 0x1398e0u;

    // 0x1398e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1398e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1398e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1398e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1398e8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1398e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1398ec: 0xc78c8360  lwc1        $f12, -0x7CA0($gp)
    ctx->pc = 0x1398ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1398f0: 0xc057488  jal         func_15D220
    ctx->pc = 0x1398F0u;
    SET_GPR_U32(ctx, 31, 0x1398F8u);
    ctx->pc = 0x1398F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1398F0u;
            // 0x1398f4: 0xaf808154  sw          $zero, -0x7EAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D220u;
    if (runtime->hasFunction(0x15D220u)) {
        auto targetFn = runtime->lookupFunction(0x15D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398F8u; }
        if (ctx->pc != 0x1398F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D220_0x15d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1398F8u; }
        if (ctx->pc != 0x1398F8u) { return; }
    }
    ctx->pc = 0x1398F8u;
label_1398f8:
    // 0x1398f8: 0xc057498  jal         func_15D260
    ctx->pc = 0x1398F8u;
    SET_GPR_U32(ctx, 31, 0x139900u);
    ctx->pc = 0x1398FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1398F8u;
            // 0x1398fc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D260u;
    if (runtime->hasFunction(0x15D260u)) {
        auto targetFn = runtime->lookupFunction(0x15D260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139900u; }
        if (ctx->pc != 0x139900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D260_0x15d260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139900u; }
        if (ctx->pc != 0x139900u) { return; }
    }
    ctx->pc = 0x139900u;
label_139900:
    // 0x139900: 0x9383835d  lbu         $v1, -0x7CA3($gp)
    ctx->pc = 0x139900u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935389)));
    // 0x139904: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x139908: 0x9387835e  lbu         $a3, -0x7CA2($gp)
    ctx->pc = 0x139908u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935390)));
    // 0x13990c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13990cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x139910: 0x8f858154  lw          $a1, -0x7EAC($gp)
    ctx->pc = 0x139910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
    // 0x139914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x139914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x139918: 0x34238  dsll        $t0, $v1, 8
    ctx->pc = 0x139918u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 8);
    // 0x13991c: 0x9389835c  lbu         $t1, -0x7CA4($gp)
    ctx->pc = 0x13991cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935388)));
    // 0x139920: 0x9383835f  lbu         $v1, -0x7CA1($gp)
    ctx->pc = 0x139920u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935391)));
    // 0x139924: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x139924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x139928: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x139928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13992c: 0x24844f80  addiu       $a0, $a0, 0x4F80
    ctx->pc = 0x13992cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    // 0x139930: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x139930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x139934: 0xaf868154  sw          $a2, -0x7EAC($gp)
    ctx->pc = 0x139934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), GPR_U32(ctx, 6));
    // 0x139938: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x139938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x13993c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x13993cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x139940: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x139940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x139944: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x139944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139948: 0xc057540  jal         func_15D500
    ctx->pc = 0x139948u;
    SET_GPR_U32(ctx, 31, 0x139950u);
    ctx->pc = 0x13994Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139948u;
            // 0x13994c: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139950u; }
        if (ctx->pc != 0x139950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139950u; }
        if (ctx->pc != 0x139950u) { return; }
    }
    ctx->pc = 0x139950u;
label_139950:
    // 0x139950: 0x8f858154  lw          $a1, -0x7EAC($gp)
    ctx->pc = 0x139950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
    // 0x139954: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x139954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x139958: 0x3447000d  ori         $a3, $v0, 0xD
    ctx->pc = 0x139958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x13995c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13995cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x139960: 0x24844f80  addiu       $a0, $a0, 0x4F80
    ctx->pc = 0x139960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    // 0x139964: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x139964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x139968: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x139968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13996c: 0xc057540  jal         func_15D500
    ctx->pc = 0x13996Cu;
    SET_GPR_U32(ctx, 31, 0x139974u);
    ctx->pc = 0x139970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13996Cu;
            // 0x139970: 0xaf828154  sw          $v0, -0x7EAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139974u; }
        if (ctx->pc != 0x139974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139974u; }
        if (ctx->pc != 0x139974u) { return; }
    }
    ctx->pc = 0x139974u;
label_139974:
    // 0x139974: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x139974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x139978: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x139978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13997c: 0x8f858154  lw          $a1, -0x7EAC($gp)
    ctx->pc = 0x13997cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
    // 0x139980: 0x24844f80  addiu       $a0, $a0, 0x4F80
    ctx->pc = 0x139980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    // 0x139984: 0xdc472040  ld          $a3, 0x2040($v0)
    ctx->pc = 0x139984u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8256)));
    // 0x139988: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x139988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x13998c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x13998cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x139990: 0xc057540  jal         func_15D500
    ctx->pc = 0x139990u;
    SET_GPR_U32(ctx, 31, 0x139998u);
    ctx->pc = 0x139994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139990u;
            // 0x139994: 0xaf828154  sw          $v0, -0x7EAC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934868), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139998u; }
        if (ctx->pc != 0x139998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139998u; }
        if (ctx->pc != 0x139998u) { return; }
    }
    ctx->pc = 0x139998u;
label_139998:
    // 0x139998: 0x8f868154  lw          $a2, -0x7EAC($gp)
    ctx->pc = 0x139998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934868)));
    // 0x13999c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13999cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1399a0: 0x24844f80  addiu       $a0, $a0, 0x4F80
    ctx->pc = 0x1399a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    // 0x1399a4: 0xc05750c  jal         func_15D430
    ctx->pc = 0x1399A4u;
    SET_GPR_U32(ctx, 31, 0x1399ACu);
    ctx->pc = 0x1399A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1399A4u;
            // 0x1399a8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399ACu; }
        if (ctx->pc != 0x1399ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399ACu; }
        if (ctx->pc != 0x1399ACu) { return; }
    }
    ctx->pc = 0x1399ACu;
label_1399ac:
    // 0x1399ac: 0xaf828150  sw          $v0, -0x7EB0($gp)
    ctx->pc = 0x1399acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934864), GPR_U32(ctx, 2));
    // 0x1399b0: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x1399B0u;
    SET_GPR_U32(ctx, 31, 0x1399B8u);
    ctx->pc = 0x1399B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1399B0u;
            // 0x1399b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399B8u; }
        if (ctx->pc != 0x1399B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399B8u; }
        if (ctx->pc != 0x1399B8u) { return; }
    }
    ctx->pc = 0x1399B8u;
label_1399b8:
    // 0x1399b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1399b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1399bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1399bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1399c0: 0x8c455820  lw          $a1, 0x5820($v0)
    ctx->pc = 0x1399c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22560)));
    // 0x1399c4: 0xc057240  jal         func_15C900
    ctx->pc = 0x1399C4u;
    SET_GPR_U32(ctx, 31, 0x1399CCu);
    ctx->pc = 0x1399C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1399C4u;
            // 0x1399c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C900u;
    if (runtime->hasFunction(0x15C900u)) {
        auto targetFn = runtime->lookupFunction(0x15C900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399CCu; }
        if (ctx->pc != 0x1399CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C900_0x15c900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399CCu; }
        if (ctx->pc != 0x1399CCu) { return; }
    }
    ctx->pc = 0x1399CCu;
label_1399cc:
    // 0x1399cc: 0xc05724c  jal         func_15C930
    ctx->pc = 0x1399CCu;
    SET_GPR_U32(ctx, 31, 0x1399D4u);
    ctx->pc = 0x1399D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1399CCu;
            // 0x1399d0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C930u;
    if (runtime->hasFunction(0x15C930u)) {
        auto targetFn = runtime->lookupFunction(0x15C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399D4u; }
        if (ctx->pc != 0x1399D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C930_0x15c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1399D4u; }
        if (ctx->pc != 0x1399D4u) { return; }
    }
    ctx->pc = 0x1399D4u;
label_1399d4:
    // 0x1399d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1399d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1399d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1399D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1399DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1399D8u;
            // 0x1399dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1399E0u;
}
