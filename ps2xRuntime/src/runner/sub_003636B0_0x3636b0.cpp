#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003636B0
// Address: 0x3636b0 - 0x3639d0
void sub_003636B0_0x3636b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003636B0_0x3636b0");
#endif

    switch (ctx->pc) {
        case 0x3636b0u: goto label_3636b0;
        case 0x3636b4u: goto label_3636b4;
        case 0x3636b8u: goto label_3636b8;
        case 0x3636bcu: goto label_3636bc;
        case 0x3636c0u: goto label_3636c0;
        case 0x3636c4u: goto label_3636c4;
        case 0x3636c8u: goto label_3636c8;
        case 0x3636ccu: goto label_3636cc;
        case 0x3636d0u: goto label_3636d0;
        case 0x3636d4u: goto label_3636d4;
        case 0x3636d8u: goto label_3636d8;
        case 0x3636dcu: goto label_3636dc;
        case 0x3636e0u: goto label_3636e0;
        case 0x3636e4u: goto label_3636e4;
        case 0x3636e8u: goto label_3636e8;
        case 0x3636ecu: goto label_3636ec;
        case 0x3636f0u: goto label_3636f0;
        case 0x3636f4u: goto label_3636f4;
        case 0x3636f8u: goto label_3636f8;
        case 0x3636fcu: goto label_3636fc;
        case 0x363700u: goto label_363700;
        case 0x363704u: goto label_363704;
        case 0x363708u: goto label_363708;
        case 0x36370cu: goto label_36370c;
        case 0x363710u: goto label_363710;
        case 0x363714u: goto label_363714;
        case 0x363718u: goto label_363718;
        case 0x36371cu: goto label_36371c;
        case 0x363720u: goto label_363720;
        case 0x363724u: goto label_363724;
        case 0x363728u: goto label_363728;
        case 0x36372cu: goto label_36372c;
        case 0x363730u: goto label_363730;
        case 0x363734u: goto label_363734;
        case 0x363738u: goto label_363738;
        case 0x36373cu: goto label_36373c;
        case 0x363740u: goto label_363740;
        case 0x363744u: goto label_363744;
        case 0x363748u: goto label_363748;
        case 0x36374cu: goto label_36374c;
        case 0x363750u: goto label_363750;
        case 0x363754u: goto label_363754;
        case 0x363758u: goto label_363758;
        case 0x36375cu: goto label_36375c;
        case 0x363760u: goto label_363760;
        case 0x363764u: goto label_363764;
        case 0x363768u: goto label_363768;
        case 0x36376cu: goto label_36376c;
        case 0x363770u: goto label_363770;
        case 0x363774u: goto label_363774;
        case 0x363778u: goto label_363778;
        case 0x36377cu: goto label_36377c;
        case 0x363780u: goto label_363780;
        case 0x363784u: goto label_363784;
        case 0x363788u: goto label_363788;
        case 0x36378cu: goto label_36378c;
        case 0x363790u: goto label_363790;
        case 0x363794u: goto label_363794;
        case 0x363798u: goto label_363798;
        case 0x36379cu: goto label_36379c;
        case 0x3637a0u: goto label_3637a0;
        case 0x3637a4u: goto label_3637a4;
        case 0x3637a8u: goto label_3637a8;
        case 0x3637acu: goto label_3637ac;
        case 0x3637b0u: goto label_3637b0;
        case 0x3637b4u: goto label_3637b4;
        case 0x3637b8u: goto label_3637b8;
        case 0x3637bcu: goto label_3637bc;
        case 0x3637c0u: goto label_3637c0;
        case 0x3637c4u: goto label_3637c4;
        case 0x3637c8u: goto label_3637c8;
        case 0x3637ccu: goto label_3637cc;
        case 0x3637d0u: goto label_3637d0;
        case 0x3637d4u: goto label_3637d4;
        case 0x3637d8u: goto label_3637d8;
        case 0x3637dcu: goto label_3637dc;
        case 0x3637e0u: goto label_3637e0;
        case 0x3637e4u: goto label_3637e4;
        case 0x3637e8u: goto label_3637e8;
        case 0x3637ecu: goto label_3637ec;
        case 0x3637f0u: goto label_3637f0;
        case 0x3637f4u: goto label_3637f4;
        case 0x3637f8u: goto label_3637f8;
        case 0x3637fcu: goto label_3637fc;
        case 0x363800u: goto label_363800;
        case 0x363804u: goto label_363804;
        case 0x363808u: goto label_363808;
        case 0x36380cu: goto label_36380c;
        case 0x363810u: goto label_363810;
        case 0x363814u: goto label_363814;
        case 0x363818u: goto label_363818;
        case 0x36381cu: goto label_36381c;
        case 0x363820u: goto label_363820;
        case 0x363824u: goto label_363824;
        case 0x363828u: goto label_363828;
        case 0x36382cu: goto label_36382c;
        case 0x363830u: goto label_363830;
        case 0x363834u: goto label_363834;
        case 0x363838u: goto label_363838;
        case 0x36383cu: goto label_36383c;
        case 0x363840u: goto label_363840;
        case 0x363844u: goto label_363844;
        case 0x363848u: goto label_363848;
        case 0x36384cu: goto label_36384c;
        case 0x363850u: goto label_363850;
        case 0x363854u: goto label_363854;
        case 0x363858u: goto label_363858;
        case 0x36385cu: goto label_36385c;
        case 0x363860u: goto label_363860;
        case 0x363864u: goto label_363864;
        case 0x363868u: goto label_363868;
        case 0x36386cu: goto label_36386c;
        case 0x363870u: goto label_363870;
        case 0x363874u: goto label_363874;
        case 0x363878u: goto label_363878;
        case 0x36387cu: goto label_36387c;
        case 0x363880u: goto label_363880;
        case 0x363884u: goto label_363884;
        case 0x363888u: goto label_363888;
        case 0x36388cu: goto label_36388c;
        case 0x363890u: goto label_363890;
        case 0x363894u: goto label_363894;
        case 0x363898u: goto label_363898;
        case 0x36389cu: goto label_36389c;
        case 0x3638a0u: goto label_3638a0;
        case 0x3638a4u: goto label_3638a4;
        case 0x3638a8u: goto label_3638a8;
        case 0x3638acu: goto label_3638ac;
        case 0x3638b0u: goto label_3638b0;
        case 0x3638b4u: goto label_3638b4;
        case 0x3638b8u: goto label_3638b8;
        case 0x3638bcu: goto label_3638bc;
        case 0x3638c0u: goto label_3638c0;
        case 0x3638c4u: goto label_3638c4;
        case 0x3638c8u: goto label_3638c8;
        case 0x3638ccu: goto label_3638cc;
        case 0x3638d0u: goto label_3638d0;
        case 0x3638d4u: goto label_3638d4;
        case 0x3638d8u: goto label_3638d8;
        case 0x3638dcu: goto label_3638dc;
        case 0x3638e0u: goto label_3638e0;
        case 0x3638e4u: goto label_3638e4;
        case 0x3638e8u: goto label_3638e8;
        case 0x3638ecu: goto label_3638ec;
        case 0x3638f0u: goto label_3638f0;
        case 0x3638f4u: goto label_3638f4;
        case 0x3638f8u: goto label_3638f8;
        case 0x3638fcu: goto label_3638fc;
        case 0x363900u: goto label_363900;
        case 0x363904u: goto label_363904;
        case 0x363908u: goto label_363908;
        case 0x36390cu: goto label_36390c;
        case 0x363910u: goto label_363910;
        case 0x363914u: goto label_363914;
        case 0x363918u: goto label_363918;
        case 0x36391cu: goto label_36391c;
        case 0x363920u: goto label_363920;
        case 0x363924u: goto label_363924;
        case 0x363928u: goto label_363928;
        case 0x36392cu: goto label_36392c;
        case 0x363930u: goto label_363930;
        case 0x363934u: goto label_363934;
        case 0x363938u: goto label_363938;
        case 0x36393cu: goto label_36393c;
        case 0x363940u: goto label_363940;
        case 0x363944u: goto label_363944;
        case 0x363948u: goto label_363948;
        case 0x36394cu: goto label_36394c;
        case 0x363950u: goto label_363950;
        case 0x363954u: goto label_363954;
        case 0x363958u: goto label_363958;
        case 0x36395cu: goto label_36395c;
        case 0x363960u: goto label_363960;
        case 0x363964u: goto label_363964;
        case 0x363968u: goto label_363968;
        case 0x36396cu: goto label_36396c;
        case 0x363970u: goto label_363970;
        case 0x363974u: goto label_363974;
        case 0x363978u: goto label_363978;
        case 0x36397cu: goto label_36397c;
        case 0x363980u: goto label_363980;
        case 0x363984u: goto label_363984;
        case 0x363988u: goto label_363988;
        case 0x36398cu: goto label_36398c;
        case 0x363990u: goto label_363990;
        case 0x363994u: goto label_363994;
        case 0x363998u: goto label_363998;
        case 0x36399cu: goto label_36399c;
        case 0x3639a0u: goto label_3639a0;
        case 0x3639a4u: goto label_3639a4;
        case 0x3639a8u: goto label_3639a8;
        case 0x3639acu: goto label_3639ac;
        case 0x3639b0u: goto label_3639b0;
        case 0x3639b4u: goto label_3639b4;
        case 0x3639b8u: goto label_3639b8;
        case 0x3639bcu: goto label_3639bc;
        case 0x3639c0u: goto label_3639c0;
        case 0x3639c4u: goto label_3639c4;
        case 0x3639c8u: goto label_3639c8;
        case 0x3639ccu: goto label_3639cc;
        default: break;
    }

    ctx->pc = 0x3636b0u;

label_3636b0:
    // 0x3636b0: 0x80b9210  j           func_2E4840
label_3636b4:
    if (ctx->pc == 0x3636B4u) {
        ctx->pc = 0x3636B4u;
            // 0x3636b4: 0x24840890  addiu       $a0, $a0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2192));
        ctx->pc = 0x3636B8u;
        goto label_3636b8;
    }
    ctx->pc = 0x3636B0u;
    ctx->pc = 0x3636B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3636B0u;
            // 0x3636b4: 0x24840890  addiu       $a0, $a0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002E4840_0x2e4840(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3636B8u;
label_3636b8:
    // 0x3636b8: 0x0  nop
    ctx->pc = 0x3636b8u;
    // NOP
label_3636bc:
    // 0x3636bc: 0x0  nop
    ctx->pc = 0x3636bcu;
    // NOP
label_3636c0:
    // 0x3636c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3636c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3636c4:
    // 0x3636c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3636c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3636c8:
    // 0x3636c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3636c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3636cc:
    // 0x3636cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3636ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3636d0:
    // 0x3636d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3636d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3636d4:
    // 0x3636d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3636d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3636d8:
    // 0x3636d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3636d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3636dc:
    // 0x3636dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3636dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3636e0:
    // 0x3636e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3636e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3636e4:
    // 0x3636e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3636e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3636e8:
    // 0x3636e8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3636e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3636ec:
    // 0x3636ec: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
label_3636f0:
    if (ctx->pc == 0x3636F0u) {
        ctx->pc = 0x3636F0u;
            // 0x3636f0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3636F4u;
        goto label_3636f4;
    }
    ctx->pc = 0x3636ECu;
    {
        const bool branch_taken_0x3636ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3636F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3636ECu;
            // 0x3636f0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3636ec) {
            ctx->pc = 0x363760u;
            goto label_363760;
        }
    }
    ctx->pc = 0x3636F4u;
label_3636f4:
    // 0x3636f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3636f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3636f8:
    // 0x3636f8: 0x50a30016  beql        $a1, $v1, . + 4 + (0x16 << 2)
label_3636fc:
    if (ctx->pc == 0x3636FCu) {
        ctx->pc = 0x3636FCu;
            // 0x3636fc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x363700u;
        goto label_363700;
    }
    ctx->pc = 0x3636F8u;
    {
        const bool branch_taken_0x3636f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3636f8) {
            ctx->pc = 0x3636FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3636F8u;
            // 0x3636fc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x363754u;
            goto label_363754;
        }
    }
    ctx->pc = 0x363700u;
label_363700:
    // 0x363700: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x363700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_363704:
    // 0x363704: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_363708:
    if (ctx->pc == 0x363708u) {
        ctx->pc = 0x363708u;
            // 0x363708: 0x8ea60070  lw          $a2, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->pc = 0x36370Cu;
        goto label_36370c;
    }
    ctx->pc = 0x363704u;
    {
        const bool branch_taken_0x363704 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x363704) {
            ctx->pc = 0x363708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x363704u;
            // 0x363708: 0x8ea60070  lw          $a2, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x363714u;
            goto label_363714;
        }
    }
    ctx->pc = 0x36370Cu;
label_36370c:
    // 0x36370c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_363710:
    if (ctx->pc == 0x363710u) {
        ctx->pc = 0x363714u;
        goto label_363714;
    }
    ctx->pc = 0x36370Cu;
    {
        const bool branch_taken_0x36370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36370c) {
            ctx->pc = 0x3639A8u;
            goto label_3639a8;
        }
    }
    ctx->pc = 0x363714u;
label_363714:
    // 0x363714: 0x10c000a4  beqz        $a2, . + 4 + (0xA4 << 2)
label_363718:
    if (ctx->pc == 0x363718u) {
        ctx->pc = 0x36371Cu;
        goto label_36371c;
    }
    ctx->pc = 0x363714u;
    {
        const bool branch_taken_0x363714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x363714) {
            ctx->pc = 0x3639A8u;
            goto label_3639a8;
        }
    }
    ctx->pc = 0x36371Cu;
label_36371c:
    // 0x36371c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36371cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363720:
    // 0x363720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x363720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363724:
    // 0x363724: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x363724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_363728:
    // 0x363728: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x363728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36372c:
    // 0x36372c: 0x8ea5008c  lw          $a1, 0x8C($s5)
    ctx->pc = 0x36372cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_363730:
    // 0x363730: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x363730u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_363734:
    // 0x363734: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x363734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_363738:
    // 0x363738: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x363738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36373c:
    // 0x36373c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36373cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_363740:
    // 0x363740: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x363740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_363744:
    // 0x363744: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_363748:
    if (ctx->pc == 0x363748u) {
        ctx->pc = 0x363748u;
            // 0x363748: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->pc = 0x36374Cu;
        goto label_36374c;
    }
    ctx->pc = 0x363744u;
    {
        const bool branch_taken_0x363744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x363748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363744u;
            // 0x363748: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x363744) {
            ctx->pc = 0x363724u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_363724;
        }
    }
    ctx->pc = 0x36374Cu;
label_36374c:
    // 0x36374c: 0x10000096  b           . + 4 + (0x96 << 2)
label_363750:
    if (ctx->pc == 0x363750u) {
        ctx->pc = 0x363754u;
        goto label_363754;
    }
    ctx->pc = 0x36374Cu;
    {
        const bool branch_taken_0x36374c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36374c) {
            ctx->pc = 0x3639A8u;
            goto label_3639a8;
        }
    }
    ctx->pc = 0x363754u;
label_363754:
    // 0x363754: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x363754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_363758:
    // 0x363758: 0x320f809  jalr        $t9
label_36375c:
    if (ctx->pc == 0x36375Cu) {
        ctx->pc = 0x363760u;
        goto label_363760;
    }
    ctx->pc = 0x363758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x363760u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x363760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x363760u; }
            if (ctx->pc != 0x363760u) { return; }
        }
        }
    }
    ctx->pc = 0x363760u;
label_363760:
    // 0x363760: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x363760u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_363764:
    // 0x363764: 0x12c00090  beqz        $s6, . + 4 + (0x90 << 2)
label_363768:
    if (ctx->pc == 0x363768u) {
        ctx->pc = 0x36376Cu;
        goto label_36376c;
    }
    ctx->pc = 0x363764u;
    {
        const bool branch_taken_0x363764 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x363764) {
            ctx->pc = 0x3639A8u;
            goto label_3639a8;
        }
    }
    ctx->pc = 0x36376Cu;
label_36376c:
    // 0x36376c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x36376cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363770:
    // 0x363770: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x363770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363774:
    // 0x363774: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x363774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_363778:
    // 0x363778: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x363778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_36377c:
    // 0x36377c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_363780:
    // 0x363780: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x363780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_363784:
    // 0x363784: 0xc0b6e44  jal         func_2DB910
label_363788:
    if (ctx->pc == 0x363788u) {
        ctx->pc = 0x363788u;
            // 0x363788: 0x24844b08  addiu       $a0, $a0, 0x4B08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19208));
        ctx->pc = 0x36378Cu;
        goto label_36378c;
    }
    ctx->pc = 0x363784u;
    SET_GPR_U32(ctx, 31, 0x36378Cu);
    ctx->pc = 0x363788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363784u;
            // 0x363788: 0x24844b08  addiu       $a0, $a0, 0x4B08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB910u;
    if (runtime->hasFunction(0x2DB910u)) {
        auto targetFn = runtime->lookupFunction(0x2DB910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36378Cu; }
        if (ctx->pc != 0x36378Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB910_0x2db910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36378Cu; }
        if (ctx->pc != 0x36378Cu) { return; }
    }
    ctx->pc = 0x36378Cu;
label_36378c:
    // 0x36378c: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x36378cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_363790:
    // 0x363790: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x363790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_363794:
    // 0x363794: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
label_363798:
    if (ctx->pc == 0x363798u) {
        ctx->pc = 0x36379Cu;
        goto label_36379c;
    }
    ctx->pc = 0x363794u;
    {
        const bool branch_taken_0x363794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x363794) {
            ctx->pc = 0x363938u;
            goto label_363938;
        }
    }
    ctx->pc = 0x36379Cu;
label_36379c:
    // 0x36379c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36379cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3637a0:
    // 0x3637a0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_3637a4:
    if (ctx->pc == 0x3637A4u) {
        ctx->pc = 0x3637A8u;
        goto label_3637a8;
    }
    ctx->pc = 0x3637A0u;
    {
        const bool branch_taken_0x3637a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3637a0) {
            ctx->pc = 0x3637E0u;
            goto label_3637e0;
        }
    }
    ctx->pc = 0x3637A8u;
label_3637a8:
    // 0x3637a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3637a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3637ac:
    // 0x3637ac: 0x10620076  beq         $v1, $v0, . + 4 + (0x76 << 2)
label_3637b0:
    if (ctx->pc == 0x3637B0u) {
        ctx->pc = 0x3637B4u;
        goto label_3637b4;
    }
    ctx->pc = 0x3637ACu;
    {
        const bool branch_taken_0x3637ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3637ac) {
            ctx->pc = 0x363988u;
            goto label_363988;
        }
    }
    ctx->pc = 0x3637B4u;
label_3637b4:
    // 0x3637b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3637b8:
    if (ctx->pc == 0x3637B8u) {
        ctx->pc = 0x3637BCu;
        goto label_3637bc;
    }
    ctx->pc = 0x3637B4u;
    {
        const bool branch_taken_0x3637b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3637b4) {
            ctx->pc = 0x3637C8u;
            goto label_3637c8;
        }
    }
    ctx->pc = 0x3637BCu;
label_3637bc:
    // 0x3637bc: 0x10000072  b           . + 4 + (0x72 << 2)
label_3637c0:
    if (ctx->pc == 0x3637C0u) {
        ctx->pc = 0x3637C4u;
        goto label_3637c4;
    }
    ctx->pc = 0x3637BCu;
    {
        const bool branch_taken_0x3637bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3637bc) {
            ctx->pc = 0x363988u;
            goto label_363988;
        }
    }
    ctx->pc = 0x3637C4u;
label_3637c4:
    // 0x3637c4: 0x0  nop
    ctx->pc = 0x3637c4u;
    // NOP
label_3637c8:
    // 0x3637c8: 0xc0d9170  jal         func_3645C0
label_3637cc:
    if (ctx->pc == 0x3637CCu) {
        ctx->pc = 0x3637CCu;
            // 0x3637cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3637D0u;
        goto label_3637d0;
    }
    ctx->pc = 0x3637C8u;
    SET_GPR_U32(ctx, 31, 0x3637D0u);
    ctx->pc = 0x3637CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3637C8u;
            // 0x3637cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3645C0u;
    if (runtime->hasFunction(0x3645C0u)) {
        auto targetFn = runtime->lookupFunction(0x3645C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3637D0u; }
        if (ctx->pc != 0x3637D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003645C0_0x3645c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3637D0u; }
        if (ctx->pc != 0x3637D0u) { return; }
    }
    ctx->pc = 0x3637D0u;
label_3637d0:
    // 0x3637d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3637d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3637d4:
    // 0x3637d4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_3637d8:
    if (ctx->pc == 0x3637D8u) {
        ctx->pc = 0x3637D8u;
            // 0x3637d8: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x3637DCu;
        goto label_3637dc;
    }
    ctx->pc = 0x3637D4u;
    {
        const bool branch_taken_0x3637d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3637D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3637D4u;
            // 0x3637d8: 0xae620070  sw          $v0, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3637d4) {
            ctx->pc = 0x363988u;
            goto label_363988;
        }
    }
    ctx->pc = 0x3637DCu;
label_3637dc:
    // 0x3637dc: 0x0  nop
    ctx->pc = 0x3637dcu;
    // NOP
label_3637e0:
    // 0x3637e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3637e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3637e4:
    // 0x3637e4: 0xc661007c  lwc1        $f1, 0x7C($s3)
    ctx->pc = 0x3637e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3637e8:
    // 0x3637e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3637e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3637ec:
    // 0x3637ec: 0x0  nop
    ctx->pc = 0x3637ecu;
    // NOP
label_3637f0:
    // 0x3637f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3637f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3637f4:
    // 0x3637f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3637f8:
    if (ctx->pc == 0x3637F8u) {
        ctx->pc = 0x3637F8u;
            // 0x3637f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3637FCu;
        goto label_3637fc;
    }
    ctx->pc = 0x3637F4u;
    {
        const bool branch_taken_0x3637f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3637F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3637F4u;
            // 0x3637f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3637f4) {
            ctx->pc = 0x363800u;
            goto label_363800;
        }
    }
    ctx->pc = 0x3637FCu;
label_3637fc:
    // 0x3637fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3637fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363800:
    // 0x363800: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x363800u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_363804:
    // 0x363804: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x363804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_363808:
    // 0x363808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x363808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_36380c:
    // 0x36380c: 0x0  nop
    ctx->pc = 0x36380cu;
    // NOP
label_363810:
    // 0x363810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363814:
    // 0x363814: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_363818:
    if (ctx->pc == 0x363818u) {
        ctx->pc = 0x363818u;
            // 0x363818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36381Cu;
        goto label_36381c;
    }
    ctx->pc = 0x363814u;
    {
        const bool branch_taken_0x363814 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x363818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363814u;
            // 0x363818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363814) {
            ctx->pc = 0x363820u;
            goto label_363820;
        }
    }
    ctx->pc = 0x36381Cu;
label_36381c:
    // 0x36381c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36381cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363820:
    // 0x363820: 0xc0775b8  jal         func_1DD6E0
label_363824:
    if (ctx->pc == 0x363824u) {
        ctx->pc = 0x363824u;
            // 0x363824: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x363828u;
        goto label_363828;
    }
    ctx->pc = 0x363820u;
    SET_GPR_U32(ctx, 31, 0x363828u);
    ctx->pc = 0x363824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363820u;
            // 0x363824: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363828u; }
        if (ctx->pc != 0x363828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363828u; }
        if (ctx->pc != 0x363828u) { return; }
    }
    ctx->pc = 0x363828u;
label_363828:
    // 0x363828: 0xc0775b4  jal         func_1DD6D0
label_36382c:
    if (ctx->pc == 0x36382Cu) {
        ctx->pc = 0x36382Cu;
            // 0x36382c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x363830u;
        goto label_363830;
    }
    ctx->pc = 0x363828u;
    SET_GPR_U32(ctx, 31, 0x363830u);
    ctx->pc = 0x36382Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363828u;
            // 0x36382c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363830u; }
        if (ctx->pc != 0x363830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363830u; }
        if (ctx->pc != 0x363830u) { return; }
    }
    ctx->pc = 0x363830u;
label_363830:
    // 0x363830: 0xc662007c  lwc1        $f2, 0x7C($s3)
    ctx->pc = 0x363830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_363834:
    // 0x363834: 0xc6630088  lwc1        $f3, 0x88($s3)
    ctx->pc = 0x363834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_363838:
    // 0x363838: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x363838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_36383c:
    // 0x36383c: 0x0  nop
    ctx->pc = 0x36383cu;
    // NOP
label_363840:
    // 0x363840: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x363840u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_363844:
    // 0x363844: 0x4600189c  madd.s      $f2, $f3, $f0
    ctx->pc = 0x363844u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_363848:
    // 0x363848: 0xe662007c  swc1        $f2, 0x7C($s3)
    ctx->pc = 0x363848u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_36384c:
    // 0x36384c: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x36384cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_363850:
    // 0x363850: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x363850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363854:
    // 0x363854: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_363858:
    if (ctx->pc == 0x363858u) {
        ctx->pc = 0x36385Cu;
        goto label_36385c;
    }
    ctx->pc = 0x363854u;
    {
        const bool branch_taken_0x363854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363854) {
            ctx->pc = 0x363868u;
            goto label_363868;
        }
    }
    ctx->pc = 0x36385Cu;
label_36385c:
    // 0x36385c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x36385cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_363860:
    // 0x363860: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x363860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_363864:
    // 0x363864: 0xe661007c  swc1        $f1, 0x7C($s3)
    ctx->pc = 0x363864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_363868:
    // 0x363868: 0xc0b6dfc  jal         func_2DB7F0
label_36386c:
    if (ctx->pc == 0x36386Cu) {
        ctx->pc = 0x36386Cu;
            // 0x36386c: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->pc = 0x363870u;
        goto label_363870;
    }
    ctx->pc = 0x363868u;
    SET_GPR_U32(ctx, 31, 0x363870u);
    ctx->pc = 0x36386Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363868u;
            // 0x36386c: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7F0u;
    if (runtime->hasFunction(0x2DB7F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363870u; }
        if (ctx->pc != 0x363870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7F0_0x2db7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363870u; }
        if (ctx->pc != 0x363870u) { return; }
    }
    ctx->pc = 0x363870u;
label_363870:
    // 0x363870: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x363870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_363874:
    // 0x363874: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_363878:
    if (ctx->pc == 0x363878u) {
        ctx->pc = 0x36387Cu;
        goto label_36387c;
    }
    ctx->pc = 0x363874u;
    {
        const bool branch_taken_0x363874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363874) {
            ctx->pc = 0x3638A0u;
            goto label_3638a0;
        }
    }
    ctx->pc = 0x36387Cu;
label_36387c:
    // 0x36387c: 0xc661007c  lwc1        $f1, 0x7C($s3)
    ctx->pc = 0x36387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_363880:
    // 0x363880: 0x3c024292  lui         $v0, 0x4292
    ctx->pc = 0x363880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17042 << 16));
label_363884:
    // 0x363884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x363884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_363888:
    // 0x363888: 0x0  nop
    ctx->pc = 0x363888u;
    // NOP
label_36388c:
    // 0x36388c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36388cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363890:
    // 0x363890: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_363894:
    if (ctx->pc == 0x363894u) {
        ctx->pc = 0x363898u;
        goto label_363898;
    }
    ctx->pc = 0x363890u;
    {
        const bool branch_taken_0x363890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363890) {
            ctx->pc = 0x3638A0u;
            goto label_3638a0;
        }
    }
    ctx->pc = 0x363898u;
label_363898:
    // 0x363898: 0xc0d8e74  jal         func_3639D0
label_36389c:
    if (ctx->pc == 0x36389Cu) {
        ctx->pc = 0x36389Cu;
            // 0x36389c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3638A0u;
        goto label_3638a0;
    }
    ctx->pc = 0x363898u;
    SET_GPR_U32(ctx, 31, 0x3638A0u);
    ctx->pc = 0x36389Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363898u;
            // 0x36389c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3639D0u;
    if (runtime->hasFunction(0x3639D0u)) {
        auto targetFn = runtime->lookupFunction(0x3639D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3638A0u; }
        if (ctx->pc != 0x3638A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003639D0_0x3639d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3638A0u; }
        if (ctx->pc != 0x3638A0u) { return; }
    }
    ctx->pc = 0x3638A0u;
label_3638a0:
    // 0x3638a0: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_3638a4:
    if (ctx->pc == 0x3638A4u) {
        ctx->pc = 0x3638A8u;
        goto label_3638a8;
    }
    ctx->pc = 0x3638A0u;
    {
        const bool branch_taken_0x3638a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3638a0) {
            ctx->pc = 0x3638E8u;
            goto label_3638e8;
        }
    }
    ctx->pc = 0x3638A8u;
label_3638a8:
    // 0x3638a8: 0xc661007c  lwc1        $f1, 0x7C($s3)
    ctx->pc = 0x3638a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3638ac:
    // 0x3638ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3638acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3638b0:
    // 0x3638b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3638b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3638b4:
    // 0x3638b4: 0x0  nop
    ctx->pc = 0x3638b4u;
    // NOP
label_3638b8:
    // 0x3638b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3638b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3638bc:
    // 0x3638bc: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_3638c0:
    if (ctx->pc == 0x3638C0u) {
        ctx->pc = 0x3638C4u;
        goto label_3638c4;
    }
    ctx->pc = 0x3638BCu;
    {
        const bool branch_taken_0x3638bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3638bc) {
            ctx->pc = 0x3638E8u;
            goto label_3638e8;
        }
    }
    ctx->pc = 0x3638C4u;
label_3638c4:
    // 0x3638c4: 0xc07731c  jal         func_1DCC70
label_3638c8:
    if (ctx->pc == 0x3638C8u) {
        ctx->pc = 0x3638C8u;
            // 0x3638c8: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->pc = 0x3638CCu;
        goto label_3638cc;
    }
    ctx->pc = 0x3638C4u;
    SET_GPR_U32(ctx, 31, 0x3638CCu);
    ctx->pc = 0x3638C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3638C4u;
            // 0x3638c8: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3638CCu; }
        if (ctx->pc != 0x3638CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3638CCu; }
        if (ctx->pc != 0x3638CCu) { return; }
    }
    ctx->pc = 0x3638CCu;
label_3638cc:
    // 0x3638cc: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x3638ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_3638d0:
    // 0x3638d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3638d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3638d4:
    // 0x3638d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3638d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3638d8:
    // 0x3638d8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3638d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_3638dc:
    // 0x3638dc: 0x320f809  jalr        $t9
label_3638e0:
    if (ctx->pc == 0x3638E0u) {
        ctx->pc = 0x3638E0u;
            // 0x3638e0: 0x34450ba9  ori         $a1, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->pc = 0x3638E4u;
        goto label_3638e4;
    }
    ctx->pc = 0x3638DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3638E4u);
        ctx->pc = 0x3638E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3638DCu;
            // 0x3638e0: 0x34450ba9  ori         $a1, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3638E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3638E4u; }
            if (ctx->pc != 0x3638E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3638E4u;
label_3638e4:
    // 0x3638e4: 0x0  nop
    ctx->pc = 0x3638e4u;
    // NOP
label_3638e8:
    // 0x3638e8: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_3638ec:
    if (ctx->pc == 0x3638ECu) {
        ctx->pc = 0x3638F0u;
        goto label_3638f0;
    }
    ctx->pc = 0x3638E8u;
    {
        const bool branch_taken_0x3638e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3638e8) {
            ctx->pc = 0x363988u;
            goto label_363988;
        }
    }
    ctx->pc = 0x3638F0u;
label_3638f0:
    // 0x3638f0: 0xc661007c  lwc1        $f1, 0x7C($s3)
    ctx->pc = 0x3638f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3638f4:
    // 0x3638f4: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x3638f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
label_3638f8:
    // 0x3638f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3638f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3638fc:
    // 0x3638fc: 0x0  nop
    ctx->pc = 0x3638fcu;
    // NOP
label_363900:
    // 0x363900: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_363904:
    // 0x363904: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_363908:
    if (ctx->pc == 0x363908u) {
        ctx->pc = 0x36390Cu;
        goto label_36390c;
    }
    ctx->pc = 0x363904u;
    {
        const bool branch_taken_0x363904 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x363904) {
            ctx->pc = 0x363988u;
            goto label_363988;
        }
    }
    ctx->pc = 0x36390Cu;
label_36390c:
    // 0x36390c: 0xc07731c  jal         func_1DCC70
label_363910:
    if (ctx->pc == 0x363910u) {
        ctx->pc = 0x363910u;
            // 0x363910: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->pc = 0x363914u;
        goto label_363914;
    }
    ctx->pc = 0x36390Cu;
    SET_GPR_U32(ctx, 31, 0x363914u);
    ctx->pc = 0x363910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36390Cu;
            // 0x363910: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363914u; }
        if (ctx->pc != 0x363914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363914u; }
        if (ctx->pc != 0x363914u) { return; }
    }
    ctx->pc = 0x363914u;
label_363914:
    // 0x363914: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x363914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_363918:
    // 0x363918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x363918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36391c:
    // 0x36391c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x36391cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_363920:
    // 0x363920: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x363920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_363924:
    // 0x363924: 0x320f809  jalr        $t9
label_363928:
    if (ctx->pc == 0x363928u) {
        ctx->pc = 0x363928u;
            // 0x363928: 0x34450ba9  ori         $a1, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->pc = 0x36392Cu;
        goto label_36392c;
    }
    ctx->pc = 0x363924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36392Cu);
        ctx->pc = 0x363928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363924u;
            // 0x363928: 0x34450ba9  ori         $a1, $v0, 0xBA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2985);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36392Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36392Cu; }
            if (ctx->pc != 0x36392Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36392Cu;
label_36392c:
    // 0x36392c: 0x10000016  b           . + 4 + (0x16 << 2)
label_363930:
    if (ctx->pc == 0x363930u) {
        ctx->pc = 0x363934u;
        goto label_363934;
    }
    ctx->pc = 0x36392Cu;
    {
        const bool branch_taken_0x36392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36392c) {
            ctx->pc = 0x363988u;
            goto label_363988;
        }
    }
    ctx->pc = 0x363934u;
label_363934:
    // 0x363934: 0x0  nop
    ctx->pc = 0x363934u;
    // NOP
label_363938:
    // 0x363938: 0xc0775b8  jal         func_1DD6E0
label_36393c:
    if (ctx->pc == 0x36393Cu) {
        ctx->pc = 0x363940u;
        goto label_363940;
    }
    ctx->pc = 0x363938u;
    SET_GPR_U32(ctx, 31, 0x363940u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363940u; }
        if (ctx->pc != 0x363940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363940u; }
        if (ctx->pc != 0x363940u) { return; }
    }
    ctx->pc = 0x363940u;
label_363940:
    // 0x363940: 0xc0775b4  jal         func_1DD6D0
label_363944:
    if (ctx->pc == 0x363944u) {
        ctx->pc = 0x363944u;
            // 0x363944: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x363948u;
        goto label_363948;
    }
    ctx->pc = 0x363940u;
    SET_GPR_U32(ctx, 31, 0x363948u);
    ctx->pc = 0x363944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363940u;
            // 0x363944: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363948u; }
        if (ctx->pc != 0x363948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363948u; }
        if (ctx->pc != 0x363948u) { return; }
    }
    ctx->pc = 0x363948u;
label_363948:
    // 0x363948: 0xc6610080  lwc1        $f1, 0x80($s3)
    ctx->pc = 0x363948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_36394c:
    // 0x36394c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x36394cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_363950:
    // 0x363950: 0xe6610080  swc1        $f1, 0x80($s3)
    ctx->pc = 0x363950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 128), bits); }
label_363954:
    // 0x363954: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x363954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_363958:
    // 0x363958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x363958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_36395c:
    // 0x36395c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_363960:
    if (ctx->pc == 0x363960u) {
        ctx->pc = 0x363964u;
        goto label_363964;
    }
    ctx->pc = 0x36395Cu;
    {
        const bool branch_taken_0x36395c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36395c) {
            ctx->pc = 0x363978u;
            goto label_363978;
        }
    }
    ctx->pc = 0x363964u;
label_363964:
    // 0x363964: 0xc077350  jal         func_1DCD40
label_363968:
    if (ctx->pc == 0x363968u) {
        ctx->pc = 0x363968u;
            // 0x363968: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->pc = 0x36396Cu;
        goto label_36396c;
    }
    ctx->pc = 0x363964u;
    SET_GPR_U32(ctx, 31, 0x36396Cu);
    ctx->pc = 0x363968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363964u;
            // 0x363968: 0x8e640074  lw          $a0, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD40u;
    if (runtime->hasFunction(0x1DCD40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36396Cu; }
        if (ctx->pc != 0x36396Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCD40_0x1dcd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36396Cu; }
        if (ctx->pc != 0x36396Cu) { return; }
    }
    ctx->pc = 0x36396Cu;
label_36396c:
    // 0x36396c: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x36396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_363970:
    // 0x363970: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_363974:
    if (ctx->pc == 0x363974u) {
        ctx->pc = 0x363978u;
        goto label_363978;
    }
    ctx->pc = 0x363970u;
    {
        const bool branch_taken_0x363970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x363970) {
            ctx->pc = 0x363988u;
            goto label_363988;
        }
    }
    ctx->pc = 0x363978u;
label_363978:
    // 0x363978: 0xc0d9060  jal         func_364180
label_36397c:
    if (ctx->pc == 0x36397Cu) {
        ctx->pc = 0x36397Cu;
            // 0x36397c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363980u;
        goto label_363980;
    }
    ctx->pc = 0x363978u;
    SET_GPR_U32(ctx, 31, 0x363980u);
    ctx->pc = 0x36397Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363978u;
            // 0x36397c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x364180u;
    if (runtime->hasFunction(0x364180u)) {
        auto targetFn = runtime->lookupFunction(0x364180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363980u; }
        if (ctx->pc != 0x363980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00364180_0x364180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363980u; }
        if (ctx->pc != 0x363980u) { return; }
    }
    ctx->pc = 0x363980u;
label_363980:
    // 0x363980: 0xc0d9168  jal         func_3645A0
label_363984:
    if (ctx->pc == 0x363984u) {
        ctx->pc = 0x363984u;
            // 0x363984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363988u;
        goto label_363988;
    }
    ctx->pc = 0x363980u;
    SET_GPR_U32(ctx, 31, 0x363988u);
    ctx->pc = 0x363984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363980u;
            // 0x363984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3645A0u;
    if (runtime->hasFunction(0x3645A0u)) {
        auto targetFn = runtime->lookupFunction(0x3645A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363988u; }
        if (ctx->pc != 0x363988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003645A0_0x3645a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363988u; }
        if (ctx->pc != 0x363988u) { return; }
    }
    ctx->pc = 0x363988u;
label_363988:
    // 0x363988: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x363988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_36398c:
    // 0x36398c: 0xc0b6de0  jal         func_2DB780
label_363990:
    if (ctx->pc == 0x363990u) {
        ctx->pc = 0x363990u;
            // 0x363990: 0x24844af8  addiu       $a0, $a0, 0x4AF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19192));
        ctx->pc = 0x363994u;
        goto label_363994;
    }
    ctx->pc = 0x36398Cu;
    SET_GPR_U32(ctx, 31, 0x363994u);
    ctx->pc = 0x363990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36398Cu;
            // 0x363990: 0x24844af8  addiu       $a0, $a0, 0x4AF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB780u;
    if (runtime->hasFunction(0x2DB780u)) {
        auto targetFn = runtime->lookupFunction(0x2DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363994u; }
        if (ctx->pc != 0x363994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB780_0x2db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363994u; }
        if (ctx->pc != 0x363994u) { return; }
    }
    ctx->pc = 0x363994u;
label_363994:
    // 0x363994: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x363994u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_363998:
    // 0x363998: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x363998u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_36399c:
    // 0x36399c: 0x1460ff75  bnez        $v1, . + 4 + (-0x8B << 2)
label_3639a0:
    if (ctx->pc == 0x3639A0u) {
        ctx->pc = 0x3639A0u;
            // 0x3639a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3639A4u;
        goto label_3639a4;
    }
    ctx->pc = 0x36399Cu;
    {
        const bool branch_taken_0x36399c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3639A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36399Cu;
            // 0x3639a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36399c) {
            ctx->pc = 0x363774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_363774;
        }
    }
    ctx->pc = 0x3639A4u;
label_3639a4:
    // 0x3639a4: 0x0  nop
    ctx->pc = 0x3639a4u;
    // NOP
label_3639a8:
    // 0x3639a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3639a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3639ac:
    // 0x3639ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3639acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3639b0:
    // 0x3639b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3639b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3639b4:
    // 0x3639b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3639b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3639b8:
    // 0x3639b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3639b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3639bc:
    // 0x3639bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3639bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3639c0:
    // 0x3639c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3639c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3639c4:
    // 0x3639c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3639c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3639c8:
    // 0x3639c8: 0x3e00008  jr          $ra
label_3639cc:
    if (ctx->pc == 0x3639CCu) {
        ctx->pc = 0x3639CCu;
            // 0x3639cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3639D0u;
        goto label_fallthrough_0x3639c8;
    }
    ctx->pc = 0x3639C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3639CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3639C8u;
            // 0x3639cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3639c8:
    ctx->pc = 0x3639D0u;
}
