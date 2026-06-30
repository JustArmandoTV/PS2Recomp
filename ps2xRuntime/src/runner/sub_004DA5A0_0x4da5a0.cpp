#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DA5A0
// Address: 0x4da5a0 - 0x4da7a0
void sub_004DA5A0_0x4da5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DA5A0_0x4da5a0");
#endif

    switch (ctx->pc) {
        case 0x4da5a0u: goto label_4da5a0;
        case 0x4da5a4u: goto label_4da5a4;
        case 0x4da5a8u: goto label_4da5a8;
        case 0x4da5acu: goto label_4da5ac;
        case 0x4da5b0u: goto label_4da5b0;
        case 0x4da5b4u: goto label_4da5b4;
        case 0x4da5b8u: goto label_4da5b8;
        case 0x4da5bcu: goto label_4da5bc;
        case 0x4da5c0u: goto label_4da5c0;
        case 0x4da5c4u: goto label_4da5c4;
        case 0x4da5c8u: goto label_4da5c8;
        case 0x4da5ccu: goto label_4da5cc;
        case 0x4da5d0u: goto label_4da5d0;
        case 0x4da5d4u: goto label_4da5d4;
        case 0x4da5d8u: goto label_4da5d8;
        case 0x4da5dcu: goto label_4da5dc;
        case 0x4da5e0u: goto label_4da5e0;
        case 0x4da5e4u: goto label_4da5e4;
        case 0x4da5e8u: goto label_4da5e8;
        case 0x4da5ecu: goto label_4da5ec;
        case 0x4da5f0u: goto label_4da5f0;
        case 0x4da5f4u: goto label_4da5f4;
        case 0x4da5f8u: goto label_4da5f8;
        case 0x4da5fcu: goto label_4da5fc;
        case 0x4da600u: goto label_4da600;
        case 0x4da604u: goto label_4da604;
        case 0x4da608u: goto label_4da608;
        case 0x4da60cu: goto label_4da60c;
        case 0x4da610u: goto label_4da610;
        case 0x4da614u: goto label_4da614;
        case 0x4da618u: goto label_4da618;
        case 0x4da61cu: goto label_4da61c;
        case 0x4da620u: goto label_4da620;
        case 0x4da624u: goto label_4da624;
        case 0x4da628u: goto label_4da628;
        case 0x4da62cu: goto label_4da62c;
        case 0x4da630u: goto label_4da630;
        case 0x4da634u: goto label_4da634;
        case 0x4da638u: goto label_4da638;
        case 0x4da63cu: goto label_4da63c;
        case 0x4da640u: goto label_4da640;
        case 0x4da644u: goto label_4da644;
        case 0x4da648u: goto label_4da648;
        case 0x4da64cu: goto label_4da64c;
        case 0x4da650u: goto label_4da650;
        case 0x4da654u: goto label_4da654;
        case 0x4da658u: goto label_4da658;
        case 0x4da65cu: goto label_4da65c;
        case 0x4da660u: goto label_4da660;
        case 0x4da664u: goto label_4da664;
        case 0x4da668u: goto label_4da668;
        case 0x4da66cu: goto label_4da66c;
        case 0x4da670u: goto label_4da670;
        case 0x4da674u: goto label_4da674;
        case 0x4da678u: goto label_4da678;
        case 0x4da67cu: goto label_4da67c;
        case 0x4da680u: goto label_4da680;
        case 0x4da684u: goto label_4da684;
        case 0x4da688u: goto label_4da688;
        case 0x4da68cu: goto label_4da68c;
        case 0x4da690u: goto label_4da690;
        case 0x4da694u: goto label_4da694;
        case 0x4da698u: goto label_4da698;
        case 0x4da69cu: goto label_4da69c;
        case 0x4da6a0u: goto label_4da6a0;
        case 0x4da6a4u: goto label_4da6a4;
        case 0x4da6a8u: goto label_4da6a8;
        case 0x4da6acu: goto label_4da6ac;
        case 0x4da6b0u: goto label_4da6b0;
        case 0x4da6b4u: goto label_4da6b4;
        case 0x4da6b8u: goto label_4da6b8;
        case 0x4da6bcu: goto label_4da6bc;
        case 0x4da6c0u: goto label_4da6c0;
        case 0x4da6c4u: goto label_4da6c4;
        case 0x4da6c8u: goto label_4da6c8;
        case 0x4da6ccu: goto label_4da6cc;
        case 0x4da6d0u: goto label_4da6d0;
        case 0x4da6d4u: goto label_4da6d4;
        case 0x4da6d8u: goto label_4da6d8;
        case 0x4da6dcu: goto label_4da6dc;
        case 0x4da6e0u: goto label_4da6e0;
        case 0x4da6e4u: goto label_4da6e4;
        case 0x4da6e8u: goto label_4da6e8;
        case 0x4da6ecu: goto label_4da6ec;
        case 0x4da6f0u: goto label_4da6f0;
        case 0x4da6f4u: goto label_4da6f4;
        case 0x4da6f8u: goto label_4da6f8;
        case 0x4da6fcu: goto label_4da6fc;
        case 0x4da700u: goto label_4da700;
        case 0x4da704u: goto label_4da704;
        case 0x4da708u: goto label_4da708;
        case 0x4da70cu: goto label_4da70c;
        case 0x4da710u: goto label_4da710;
        case 0x4da714u: goto label_4da714;
        case 0x4da718u: goto label_4da718;
        case 0x4da71cu: goto label_4da71c;
        case 0x4da720u: goto label_4da720;
        case 0x4da724u: goto label_4da724;
        case 0x4da728u: goto label_4da728;
        case 0x4da72cu: goto label_4da72c;
        case 0x4da730u: goto label_4da730;
        case 0x4da734u: goto label_4da734;
        case 0x4da738u: goto label_4da738;
        case 0x4da73cu: goto label_4da73c;
        case 0x4da740u: goto label_4da740;
        case 0x4da744u: goto label_4da744;
        case 0x4da748u: goto label_4da748;
        case 0x4da74cu: goto label_4da74c;
        case 0x4da750u: goto label_4da750;
        case 0x4da754u: goto label_4da754;
        case 0x4da758u: goto label_4da758;
        case 0x4da75cu: goto label_4da75c;
        case 0x4da760u: goto label_4da760;
        case 0x4da764u: goto label_4da764;
        case 0x4da768u: goto label_4da768;
        case 0x4da76cu: goto label_4da76c;
        case 0x4da770u: goto label_4da770;
        case 0x4da774u: goto label_4da774;
        case 0x4da778u: goto label_4da778;
        case 0x4da77cu: goto label_4da77c;
        case 0x4da780u: goto label_4da780;
        case 0x4da784u: goto label_4da784;
        case 0x4da788u: goto label_4da788;
        case 0x4da78cu: goto label_4da78c;
        case 0x4da790u: goto label_4da790;
        case 0x4da794u: goto label_4da794;
        case 0x4da798u: goto label_4da798;
        case 0x4da79cu: goto label_4da79c;
        default: break;
    }

    ctx->pc = 0x4da5a0u;

label_4da5a0:
    // 0x4da5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4da5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4da5a4:
    // 0x4da5a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4da5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4da5a8:
    // 0x4da5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4da5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4da5ac:
    // 0x4da5ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4da5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4da5b0:
    // 0x4da5b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4da5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4da5b4:
    // 0x4da5b4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4da5b8:
    if (ctx->pc == 0x4DA5B8u) {
        ctx->pc = 0x4DA5B8u;
            // 0x4da5b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA5BCu;
        goto label_4da5bc;
    }
    ctx->pc = 0x4DA5B4u;
    {
        const bool branch_taken_0x4da5b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA5B4u;
            // 0x4da5b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da5b4) {
            ctx->pc = 0x4DA6E8u;
            goto label_4da6e8;
        }
    }
    ctx->pc = 0x4DA5BCu;
label_4da5bc:
    // 0x4da5bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4da5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4da5c0:
    // 0x4da5c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4da5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4da5c4:
    // 0x4da5c4: 0x24632af0  addiu       $v1, $v1, 0x2AF0
    ctx->pc = 0x4da5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10992));
label_4da5c8:
    // 0x4da5c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4da5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4da5cc:
    // 0x4da5cc: 0x24422b28  addiu       $v0, $v0, 0x2B28
    ctx->pc = 0x4da5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11048));
label_4da5d0:
    // 0x4da5d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4da5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4da5d4:
    // 0x4da5d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4da5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4da5d8:
    // 0x4da5d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4da5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4da5dc:
    // 0x4da5dc: 0xc0407c0  jal         func_101F00
label_4da5e0:
    if (ctx->pc == 0x4DA5E0u) {
        ctx->pc = 0x4DA5E0u;
            // 0x4da5e0: 0x24a5a700  addiu       $a1, $a1, -0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944512));
        ctx->pc = 0x4DA5E4u;
        goto label_4da5e4;
    }
    ctx->pc = 0x4DA5DCu;
    SET_GPR_U32(ctx, 31, 0x4DA5E4u);
    ctx->pc = 0x4DA5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA5DCu;
            // 0x4da5e0: 0x24a5a700  addiu       $a1, $a1, -0x5900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA5E4u; }
        if (ctx->pc != 0x4DA5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA5E4u; }
        if (ctx->pc != 0x4DA5E4u) { return; }
    }
    ctx->pc = 0x4DA5E4u;
label_4da5e4:
    // 0x4da5e4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4da5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4da5e8:
    // 0x4da5e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4da5ec:
    if (ctx->pc == 0x4DA5ECu) {
        ctx->pc = 0x4DA5ECu;
            // 0x4da5ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4DA5F0u;
        goto label_4da5f0;
    }
    ctx->pc = 0x4DA5E8u;
    {
        const bool branch_taken_0x4da5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da5e8) {
            ctx->pc = 0x4DA5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA5E8u;
            // 0x4da5ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA5FCu;
            goto label_4da5fc;
        }
    }
    ctx->pc = 0x4DA5F0u;
label_4da5f0:
    // 0x4da5f0: 0xc07507c  jal         func_1D41F0
label_4da5f4:
    if (ctx->pc == 0x4DA5F4u) {
        ctx->pc = 0x4DA5F4u;
            // 0x4da5f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4DA5F8u;
        goto label_4da5f8;
    }
    ctx->pc = 0x4DA5F0u;
    SET_GPR_U32(ctx, 31, 0x4DA5F8u);
    ctx->pc = 0x4DA5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA5F0u;
            // 0x4da5f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA5F8u; }
        if (ctx->pc != 0x4DA5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA5F8u; }
        if (ctx->pc != 0x4DA5F8u) { return; }
    }
    ctx->pc = 0x4DA5F8u;
label_4da5f8:
    // 0x4da5f8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4da5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4da5fc:
    // 0x4da5fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4da600:
    if (ctx->pc == 0x4DA600u) {
        ctx->pc = 0x4DA600u;
            // 0x4da600: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4DA604u;
        goto label_4da604;
    }
    ctx->pc = 0x4DA5FCu;
    {
        const bool branch_taken_0x4da5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da5fc) {
            ctx->pc = 0x4DA600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA5FCu;
            // 0x4da600: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA62Cu;
            goto label_4da62c;
        }
    }
    ctx->pc = 0x4DA604u;
label_4da604:
    // 0x4da604: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4da608:
    if (ctx->pc == 0x4DA608u) {
        ctx->pc = 0x4DA60Cu;
        goto label_4da60c;
    }
    ctx->pc = 0x4DA604u;
    {
        const bool branch_taken_0x4da604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da604) {
            ctx->pc = 0x4DA628u;
            goto label_4da628;
        }
    }
    ctx->pc = 0x4DA60Cu;
label_4da60c:
    // 0x4da60c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4da610:
    if (ctx->pc == 0x4DA610u) {
        ctx->pc = 0x4DA614u;
        goto label_4da614;
    }
    ctx->pc = 0x4DA60Cu;
    {
        const bool branch_taken_0x4da60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da60c) {
            ctx->pc = 0x4DA628u;
            goto label_4da628;
        }
    }
    ctx->pc = 0x4DA614u;
label_4da614:
    // 0x4da614: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4da614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4da618:
    // 0x4da618: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4da61c:
    if (ctx->pc == 0x4DA61Cu) {
        ctx->pc = 0x4DA620u;
        goto label_4da620;
    }
    ctx->pc = 0x4DA618u;
    {
        const bool branch_taken_0x4da618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da618) {
            ctx->pc = 0x4DA628u;
            goto label_4da628;
        }
    }
    ctx->pc = 0x4DA620u;
label_4da620:
    // 0x4da620: 0xc0400a8  jal         func_1002A0
label_4da624:
    if (ctx->pc == 0x4DA624u) {
        ctx->pc = 0x4DA628u;
        goto label_4da628;
    }
    ctx->pc = 0x4DA620u;
    SET_GPR_U32(ctx, 31, 0x4DA628u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA628u; }
        if (ctx->pc != 0x4DA628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA628u; }
        if (ctx->pc != 0x4DA628u) { return; }
    }
    ctx->pc = 0x4DA628u;
label_4da628:
    // 0x4da628: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4da628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4da62c:
    // 0x4da62c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4da630:
    if (ctx->pc == 0x4DA630u) {
        ctx->pc = 0x4DA630u;
            // 0x4da630: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4DA634u;
        goto label_4da634;
    }
    ctx->pc = 0x4DA62Cu;
    {
        const bool branch_taken_0x4da62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da62c) {
            ctx->pc = 0x4DA630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA62Cu;
            // 0x4da630: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA65Cu;
            goto label_4da65c;
        }
    }
    ctx->pc = 0x4DA634u;
label_4da634:
    // 0x4da634: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4da638:
    if (ctx->pc == 0x4DA638u) {
        ctx->pc = 0x4DA63Cu;
        goto label_4da63c;
    }
    ctx->pc = 0x4DA634u;
    {
        const bool branch_taken_0x4da634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da634) {
            ctx->pc = 0x4DA658u;
            goto label_4da658;
        }
    }
    ctx->pc = 0x4DA63Cu;
label_4da63c:
    // 0x4da63c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4da640:
    if (ctx->pc == 0x4DA640u) {
        ctx->pc = 0x4DA644u;
        goto label_4da644;
    }
    ctx->pc = 0x4DA63Cu;
    {
        const bool branch_taken_0x4da63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da63c) {
            ctx->pc = 0x4DA658u;
            goto label_4da658;
        }
    }
    ctx->pc = 0x4DA644u;
label_4da644:
    // 0x4da644: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4da644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4da648:
    // 0x4da648: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4da64c:
    if (ctx->pc == 0x4DA64Cu) {
        ctx->pc = 0x4DA650u;
        goto label_4da650;
    }
    ctx->pc = 0x4DA648u;
    {
        const bool branch_taken_0x4da648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da648) {
            ctx->pc = 0x4DA658u;
            goto label_4da658;
        }
    }
    ctx->pc = 0x4DA650u;
label_4da650:
    // 0x4da650: 0xc0400a8  jal         func_1002A0
label_4da654:
    if (ctx->pc == 0x4DA654u) {
        ctx->pc = 0x4DA658u;
        goto label_4da658;
    }
    ctx->pc = 0x4DA650u;
    SET_GPR_U32(ctx, 31, 0x4DA658u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA658u; }
        if (ctx->pc != 0x4DA658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA658u; }
        if (ctx->pc != 0x4DA658u) { return; }
    }
    ctx->pc = 0x4DA658u;
label_4da658:
    // 0x4da658: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4da658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4da65c:
    // 0x4da65c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4da660:
    if (ctx->pc == 0x4DA660u) {
        ctx->pc = 0x4DA664u;
        goto label_4da664;
    }
    ctx->pc = 0x4DA65Cu;
    {
        const bool branch_taken_0x4da65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da65c) {
            ctx->pc = 0x4DA678u;
            goto label_4da678;
        }
    }
    ctx->pc = 0x4DA664u;
label_4da664:
    // 0x4da664: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4da664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4da668:
    // 0x4da668: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4da668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4da66c:
    // 0x4da66c: 0x24632ad8  addiu       $v1, $v1, 0x2AD8
    ctx->pc = 0x4da66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10968));
label_4da670:
    // 0x4da670: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4da670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4da674:
    // 0x4da674: 0xac4064b8  sw          $zero, 0x64B8($v0)
    ctx->pc = 0x4da674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25784), GPR_U32(ctx, 0));
label_4da678:
    // 0x4da678: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4da67c:
    if (ctx->pc == 0x4DA67Cu) {
        ctx->pc = 0x4DA67Cu;
            // 0x4da67c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4DA680u;
        goto label_4da680;
    }
    ctx->pc = 0x4DA678u;
    {
        const bool branch_taken_0x4da678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da678) {
            ctx->pc = 0x4DA67Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA678u;
            // 0x4da67c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA6D4u;
            goto label_4da6d4;
        }
    }
    ctx->pc = 0x4DA680u;
label_4da680:
    // 0x4da680: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4da680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4da684:
    // 0x4da684: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4da684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4da688:
    // 0x4da688: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4da688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4da68c:
    // 0x4da68c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4da68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4da690:
    // 0x4da690: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4da694:
    if (ctx->pc == 0x4DA694u) {
        ctx->pc = 0x4DA694u;
            // 0x4da694: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4DA698u;
        goto label_4da698;
    }
    ctx->pc = 0x4DA690u;
    {
        const bool branch_taken_0x4da690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da690) {
            ctx->pc = 0x4DA694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA690u;
            // 0x4da694: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA6ACu;
            goto label_4da6ac;
        }
    }
    ctx->pc = 0x4DA698u;
label_4da698:
    // 0x4da698: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4da698u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da69c:
    // 0x4da69c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4da69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4da6a0:
    // 0x4da6a0: 0x320f809  jalr        $t9
label_4da6a4:
    if (ctx->pc == 0x4DA6A4u) {
        ctx->pc = 0x4DA6A4u;
            // 0x4da6a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DA6A8u;
        goto label_4da6a8;
    }
    ctx->pc = 0x4DA6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DA6A8u);
        ctx->pc = 0x4DA6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA6A0u;
            // 0x4da6a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DA6A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DA6A8u; }
            if (ctx->pc != 0x4DA6A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4DA6A8u;
label_4da6a8:
    // 0x4da6a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4da6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4da6ac:
    // 0x4da6ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4da6b0:
    if (ctx->pc == 0x4DA6B0u) {
        ctx->pc = 0x4DA6B0u;
            // 0x4da6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA6B4u;
        goto label_4da6b4;
    }
    ctx->pc = 0x4DA6ACu;
    {
        const bool branch_taken_0x4da6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da6ac) {
            ctx->pc = 0x4DA6B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA6ACu;
            // 0x4da6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA6C8u;
            goto label_4da6c8;
        }
    }
    ctx->pc = 0x4DA6B4u;
label_4da6b4:
    // 0x4da6b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4da6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da6b8:
    // 0x4da6b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4da6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4da6bc:
    // 0x4da6bc: 0x320f809  jalr        $t9
label_4da6c0:
    if (ctx->pc == 0x4DA6C0u) {
        ctx->pc = 0x4DA6C0u;
            // 0x4da6c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4DA6C4u;
        goto label_4da6c4;
    }
    ctx->pc = 0x4DA6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DA6C4u);
        ctx->pc = 0x4DA6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA6BCu;
            // 0x4da6c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DA6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DA6C4u; }
            if (ctx->pc != 0x4DA6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4DA6C4u;
label_4da6c4:
    // 0x4da6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4da6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4da6c8:
    // 0x4da6c8: 0xc075bf8  jal         func_1D6FE0
label_4da6cc:
    if (ctx->pc == 0x4DA6CCu) {
        ctx->pc = 0x4DA6CCu;
            // 0x4da6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA6D0u;
        goto label_4da6d0;
    }
    ctx->pc = 0x4DA6C8u;
    SET_GPR_U32(ctx, 31, 0x4DA6D0u);
    ctx->pc = 0x4DA6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA6C8u;
            // 0x4da6cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA6D0u; }
        if (ctx->pc != 0x4DA6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA6D0u; }
        if (ctx->pc != 0x4DA6D0u) { return; }
    }
    ctx->pc = 0x4DA6D0u;
label_4da6d0:
    // 0x4da6d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4da6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4da6d4:
    // 0x4da6d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4da6d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4da6d8:
    // 0x4da6d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4da6dc:
    if (ctx->pc == 0x4DA6DCu) {
        ctx->pc = 0x4DA6DCu;
            // 0x4da6dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA6E0u;
        goto label_4da6e0;
    }
    ctx->pc = 0x4DA6D8u;
    {
        const bool branch_taken_0x4da6d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4da6d8) {
            ctx->pc = 0x4DA6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA6D8u;
            // 0x4da6dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA6ECu;
            goto label_4da6ec;
        }
    }
    ctx->pc = 0x4DA6E0u;
label_4da6e0:
    // 0x4da6e0: 0xc0400a8  jal         func_1002A0
label_4da6e4:
    if (ctx->pc == 0x4DA6E4u) {
        ctx->pc = 0x4DA6E4u;
            // 0x4da6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA6E8u;
        goto label_4da6e8;
    }
    ctx->pc = 0x4DA6E0u;
    SET_GPR_U32(ctx, 31, 0x4DA6E8u);
    ctx->pc = 0x4DA6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA6E0u;
            // 0x4da6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA6E8u; }
        if (ctx->pc != 0x4DA6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA6E8u; }
        if (ctx->pc != 0x4DA6E8u) { return; }
    }
    ctx->pc = 0x4DA6E8u;
label_4da6e8:
    // 0x4da6e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4da6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4da6ec:
    // 0x4da6ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4da6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4da6f0:
    // 0x4da6f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4da6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4da6f4:
    // 0x4da6f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4da6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4da6f8:
    // 0x4da6f8: 0x3e00008  jr          $ra
label_4da6fc:
    if (ctx->pc == 0x4DA6FCu) {
        ctx->pc = 0x4DA6FCu;
            // 0x4da6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DA700u;
        goto label_4da700;
    }
    ctx->pc = 0x4DA6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA6F8u;
            // 0x4da6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DA700u;
label_4da700:
    // 0x4da700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4da700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4da704:
    // 0x4da704: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4da704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4da708:
    // 0x4da708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4da708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4da70c:
    // 0x4da70c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4da70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4da710:
    // 0x4da710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4da710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4da714:
    // 0x4da714: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_4da718:
    if (ctx->pc == 0x4DA718u) {
        ctx->pc = 0x4DA718u;
            // 0x4da718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA71Cu;
        goto label_4da71c;
    }
    ctx->pc = 0x4DA714u;
    {
        const bool branch_taken_0x4da714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DA718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA714u;
            // 0x4da718: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4da714) {
            ctx->pc = 0x4DA788u;
            goto label_4da788;
        }
    }
    ctx->pc = 0x4DA71Cu;
label_4da71c:
    // 0x4da71c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4da71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4da720:
    // 0x4da720: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4da720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4da724:
    // 0x4da724: 0x24632b90  addiu       $v1, $v1, 0x2B90
    ctx->pc = 0x4da724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11152));
label_4da728:
    // 0x4da728: 0x24422bd0  addiu       $v0, $v0, 0x2BD0
    ctx->pc = 0x4da728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11216));
label_4da72c:
    // 0x4da72c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4da72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4da730:
    // 0x4da730: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4da730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4da734:
    // 0x4da734: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4da734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4da738:
    // 0x4da738: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4da738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4da73c:
    // 0x4da73c: 0x320f809  jalr        $t9
label_4da740:
    if (ctx->pc == 0x4DA740u) {
        ctx->pc = 0x4DA744u;
        goto label_4da744;
    }
    ctx->pc = 0x4DA73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DA744u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DA744u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DA744u; }
            if (ctx->pc != 0x4DA744u) { return; }
        }
        }
    }
    ctx->pc = 0x4DA744u;
label_4da744:
    // 0x4da744: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_4da748:
    if (ctx->pc == 0x4DA748u) {
        ctx->pc = 0x4DA748u;
            // 0x4da748: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4DA74Cu;
        goto label_4da74c;
    }
    ctx->pc = 0x4DA744u;
    {
        const bool branch_taken_0x4da744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4da744) {
            ctx->pc = 0x4DA748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA744u;
            // 0x4da748: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA774u;
            goto label_4da774;
        }
    }
    ctx->pc = 0x4DA74Cu;
label_4da74c:
    // 0x4da74c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4da74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4da750:
    // 0x4da750: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4da750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4da754:
    // 0x4da754: 0x24632c30  addiu       $v1, $v1, 0x2C30
    ctx->pc = 0x4da754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11312));
label_4da758:
    // 0x4da758: 0x24422c70  addiu       $v0, $v0, 0x2C70
    ctx->pc = 0x4da758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
label_4da75c:
    // 0x4da75c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4da75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4da760:
    // 0x4da760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4da760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4da764:
    // 0x4da764: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4da764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4da768:
    // 0x4da768: 0xc12e684  jal         func_4B9A10
label_4da76c:
    if (ctx->pc == 0x4DA76Cu) {
        ctx->pc = 0x4DA76Cu;
            // 0x4da76c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA770u;
        goto label_4da770;
    }
    ctx->pc = 0x4DA768u;
    SET_GPR_U32(ctx, 31, 0x4DA770u);
    ctx->pc = 0x4DA76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA768u;
            // 0x4da76c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA770u; }
        if (ctx->pc != 0x4DA770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA770u; }
        if (ctx->pc != 0x4DA770u) { return; }
    }
    ctx->pc = 0x4DA770u;
label_4da770:
    // 0x4da770: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4da770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4da774:
    // 0x4da774: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4da774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4da778:
    // 0x4da778: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4da77c:
    if (ctx->pc == 0x4DA77Cu) {
        ctx->pc = 0x4DA77Cu;
            // 0x4da77c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA780u;
        goto label_4da780;
    }
    ctx->pc = 0x4DA778u;
    {
        const bool branch_taken_0x4da778 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4da778) {
            ctx->pc = 0x4DA77Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA778u;
            // 0x4da77c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DA78Cu;
            goto label_4da78c;
        }
    }
    ctx->pc = 0x4DA780u;
label_4da780:
    // 0x4da780: 0xc0400a8  jal         func_1002A0
label_4da784:
    if (ctx->pc == 0x4DA784u) {
        ctx->pc = 0x4DA784u;
            // 0x4da784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DA788u;
        goto label_4da788;
    }
    ctx->pc = 0x4DA780u;
    SET_GPR_U32(ctx, 31, 0x4DA788u);
    ctx->pc = 0x4DA784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA780u;
            // 0x4da784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA788u; }
        if (ctx->pc != 0x4DA788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DA788u; }
        if (ctx->pc != 0x4DA788u) { return; }
    }
    ctx->pc = 0x4DA788u;
label_4da788:
    // 0x4da788: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4da788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4da78c:
    // 0x4da78c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4da78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4da790:
    // 0x4da790: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4da790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4da794:
    // 0x4da794: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4da794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4da798:
    // 0x4da798: 0x3e00008  jr          $ra
label_4da79c:
    if (ctx->pc == 0x4DA79Cu) {
        ctx->pc = 0x4DA79Cu;
            // 0x4da79c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4DA7A0u;
        goto label_fallthrough_0x4da798;
    }
    ctx->pc = 0x4DA798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DA79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DA798u;
            // 0x4da79c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4da798:
    ctx->pc = 0x4DA7A0u;
}
