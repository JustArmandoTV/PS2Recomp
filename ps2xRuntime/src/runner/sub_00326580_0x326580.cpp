#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00326580
// Address: 0x326580 - 0x326870
void sub_00326580_0x326580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326580_0x326580");
#endif

    switch (ctx->pc) {
        case 0x3265c4u: goto label_3265c4;
        case 0x3265dcu: goto label_3265dc;
        case 0x3265f4u: goto label_3265f4;
        case 0x32660cu: goto label_32660c;
        case 0x326624u: goto label_326624;
        case 0x32663cu: goto label_32663c;
        case 0x326654u: goto label_326654;
        case 0x32666cu: goto label_32666c;
        case 0x326684u: goto label_326684;
        case 0x326698u: goto label_326698;
        case 0x3266acu: goto label_3266ac;
        case 0x3266c0u: goto label_3266c0;
        case 0x3266d4u: goto label_3266d4;
        case 0x3266ecu: goto label_3266ec;
        case 0x326700u: goto label_326700;
        case 0x326714u: goto label_326714;
        case 0x32672cu: goto label_32672c;
        case 0x326740u: goto label_326740;
        case 0x326754u: goto label_326754;
        case 0x32676cu: goto label_32676c;
        case 0x326780u: goto label_326780;
        case 0x326794u: goto label_326794;
        case 0x3267acu: goto label_3267ac;
        case 0x3267c0u: goto label_3267c0;
        case 0x3267d4u: goto label_3267d4;
        case 0x3267ecu: goto label_3267ec;
        case 0x326800u: goto label_326800;
        case 0x326814u: goto label_326814;
        case 0x32682cu: goto label_32682c;
        case 0x326840u: goto label_326840;
        default: break;
    }

    ctx->pc = 0x326580u;

    // 0x326580: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x326580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x326584: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x326588: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x326588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x32658c: 0x24a5cc60  addiu       $a1, $a1, -0x33A0
    ctx->pc = 0x32658cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954080));
    // 0x326590: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x326590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x326594: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x326594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x326598: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x326598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x32659c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x32659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3265a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3265a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3265a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3265a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3265a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3265a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3265ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3265acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3265b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3265b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3265b4: 0x24910164  addiu       $s1, $a0, 0x164
    ctx->pc = 0x3265b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    // 0x3265b8: 0x8c840168  lw          $a0, 0x168($a0)
    ctx->pc = 0x3265b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x3265bc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3265BCu;
    SET_GPR_U32(ctx, 31, 0x3265C4u);
    ctx->pc = 0x3265C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3265BCu;
            // 0x3265c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3265C4u; }
        if (ctx->pc != 0x3265C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3265C4u; }
        if (ctx->pc != 0x3265C4u) { return; }
    }
    ctx->pc = 0x3265C4u;
label_3265c4:
    // 0x3265c4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3265c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3265c8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3265c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3265cc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3265ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3265d0: 0x24a5cc68  addiu       $a1, $a1, -0x3398
    ctx->pc = 0x3265d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954088));
    // 0x3265d4: 0xc123944  jal         func_48E510
    ctx->pc = 0x3265D4u;
    SET_GPR_U32(ctx, 31, 0x3265DCu);
    ctx->pc = 0x3265D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3265D4u;
            // 0x3265d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3265DCu; }
        if (ctx->pc != 0x3265DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3265DCu; }
        if (ctx->pc != 0x3265DCu) { return; }
    }
    ctx->pc = 0x3265DCu;
label_3265dc:
    // 0x3265dc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3265dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3265e0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3265e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3265e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3265e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3265e8: 0x24a5cc70  addiu       $a1, $a1, -0x3390
    ctx->pc = 0x3265e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954096));
    // 0x3265ec: 0xc123944  jal         func_48E510
    ctx->pc = 0x3265ECu;
    SET_GPR_U32(ctx, 31, 0x3265F4u);
    ctx->pc = 0x3265F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3265ECu;
            // 0x3265f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3265F4u; }
        if (ctx->pc != 0x3265F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3265F4u; }
        if (ctx->pc != 0x3265F4u) { return; }
    }
    ctx->pc = 0x3265F4u;
label_3265f4:
    // 0x3265f4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3265f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3265f8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3265f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3265fc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3265fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326600: 0x24a5cc78  addiu       $a1, $a1, -0x3388
    ctx->pc = 0x326600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954104));
    // 0x326604: 0xc123944  jal         func_48E510
    ctx->pc = 0x326604u;
    SET_GPR_U32(ctx, 31, 0x32660Cu);
    ctx->pc = 0x326608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326604u;
            // 0x326608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32660Cu; }
        if (ctx->pc != 0x32660Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32660Cu; }
        if (ctx->pc != 0x32660Cu) { return; }
    }
    ctx->pc = 0x32660Cu;
label_32660c:
    // 0x32660c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32660cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326610: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x326614: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x326614u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326618: 0x24a5cc80  addiu       $a1, $a1, -0x3380
    ctx->pc = 0x326618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954112));
    // 0x32661c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32661Cu;
    SET_GPR_U32(ctx, 31, 0x326624u);
    ctx->pc = 0x326620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32661Cu;
            // 0x326620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326624u; }
        if (ctx->pc != 0x326624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326624u; }
        if (ctx->pc != 0x326624u) { return; }
    }
    ctx->pc = 0x326624u;
label_326624:
    // 0x326624: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326628: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x32662c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x32662cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326630: 0x24a5cc90  addiu       $a1, $a1, -0x3370
    ctx->pc = 0x326630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954128));
    // 0x326634: 0xc123944  jal         func_48E510
    ctx->pc = 0x326634u;
    SET_GPR_U32(ctx, 31, 0x32663Cu);
    ctx->pc = 0x326638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326634u;
            // 0x326638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32663Cu; }
        if (ctx->pc != 0x32663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32663Cu; }
        if (ctx->pc != 0x32663Cu) { return; }
    }
    ctx->pc = 0x32663Cu;
label_32663c:
    // 0x32663c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x32663cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326640: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x326644: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x326644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326648: 0x24a5cc98  addiu       $a1, $a1, -0x3368
    ctx->pc = 0x326648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954136));
    // 0x32664c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32664Cu;
    SET_GPR_U32(ctx, 31, 0x326654u);
    ctx->pc = 0x326650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32664Cu;
            // 0x326650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326654u; }
        if (ctx->pc != 0x326654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326654u; }
        if (ctx->pc != 0x326654u) { return; }
    }
    ctx->pc = 0x326654u;
label_326654:
    // 0x326654: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326658: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x32665c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32665cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326660: 0x24a5cca8  addiu       $a1, $a1, -0x3358
    ctx->pc = 0x326660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954152));
    // 0x326664: 0xc123944  jal         func_48E510
    ctx->pc = 0x326664u;
    SET_GPR_U32(ctx, 31, 0x32666Cu);
    ctx->pc = 0x326668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326664u;
            // 0x326668: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32666Cu; }
        if (ctx->pc != 0x32666Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32666Cu; }
        if (ctx->pc != 0x32666Cu) { return; }
    }
    ctx->pc = 0x32666Cu;
label_32666c:
    // 0x32666c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x32666cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x326670: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x326670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326674: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x326674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326678: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x326678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32667c: 0xc123654  jal         func_48D950
    ctx->pc = 0x32667Cu;
    SET_GPR_U32(ctx, 31, 0x326684u);
    ctx->pc = 0x326680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32667Cu;
            // 0x326680: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326684u; }
        if (ctx->pc != 0x326684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326684u; }
        if (ctx->pc != 0x326684u) { return; }
    }
    ctx->pc = 0x326684u;
label_326684:
    // 0x326684: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x326684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x326688: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x326688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32668c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32668cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326690: 0xc123654  jal         func_48D950
    ctx->pc = 0x326690u;
    SET_GPR_U32(ctx, 31, 0x326698u);
    ctx->pc = 0x326694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326690u;
            // 0x326694: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326698u; }
        if (ctx->pc != 0x326698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326698u; }
        if (ctx->pc != 0x326698u) { return; }
    }
    ctx->pc = 0x326698u;
label_326698:
    // 0x326698: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x326698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x32669c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3266a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266a4: 0xc123654  jal         func_48D950
    ctx->pc = 0x3266A4u;
    SET_GPR_U32(ctx, 31, 0x3266ACu);
    ctx->pc = 0x3266A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3266A4u;
            // 0x3266a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3266ACu; }
        if (ctx->pc != 0x3266ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3266ACu; }
        if (ctx->pc != 0x3266ACu) { return; }
    }
    ctx->pc = 0x3266ACu;
label_3266ac:
    // 0x3266ac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3266acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3266b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3266b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3266b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266b8: 0xc123654  jal         func_48D950
    ctx->pc = 0x3266B8u;
    SET_GPR_U32(ctx, 31, 0x3266C0u);
    ctx->pc = 0x3266BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3266B8u;
            // 0x3266bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3266C0u; }
        if (ctx->pc != 0x3266C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3266C0u; }
        if (ctx->pc != 0x3266C0u) { return; }
    }
    ctx->pc = 0x3266C0u;
label_3266c0:
    // 0x3266c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3266c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3266c4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3266c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3266c8: 0x24a5ccb0  addiu       $a1, $a1, -0x3350
    ctx->pc = 0x3266c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954160));
    // 0x3266cc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3266CCu;
    SET_GPR_U32(ctx, 31, 0x3266D4u);
    ctx->pc = 0x3266D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3266CCu;
            // 0x3266d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3266D4u; }
        if (ctx->pc != 0x3266D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3266D4u; }
        if (ctx->pc != 0x3266D4u) { return; }
    }
    ctx->pc = 0x3266D4u;
label_3266d4:
    // 0x3266d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3266d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3266d8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3266d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3266dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3266dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266e0: 0x24a5ccc0  addiu       $a1, $a1, -0x3340
    ctx->pc = 0x3266e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954176));
    // 0x3266e4: 0xc123944  jal         func_48E510
    ctx->pc = 0x3266E4u;
    SET_GPR_U32(ctx, 31, 0x3266ECu);
    ctx->pc = 0x3266E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3266E4u;
            // 0x3266e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3266ECu; }
        if (ctx->pc != 0x3266ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3266ECu; }
        if (ctx->pc != 0x3266ECu) { return; }
    }
    ctx->pc = 0x3266ECu;
label_3266ec:
    // 0x3266ec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3266ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3266f0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3266f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3266f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3266f8: 0xc123654  jal         func_48D950
    ctx->pc = 0x3266F8u;
    SET_GPR_U32(ctx, 31, 0x326700u);
    ctx->pc = 0x3266FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3266F8u;
            // 0x3266fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326700u; }
        if (ctx->pc != 0x326700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326700u; }
        if (ctx->pc != 0x326700u) { return; }
    }
    ctx->pc = 0x326700u;
label_326700:
    // 0x326700: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326704: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x326708: 0x24a5ccc8  addiu       $a1, $a1, -0x3338
    ctx->pc = 0x326708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954184));
    // 0x32670c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32670Cu;
    SET_GPR_U32(ctx, 31, 0x326714u);
    ctx->pc = 0x326710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32670Cu;
            // 0x326710: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326714u; }
        if (ctx->pc != 0x326714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326714u; }
        if (ctx->pc != 0x326714u) { return; }
    }
    ctx->pc = 0x326714u;
label_326714:
    // 0x326714: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326718: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x32671c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32671cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326720: 0x24a5ccd8  addiu       $a1, $a1, -0x3328
    ctx->pc = 0x326720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954200));
    // 0x326724: 0xc123944  jal         func_48E510
    ctx->pc = 0x326724u;
    SET_GPR_U32(ctx, 31, 0x32672Cu);
    ctx->pc = 0x326728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326724u;
            // 0x326728: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32672Cu; }
        if (ctx->pc != 0x32672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32672Cu; }
        if (ctx->pc != 0x32672Cu) { return; }
    }
    ctx->pc = 0x32672Cu;
label_32672c:
    // 0x32672c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x32672cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x326730: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x326730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x326734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326738: 0xc123654  jal         func_48D950
    ctx->pc = 0x326738u;
    SET_GPR_U32(ctx, 31, 0x326740u);
    ctx->pc = 0x32673Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326738u;
            // 0x32673c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326740u; }
        if (ctx->pc != 0x326740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326740u; }
        if (ctx->pc != 0x326740u) { return; }
    }
    ctx->pc = 0x326740u;
label_326740:
    // 0x326740: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326744: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x326748: 0x24a5cce0  addiu       $a1, $a1, -0x3320
    ctx->pc = 0x326748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954208));
    // 0x32674c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32674Cu;
    SET_GPR_U32(ctx, 31, 0x326754u);
    ctx->pc = 0x326750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32674Cu;
            // 0x326750: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326754u; }
        if (ctx->pc != 0x326754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326754u; }
        if (ctx->pc != 0x326754u) { return; }
    }
    ctx->pc = 0x326754u;
label_326754:
    // 0x326754: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326758: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x32675c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32675cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326760: 0x24a5cce0  addiu       $a1, $a1, -0x3320
    ctx->pc = 0x326760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954208));
    // 0x326764: 0xc123944  jal         func_48E510
    ctx->pc = 0x326764u;
    SET_GPR_U32(ctx, 31, 0x32676Cu);
    ctx->pc = 0x326768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326764u;
            // 0x326768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32676Cu; }
        if (ctx->pc != 0x32676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32676Cu; }
        if (ctx->pc != 0x32676Cu) { return; }
    }
    ctx->pc = 0x32676Cu;
label_32676c:
    // 0x32676c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x32676cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x326770: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x326770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326774: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x326774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326778: 0xc123654  jal         func_48D950
    ctx->pc = 0x326778u;
    SET_GPR_U32(ctx, 31, 0x326780u);
    ctx->pc = 0x32677Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326778u;
            // 0x32677c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326780u; }
        if (ctx->pc != 0x326780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326780u; }
        if (ctx->pc != 0x326780u) { return; }
    }
    ctx->pc = 0x326780u;
label_326780:
    // 0x326780: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326784: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x326788: 0x24a5cce8  addiu       $a1, $a1, -0x3318
    ctx->pc = 0x326788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954216));
    // 0x32678c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32678Cu;
    SET_GPR_U32(ctx, 31, 0x326794u);
    ctx->pc = 0x326790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32678Cu;
            // 0x326790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326794u; }
        if (ctx->pc != 0x326794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326794u; }
        if (ctx->pc != 0x326794u) { return; }
    }
    ctx->pc = 0x326794u;
label_326794:
    // 0x326794: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326798: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x32679c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32679cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267a0: 0x24a5cce8  addiu       $a1, $a1, -0x3318
    ctx->pc = 0x3267a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954216));
    // 0x3267a4: 0xc123944  jal         func_48E510
    ctx->pc = 0x3267A4u;
    SET_GPR_U32(ctx, 31, 0x3267ACu);
    ctx->pc = 0x3267A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3267A4u;
            // 0x3267a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3267ACu; }
        if (ctx->pc != 0x3267ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3267ACu; }
        if (ctx->pc != 0x3267ACu) { return; }
    }
    ctx->pc = 0x3267ACu;
label_3267ac:
    // 0x3267ac: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3267acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3267b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3267b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3267b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267b8: 0xc123654  jal         func_48D950
    ctx->pc = 0x3267B8u;
    SET_GPR_U32(ctx, 31, 0x3267C0u);
    ctx->pc = 0x3267BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3267B8u;
            // 0x3267bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3267C0u; }
        if (ctx->pc != 0x3267C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3267C0u; }
        if (ctx->pc != 0x3267C0u) { return; }
    }
    ctx->pc = 0x3267C0u;
label_3267c0:
    // 0x3267c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3267c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3267c4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3267c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3267c8: 0x24a5ccf8  addiu       $a1, $a1, -0x3308
    ctx->pc = 0x3267c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954232));
    // 0x3267cc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3267CCu;
    SET_GPR_U32(ctx, 31, 0x3267D4u);
    ctx->pc = 0x3267D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3267CCu;
            // 0x3267d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3267D4u; }
        if (ctx->pc != 0x3267D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3267D4u; }
        if (ctx->pc != 0x3267D4u) { return; }
    }
    ctx->pc = 0x3267D4u;
label_3267d4:
    // 0x3267d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3267d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3267d8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3267d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3267dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3267dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267e0: 0x24a5ccf8  addiu       $a1, $a1, -0x3308
    ctx->pc = 0x3267e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954232));
    // 0x3267e4: 0xc123944  jal         func_48E510
    ctx->pc = 0x3267E4u;
    SET_GPR_U32(ctx, 31, 0x3267ECu);
    ctx->pc = 0x3267E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3267E4u;
            // 0x3267e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3267ECu; }
        if (ctx->pc != 0x3267ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3267ECu; }
        if (ctx->pc != 0x3267ECu) { return; }
    }
    ctx->pc = 0x3267ECu;
label_3267ec:
    // 0x3267ec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3267ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3267f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3267f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3267f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267f8: 0xc123654  jal         func_48D950
    ctx->pc = 0x3267F8u;
    SET_GPR_U32(ctx, 31, 0x326800u);
    ctx->pc = 0x3267FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3267F8u;
            // 0x3267fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326800u; }
        if (ctx->pc != 0x326800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326800u; }
        if (ctx->pc != 0x326800u) { return; }
    }
    ctx->pc = 0x326800u;
label_326800:
    // 0x326800: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326804: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x326808: 0x24a5cd00  addiu       $a1, $a1, -0x3300
    ctx->pc = 0x326808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954240));
    // 0x32680c: 0xc123944  jal         func_48E510
    ctx->pc = 0x32680Cu;
    SET_GPR_U32(ctx, 31, 0x326814u);
    ctx->pc = 0x326810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32680Cu;
            // 0x326810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326814u; }
        if (ctx->pc != 0x326814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326814u; }
        if (ctx->pc != 0x326814u) { return; }
    }
    ctx->pc = 0x326814u;
label_326814:
    // 0x326814: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x326814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326818: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x32681c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32681cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326820: 0x24a5cd00  addiu       $a1, $a1, -0x3300
    ctx->pc = 0x326820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954240));
    // 0x326824: 0xc123944  jal         func_48E510
    ctx->pc = 0x326824u;
    SET_GPR_U32(ctx, 31, 0x32682Cu);
    ctx->pc = 0x326828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326824u;
            // 0x326828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32682Cu; }
        if (ctx->pc != 0x32682Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32682Cu; }
        if (ctx->pc != 0x32682Cu) { return; }
    }
    ctx->pc = 0x32682Cu;
label_32682c:
    // 0x32682c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x32682cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x326830: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x326830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326834: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x326834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326838: 0xc123654  jal         func_48D950
    ctx->pc = 0x326838u;
    SET_GPR_U32(ctx, 31, 0x326840u);
    ctx->pc = 0x32683Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326838u;
            // 0x32683c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326840u; }
        if (ctx->pc != 0x326840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326840u; }
        if (ctx->pc != 0x326840u) { return; }
    }
    ctx->pc = 0x326840u;
label_326840:
    // 0x326840: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x326840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x326844: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x326844u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x326848: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x326848u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32684c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x32684cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x326850: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x326850u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x326854: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x326854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x326858: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x326858u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32685c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32685cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326868: 0x3e00008  jr          $ra
    ctx->pc = 0x326868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32686Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326868u;
            // 0x32686c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x326870u;
}
