#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00440710
// Address: 0x440710 - 0x440de0
void sub_00440710_0x440710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440710_0x440710");
#endif

    switch (ctx->pc) {
        case 0x440744u: goto label_440744;
        case 0x440750u: goto label_440750;
        case 0x440760u: goto label_440760;
        case 0x440780u: goto label_440780;
        case 0x4407fcu: goto label_4407fc;
        case 0x440880u: goto label_440880;
        case 0x440898u: goto label_440898;
        case 0x4408e4u: goto label_4408e4;
        case 0x440900u: goto label_440900;
        case 0x440920u: goto label_440920;
        case 0x44093cu: goto label_44093c;
        case 0x44094cu: goto label_44094c;
        case 0x4409d0u: goto label_4409d0;
        case 0x440a00u: goto label_440a00;
        case 0x440a1cu: goto label_440a1c;
        case 0x440a3cu: goto label_440a3c;
        case 0x440a58u: goto label_440a58;
        case 0x440a68u: goto label_440a68;
        case 0x440abcu: goto label_440abc;
        case 0x440aecu: goto label_440aec;
        case 0x440b4cu: goto label_440b4c;
        case 0x440b54u: goto label_440b54;
        case 0x440b64u: goto label_440b64;
        case 0x440ba0u: goto label_440ba0;
        case 0x440bf4u: goto label_440bf4;
        case 0x440c24u: goto label_440c24;
        case 0x440cacu: goto label_440cac;
        case 0x440cdcu: goto label_440cdc;
        case 0x440ce8u: goto label_440ce8;
        case 0x440d18u: goto label_440d18;
        case 0x440d40u: goto label_440d40;
        case 0x440d78u: goto label_440d78;
        case 0x440d98u: goto label_440d98;
        default: break;
    }

    ctx->pc = 0x440710u;

    // 0x440710: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x440710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x440714: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x440714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x440718: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x440718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x44071c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x44071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x440720: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x440720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x440724: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x440724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x440728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x440728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x44072c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44072cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x440730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x440730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x440734: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x440734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440738: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x440738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x44073c: 0xc0a8734  jal         func_2A1CD0
    ctx->pc = 0x44073Cu;
    SET_GPR_U32(ctx, 31, 0x440744u);
    ctx->pc = 0x440740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44073Cu;
            // 0x440740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1CD0u;
    if (runtime->hasFunction(0x2A1CD0u)) {
        auto targetFn = runtime->lookupFunction(0x2A1CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440744u; }
        if (ctx->pc != 0x440744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1CD0_0x2a1cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440744u; }
        if (ctx->pc != 0x440744u) { return; }
    }
    ctx->pc = 0x440744u;
label_440744:
    // 0x440744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x440744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440748: 0xc0a87a8  jal         func_2A1EA0
    ctx->pc = 0x440748u;
    SET_GPR_U32(ctx, 31, 0x440750u);
    ctx->pc = 0x44074Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440748u;
            // 0x44074c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1EA0u;
    if (runtime->hasFunction(0x2A1EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2A1EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440750u; }
        if (ctx->pc != 0x440750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1EA0_0x2a1ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440750u; }
        if (ctx->pc != 0x440750u) { return; }
    }
    ctx->pc = 0x440750u;
label_440750:
    // 0x440750: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x440750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x440754: 0x8c440eb0  lw          $a0, 0xEB0($v0)
    ctx->pc = 0x440754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3760)));
    // 0x440758: 0xc0506ac  jal         func_141AB0
    ctx->pc = 0x440758u;
    SET_GPR_U32(ctx, 31, 0x440760u);
    ctx->pc = 0x44075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440758u;
            // 0x44075c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440760u; }
        if (ctx->pc != 0x440760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440760u; }
        if (ctx->pc != 0x440760u) { return; }
    }
    ctx->pc = 0x440760u;
label_440760:
    // 0x440760: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x440760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x440764: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x440764u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x440768: 0x8c518a08  lw          $s1, -0x75F8($v0)
    ctx->pc = 0x440768u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x44076c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x44076cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440770: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x440770u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440774: 0x2673eb70  addiu       $s3, $s3, -0x1490
    ctx->pc = 0x440774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962032));
    // 0x440778: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x440778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44077c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x44077cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_440780:
    // 0x440780: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x440780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x440784: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x440784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
    // 0x440788: 0x8c4589f0  lw          $a1, -0x7610($v0)
    ctx->pc = 0x440788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
    // 0x44078c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x44078cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x440790: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x440790u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440794: 0x24e7eb70  addiu       $a3, $a3, -0x1490
    ctx->pc = 0x440794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962032));
    // 0x440798: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x440798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x44079c: 0x24c6e7b0  addiu       $a2, $a2, -0x1850
    ctx->pc = 0x44079cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961072));
    // 0x4407a0: 0x90a80029  lbu         $t0, 0x29($a1)
    ctx->pc = 0x4407a0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 41)));
    // 0x4407a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4407a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4407a8: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x4407a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4407ac: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x4407acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4407b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4407b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4407b4: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x4407b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x4407b8: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x4407b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4407bc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4407bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4407c0: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x4407c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x4407c4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4407c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x4407c8: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x4407c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x4407cc: 0xae870050  sw          $a3, 0x50($s4)
    ctx->pc = 0x4407ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 7));
    // 0x4407d0: 0xae930064  sw          $s3, 0x64($s4)
    ctx->pc = 0x4407d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 19));
    // 0x4407d4: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x4407d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
    // 0x4407d8: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x4407d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x4407dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4407dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4407e0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x4407e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4407e4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4407e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4407e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4407e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4407ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4407ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4407f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4407f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4407f4: 0xc0575cc  jal         func_15D730
    ctx->pc = 0x4407F4u;
    SET_GPR_U32(ctx, 31, 0x4407FCu);
    ctx->pc = 0x4407F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4407F4u;
            // 0x4407f8: 0x2423021  addu        $a2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4407FCu; }
        if (ctx->pc != 0x4407FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4407FCu; }
        if (ctx->pc != 0x4407FCu) { return; }
    }
    ctx->pc = 0x4407FCu;
label_4407fc:
    // 0x4407fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4407fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x440800: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x440800u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x440804: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x440804u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x440808: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x440808u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x44080c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x44080cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x440810: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x440810u;
    {
        const bool branch_taken_0x440810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x440814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440810u;
            // 0x440814: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440810) {
            ctx->pc = 0x440780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_440780;
        }
    }
    ctx->pc = 0x440818u;
    // 0x440818: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x440818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44081c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x44081cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x440820: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x440820u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x440824: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x440824u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x440828: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x440828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44082c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44082cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x440830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x440830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440834: 0x3e00008  jr          $ra
    ctx->pc = 0x440834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440834u;
            // 0x440838: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44083Cu;
    // 0x44083c: 0x0  nop
    ctx->pc = 0x44083cu;
    // NOP
    // 0x440840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x440840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x440844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x440844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x440848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x440848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44084c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x440850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x440850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440854: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x440854u;
    {
        const bool branch_taken_0x440854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x440858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440854u;
            // 0x440858: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440854) {
            ctx->pc = 0x440898u;
            goto label_440898;
        }
    }
    ctx->pc = 0x44085Cu;
    // 0x44085c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44085cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x440860: 0x2442d330  addiu       $v0, $v0, -0x2CD0
    ctx->pc = 0x440860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955824));
    // 0x440864: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x440864u;
    {
        const bool branch_taken_0x440864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x440868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440864u;
            // 0x440868: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440864) {
            ctx->pc = 0x440880u;
            goto label_440880;
        }
    }
    ctx->pc = 0x44086Cu;
    // 0x44086c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44086cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x440870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x440870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440874: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x440874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x440878: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x440878u;
    SET_GPR_U32(ctx, 31, 0x440880u);
    ctx->pc = 0x44087Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440878u;
            // 0x44087c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440880u; }
        if (ctx->pc != 0x440880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440880u; }
        if (ctx->pc != 0x440880u) { return; }
    }
    ctx->pc = 0x440880u;
label_440880:
    // 0x440880: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x440880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x440884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x440884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x440888: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x440888u;
    {
        const bool branch_taken_0x440888 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x440888) {
            ctx->pc = 0x44088Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440888u;
            // 0x44088c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44089Cu;
            goto label_44089c;
        }
    }
    ctx->pc = 0x440890u;
    // 0x440890: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x440890u;
    SET_GPR_U32(ctx, 31, 0x440898u);
    ctx->pc = 0x440894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440890u;
            // 0x440894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440898u; }
        if (ctx->pc != 0x440898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440898u; }
        if (ctx->pc != 0x440898u) { return; }
    }
    ctx->pc = 0x440898u;
label_440898:
    // 0x440898: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x440898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44089c:
    // 0x44089c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44089cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4408a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4408a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4408a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4408a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4408a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4408A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4408ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4408A8u;
            // 0x4408ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4408B0u;
    // 0x4408b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4408B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4408B8u;
    // 0x4408b8: 0x0  nop
    ctx->pc = 0x4408b8u;
    // NOP
    // 0x4408bc: 0x0  nop
    ctx->pc = 0x4408bcu;
    // NOP
    // 0x4408c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4408c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4408c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4408c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4408c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4408c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4408cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4408ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4408d0: 0x8c840110  lw          $a0, 0x110($a0)
    ctx->pc = 0x4408d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x4408d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4408D4u;
    {
        const bool branch_taken_0x4408d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4408d4) {
            ctx->pc = 0x4408D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4408D4u;
            // 0x4408d8: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4408E8u;
            goto label_4408e8;
        }
    }
    ctx->pc = 0x4408DCu;
    // 0x4408dc: 0xc10c9b4  jal         func_4326D0
    ctx->pc = 0x4408DCu;
    SET_GPR_U32(ctx, 31, 0x4408E4u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4408E4u; }
        if (ctx->pc != 0x4408E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4408E4u; }
        if (ctx->pc != 0x4408E4u) { return; }
    }
    ctx->pc = 0x4408E4u;
label_4408e4:
    // 0x4408e4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x4408e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4408e8:
    // 0x4408e8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4408E8u;
    {
        const bool branch_taken_0x4408e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4408e8) {
            ctx->pc = 0x4408ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4408E8u;
            // 0x4408ec: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440904u;
            goto label_440904;
        }
    }
    ctx->pc = 0x4408F0u;
    // 0x4408f0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4408f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x4408f4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4408f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x4408f8: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x4408F8u;
    SET_GPR_U32(ctx, 31, 0x440900u);
    ctx->pc = 0x4408FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4408F8u;
            // 0x4408fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440900u; }
        if (ctx->pc != 0x440900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440900u; }
        if (ctx->pc != 0x440900u) { return; }
    }
    ctx->pc = 0x440900u;
label_440900:
    // 0x440900: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x440900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_440904:
    // 0x440904: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x440904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x440908: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x440908u;
    {
        const bool branch_taken_0x440908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x440908) {
            ctx->pc = 0x44090Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440908u;
            // 0x44090c: 0x8e050104  lw          $a1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440924u;
            goto label_440924;
        }
    }
    ctx->pc = 0x440910u;
    // 0x440910: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x440910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x440914: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x440914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x440918: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x440918u;
    SET_GPR_U32(ctx, 31, 0x440920u);
    ctx->pc = 0x44091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440918u;
            // 0x44091c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440920u; }
        if (ctx->pc != 0x440920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440920u; }
        if (ctx->pc != 0x440920u) { return; }
    }
    ctx->pc = 0x440920u;
label_440920:
    // 0x440920: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x440920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_440924:
    // 0x440924: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x440924u;
    {
        const bool branch_taken_0x440924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x440924) {
            ctx->pc = 0x440928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440924u;
            // 0x440928: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440940u;
            goto label_440940;
        }
    }
    ctx->pc = 0x44092Cu;
    // 0x44092c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x44092cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x440930: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x440930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x440934: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x440934u;
    SET_GPR_U32(ctx, 31, 0x44093Cu);
    ctx->pc = 0x440938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440934u;
            // 0x440938: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44093Cu; }
        if (ctx->pc != 0x44093Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44093Cu; }
        if (ctx->pc != 0x44093Cu) { return; }
    }
    ctx->pc = 0x44093Cu;
label_44093c:
    // 0x44093c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x44093cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_440940:
    // 0x440940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x440940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440944: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x440944u;
    SET_GPR_U32(ctx, 31, 0x44094Cu);
    ctx->pc = 0x440948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440944u;
            // 0x440948: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44094Cu; }
        if (ctx->pc != 0x44094Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44094Cu; }
        if (ctx->pc != 0x44094Cu) { return; }
    }
    ctx->pc = 0x44094Cu;
label_44094c:
    // 0x44094c: 0x8e040108  lw          $a0, 0x108($s0)
    ctx->pc = 0x44094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x440950: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x440950u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x440954: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x440954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x440958: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x440958u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x44095c: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x44095cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x440960: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x440960u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x440964: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x440964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x440968: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x440968u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x44096c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44096cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x440970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x440970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440974: 0x3e00008  jr          $ra
    ctx->pc = 0x440974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440974u;
            // 0x440978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44097Cu;
    // 0x44097c: 0x0  nop
    ctx->pc = 0x44097cu;
    // NOP
    // 0x440980: 0x3e00008  jr          $ra
    ctx->pc = 0x440980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x440988u;
    // 0x440988: 0x0  nop
    ctx->pc = 0x440988u;
    // NOP
    // 0x44098c: 0x0  nop
    ctx->pc = 0x44098cu;
    // NOP
    // 0x440990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x440990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x440994: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x440994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x440998: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x440998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x44099c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x44099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
    // 0x4409a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4409a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4409a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4409a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4409a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4409a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4409ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4409acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4409b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4409b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4409b4: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x4409b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4409b8: 0x824311ad  lb          $v1, 0x11AD($s2)
    ctx->pc = 0x4409b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4525)));
    // 0x4409bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4409bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4409c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4409c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4409c4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x4409c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4409c8: 0xc075830  jal         func_1D60C0
    ctx->pc = 0x4409C8u;
    SET_GPR_U32(ctx, 31, 0x4409D0u);
    ctx->pc = 0x4409CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4409C8u;
            // 0x4409cc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4409D0u; }
        if (ctx->pc != 0x4409D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4409D0u; }
        if (ctx->pc != 0x4409D0u) { return; }
    }
    ctx->pc = 0x4409D0u;
label_4409d0:
    // 0x4409d0: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x4409d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
    // 0x4409d4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4409d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4409d8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4409D8u;
    {
        const bool branch_taken_0x4409d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4409DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4409D8u;
            // 0x4409dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4409d8) {
            ctx->pc = 0x4409F8u;
            goto label_4409f8;
        }
    }
    ctx->pc = 0x4409E0u;
    // 0x4409e0: 0xc641118c  lwc1        $f1, 0x118C($s2)
    ctx->pc = 0x4409e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4409e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4409e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4409e8: 0x0  nop
    ctx->pc = 0x4409e8u;
    // NOP
    // 0x4409ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4409ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4409f0: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x4409F0u;
    {
        const bool branch_taken_0x4409f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4409f0) {
            ctx->pc = 0x4409F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4409F0u;
            // 0x4409f4: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440A8Cu;
            goto label_440a8c;
        }
    }
    ctx->pc = 0x4409F8u;
label_4409f8:
    // 0x4409f8: 0xc10c9b4  jal         func_4326D0
    ctx->pc = 0x4409F8u;
    SET_GPR_U32(ctx, 31, 0x440A00u);
    ctx->pc = 0x4409FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4409F8u;
            // 0x4409fc: 0x8e840110  lw          $a0, 0x110($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440A00u; }
        if (ctx->pc != 0x440A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440A00u; }
        if (ctx->pc != 0x440A00u) { return; }
    }
    ctx->pc = 0x440A00u;
label_440a00:
    // 0x440a00: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x440a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x440a04: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x440A04u;
    {
        const bool branch_taken_0x440a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x440a04) {
            ctx->pc = 0x440A08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440A04u;
            // 0x440a08: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440A20u;
            goto label_440a20;
        }
    }
    ctx->pc = 0x440A0Cu;
    // 0x440a0c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x440a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x440a10: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x440a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x440a14: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x440A14u;
    SET_GPR_U32(ctx, 31, 0x440A1Cu);
    ctx->pc = 0x440A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440A14u;
            // 0x440a18: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440A1Cu; }
        if (ctx->pc != 0x440A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440A1Cu; }
        if (ctx->pc != 0x440A1Cu) { return; }
    }
    ctx->pc = 0x440A1Cu;
label_440a1c:
    // 0x440a1c: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x440a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_440a20:
    // 0x440a20: 0x8e850100  lw          $a1, 0x100($s4)
    ctx->pc = 0x440a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x440a24: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x440A24u;
    {
        const bool branch_taken_0x440a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x440a24) {
            ctx->pc = 0x440A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440A24u;
            // 0x440a28: 0x8e850104  lw          $a1, 0x104($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440A40u;
            goto label_440a40;
        }
    }
    ctx->pc = 0x440A2Cu;
    // 0x440a2c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x440a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x440a30: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x440a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x440a34: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x440A34u;
    SET_GPR_U32(ctx, 31, 0x440A3Cu);
    ctx->pc = 0x440A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440A34u;
            // 0x440a38: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440A3Cu; }
        if (ctx->pc != 0x440A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440A3Cu; }
        if (ctx->pc != 0x440A3Cu) { return; }
    }
    ctx->pc = 0x440A3Cu;
label_440a3c:
    // 0x440a3c: 0x8e850104  lw          $a1, 0x104($s4)
    ctx->pc = 0x440a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_440a40:
    // 0x440a40: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x440A40u;
    {
        const bool branch_taken_0x440a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x440a40) {
            ctx->pc = 0x440A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440A40u;
            // 0x440a44: 0x26840100  addiu       $a0, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440A5Cu;
            goto label_440a5c;
        }
    }
    ctx->pc = 0x440A48u;
    // 0x440a48: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x440a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x440a4c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x440a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x440a50: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x440A50u;
    SET_GPR_U32(ctx, 31, 0x440A58u);
    ctx->pc = 0x440A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440A50u;
            // 0x440a54: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440A58u; }
        if (ctx->pc != 0x440A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440A58u; }
        if (ctx->pc != 0x440A58u) { return; }
    }
    ctx->pc = 0x440A58u;
label_440a58:
    // 0x440a58: 0x26840100  addiu       $a0, $s4, 0x100
    ctx->pc = 0x440a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_440a5c:
    // 0x440a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x440a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440a60: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x440A60u;
    SET_GPR_U32(ctx, 31, 0x440A68u);
    ctx->pc = 0x440A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440A60u;
            // 0x440a64: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440A68u; }
        if (ctx->pc != 0x440A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440A68u; }
        if (ctx->pc != 0x440A68u) { return; }
    }
    ctx->pc = 0x440A68u;
label_440a68:
    // 0x440a68: 0x8e840108  lw          $a0, 0x108($s4)
    ctx->pc = 0x440a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
    // 0x440a6c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x440a6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x440a70: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x440a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x440a74: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x440a74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x440a78: 0x8e84010c  lw          $a0, 0x10C($s4)
    ctx->pc = 0x440a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
    // 0x440a7c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x440a7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x440a80: 0x3063ffef  andi        $v1, $v1, 0xFFEF
    ctx->pc = 0x440a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65519);
    // 0x440a84: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x440A84u;
    {
        const bool branch_taken_0x440a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440A84u;
            // 0x440a88: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440a84) {
            ctx->pc = 0x440C24u;
            goto label_440c24;
        }
    }
    ctx->pc = 0x440A8Cu;
label_440a8c:
    // 0x440a8c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x440a8cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x440a90: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x440a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x440a94: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x440A94u;
    {
        const bool branch_taken_0x440a94 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x440A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440A94u;
            // 0x440a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440a94) {
            ctx->pc = 0x440AACu;
            goto label_440aac;
        }
    }
    ctx->pc = 0x440A9Cu;
    // 0x440a9c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x440a9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x440aa0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x440AA0u;
    {
        const bool branch_taken_0x440aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x440aa0) {
            ctx->pc = 0x440AACu;
            goto label_440aac;
        }
    }
    ctx->pc = 0x440AA8u;
    // 0x440aa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x440aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_440aac:
    // 0x440aac: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x440AACu;
    {
        const bool branch_taken_0x440aac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x440aac) {
            ctx->pc = 0x440AC8u;
            goto label_440ac8;
        }
    }
    ctx->pc = 0x440AB4u;
    // 0x440ab4: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x440AB4u;
    SET_GPR_U32(ctx, 31, 0x440ABCu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440ABCu; }
        if (ctx->pc != 0x440ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440ABCu; }
        if (ctx->pc != 0x440ABCu) { return; }
    }
    ctx->pc = 0x440ABCu;
label_440abc:
    // 0x440abc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x440ABCu;
    {
        const bool branch_taken_0x440abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440abc) {
            ctx->pc = 0x440AC8u;
            goto label_440ac8;
        }
    }
    ctx->pc = 0x440AC4u;
    // 0x440ac4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x440ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440ac8:
    // 0x440ac8: 0x56200027  bnel        $s1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x440AC8u;
    {
        const bool branch_taken_0x440ac8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x440ac8) {
            ctx->pc = 0x440ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440AC8u;
            // 0x440acc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440B68u;
            goto label_440b68;
        }
    }
    ctx->pc = 0x440AD0u;
    // 0x440ad0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x440ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x440ad4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x440ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x440ad8: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x440ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
    // 0x440adc: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x440ADCu;
    {
        const bool branch_taken_0x440adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x440adc) {
            ctx->pc = 0x440B64u;
            goto label_440b64;
        }
    }
    ctx->pc = 0x440AE4u;
    // 0x440ae4: 0xc0756f4  jal         func_1D5BD0
    ctx->pc = 0x440AE4u;
    SET_GPR_U32(ctx, 31, 0x440AECu);
    ctx->pc = 0x440AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440AE4u;
            // 0x440ae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5BD0u;
    if (runtime->hasFunction(0x1D5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440AECu; }
        if (ctx->pc != 0x440AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5BD0_0x1d5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440AECu; }
        if (ctx->pc != 0x440AECu) { return; }
    }
    ctx->pc = 0x440AECu;
label_440aec:
    // 0x440aec: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x440aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x440af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x440af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x440af4: 0x0  nop
    ctx->pc = 0x440af4u;
    // NOP
    // 0x440af8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x440af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x440afc: 0x45020017  bc1fl       . + 4 + (0x17 << 2)
    ctx->pc = 0x440AFCu;
    {
        const bool branch_taken_0x440afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x440afc) {
            ctx->pc = 0x440B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440AFCu;
            // 0x440b00: 0x8e840110  lw          $a0, 0x110($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440B5Cu;
            goto label_440b5c;
        }
    }
    ctx->pc = 0x440B04u;
    // 0x440b04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x440b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x440b08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x440b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x440b0c: 0x0  nop
    ctx->pc = 0x440b0cu;
    // NOP
    // 0x440b10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x440b10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x440b14: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x440B14u;
    {
        const bool branch_taken_0x440b14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x440b14) {
            ctx->pc = 0x440B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440B14u;
            // 0x440b18: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x440B2Cu;
            goto label_440b2c;
        }
    }
    ctx->pc = 0x440B1Cu;
    // 0x440b1c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x440b1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x440b20: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x440b20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x440b24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x440B24u;
    {
        const bool branch_taken_0x440b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440B24u;
            // 0x440b28: 0x8e840110  lw          $a0, 0x110($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440b24) {
            ctx->pc = 0x440B44u;
            goto label_440b44;
        }
    }
    ctx->pc = 0x440B2Cu;
label_440b2c:
    // 0x440b2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x440b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x440b30: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x440b30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x440b34: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x440b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x440b38: 0x0  nop
    ctx->pc = 0x440b38u;
    // NOP
    // 0x440b3c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x440b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x440b40: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x440b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
label_440b44:
    // 0x440b44: 0xc10c990  jal         func_432640
    ctx->pc = 0x440B44u;
    SET_GPR_U32(ctx, 31, 0x440B4Cu);
    ctx->pc = 0x432640u;
    if (runtime->hasFunction(0x432640u)) {
        auto targetFn = runtime->lookupFunction(0x432640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440B4Cu; }
        if (ctx->pc != 0x440B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432640_0x432640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440B4Cu; }
        if (ctx->pc != 0x440B4Cu) { return; }
    }
    ctx->pc = 0x440B4Cu;
label_440b4c:
    // 0x440b4c: 0xc10c9d8  jal         func_432760
    ctx->pc = 0x440B4Cu;
    SET_GPR_U32(ctx, 31, 0x440B54u);
    ctx->pc = 0x440B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440B4Cu;
            // 0x440b50: 0x8e840110  lw          $a0, 0x110($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440B54u; }
        if (ctx->pc != 0x440B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440B54u; }
        if (ctx->pc != 0x440B54u) { return; }
    }
    ctx->pc = 0x440B54u;
label_440b54:
    // 0x440b54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x440B54u;
    {
        const bool branch_taken_0x440b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x440b54) {
            ctx->pc = 0x440B64u;
            goto label_440b64;
        }
    }
    ctx->pc = 0x440B5Cu;
label_440b5c:
    // 0x440b5c: 0xc10c9b4  jal         func_4326D0
    ctx->pc = 0x440B5Cu;
    SET_GPR_U32(ctx, 31, 0x440B64u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440B64u; }
        if (ctx->pc != 0x440B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440B64u; }
        if (ctx->pc != 0x440B64u) { return; }
    }
    ctx->pc = 0x440B64u;
label_440b64:
    // 0x440b64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x440b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_440b68:
    // 0x440b68: 0x5603002f  bnel        $s0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x440B68u;
    {
        const bool branch_taken_0x440b68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x440b68) {
            ctx->pc = 0x440B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440B68u;
            // 0x440b6c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440C28u;
            goto label_440c28;
        }
    }
    ctx->pc = 0x440B70u;
    // 0x440b70: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x440b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
    // 0x440b74: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x440b74u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x440b78: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x440B78u;
    {
        const bool branch_taken_0x440b78 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x440B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440B78u;
            // 0x440b7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440b78) {
            ctx->pc = 0x440B90u;
            goto label_440b90;
        }
    }
    ctx->pc = 0x440B80u;
    // 0x440b80: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x440b80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x440b84: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x440B84u;
    {
        const bool branch_taken_0x440b84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x440b84) {
            ctx->pc = 0x440B90u;
            goto label_440b90;
        }
    }
    ctx->pc = 0x440B8Cu;
    // 0x440b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x440b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_440b90:
    // 0x440b90: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x440B90u;
    {
        const bool branch_taken_0x440b90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x440b90) {
            ctx->pc = 0x440BACu;
            goto label_440bac;
        }
    }
    ctx->pc = 0x440B98u;
    // 0x440b98: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x440B98u;
    SET_GPR_U32(ctx, 31, 0x440BA0u);
    ctx->pc = 0x440B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440B98u;
            // 0x440b9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440BA0u; }
        if (ctx->pc != 0x440BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440BA0u; }
        if (ctx->pc != 0x440BA0u) { return; }
    }
    ctx->pc = 0x440BA0u;
label_440ba0:
    // 0x440ba0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x440BA0u;
    {
        const bool branch_taken_0x440ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440ba0) {
            ctx->pc = 0x440BACu;
            goto label_440bac;
        }
    }
    ctx->pc = 0x440BA8u;
    // 0x440ba8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x440ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440bac:
    // 0x440bac: 0x5600001b  bnel        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x440BACu;
    {
        const bool branch_taken_0x440bac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x440bac) {
            ctx->pc = 0x440BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440BACu;
            // 0x440bb0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440C1Cu;
            goto label_440c1c;
        }
    }
    ctx->pc = 0x440BB4u;
    // 0x440bb4: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x440bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
    // 0x440bb8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x440bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x440bbc: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x440BBCu;
    {
        const bool branch_taken_0x440bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x440bbc) {
            ctx->pc = 0x440C18u;
            goto label_440c18;
        }
    }
    ctx->pc = 0x440BC4u;
    // 0x440bc4: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x440bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
    // 0x440bc8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x440bc8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x440bcc: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x440BCCu;
    {
        const bool branch_taken_0x440bcc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x440BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440BCCu;
            // 0x440bd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440bcc) {
            ctx->pc = 0x440BE4u;
            goto label_440be4;
        }
    }
    ctx->pc = 0x440BD4u;
    // 0x440bd4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x440bd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x440bd8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x440BD8u;
    {
        const bool branch_taken_0x440bd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x440bd8) {
            ctx->pc = 0x440BE4u;
            goto label_440be4;
        }
    }
    ctx->pc = 0x440BE0u;
    // 0x440be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x440be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_440be4:
    // 0x440be4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x440BE4u;
    {
        const bool branch_taken_0x440be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x440be4) {
            ctx->pc = 0x440C00u;
            goto label_440c00;
        }
    }
    ctx->pc = 0x440BECu;
    // 0x440bec: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x440BECu;
    SET_GPR_U32(ctx, 31, 0x440BF4u);
    ctx->pc = 0x440BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440BECu;
            // 0x440bf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440BF4u; }
        if (ctx->pc != 0x440BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440BF4u; }
        if (ctx->pc != 0x440BF4u) { return; }
    }
    ctx->pc = 0x440BF4u;
label_440bf4:
    // 0x440bf4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x440BF4u;
    {
        const bool branch_taken_0x440bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440bf4) {
            ctx->pc = 0x440C00u;
            goto label_440c00;
        }
    }
    ctx->pc = 0x440BFCu;
    // 0x440bfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x440bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440c00:
    // 0x440c00: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x440C00u;
    {
        const bool branch_taken_0x440c00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x440c00) {
            ctx->pc = 0x440C18u;
            goto label_440c18;
        }
    }
    ctx->pc = 0x440C08u;
    // 0x440c08: 0x8e640e34  lw          $a0, 0xE34($s3)
    ctx->pc = 0x440c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
    // 0x440c0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x440c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x440c10: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x440C10u;
    {
        const bool branch_taken_0x440c10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x440c10) {
            ctx->pc = 0x440C24u;
            goto label_440c24;
        }
    }
    ctx->pc = 0x440C18u;
label_440c18:
    // 0x440c18: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x440c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_440c1c:
    // 0x440c1c: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x440C1Cu;
    SET_GPR_U32(ctx, 31, 0x440C24u);
    ctx->pc = 0x440C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440C1Cu;
            // 0x440c20: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440C24u; }
        if (ctx->pc != 0x440C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440C24u; }
        if (ctx->pc != 0x440C24u) { return; }
    }
    ctx->pc = 0x440C24u;
label_440c24:
    // 0x440c24: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x440c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_440c28:
    // 0x440c28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x440c28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x440c2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x440c2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x440c30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x440c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x440c34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x440c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x440c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x440c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x440C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440C3Cu;
            // 0x440c40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x440C44u;
    // 0x440c44: 0x0  nop
    ctx->pc = 0x440c44u;
    // NOP
    // 0x440c48: 0x0  nop
    ctx->pc = 0x440c48u;
    // NOP
    // 0x440c4c: 0x0  nop
    ctx->pc = 0x440c4cu;
    // NOP
    // 0x440c50: 0x3e00008  jr          $ra
    ctx->pc = 0x440C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x440C58u;
    // 0x440c58: 0x0  nop
    ctx->pc = 0x440c58u;
    // NOP
    // 0x440c5c: 0x0  nop
    ctx->pc = 0x440c5cu;
    // NOP
    // 0x440c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x440c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x440c64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x440c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x440c68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x440c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x440c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x440c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x440c70: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x440c70u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x440c74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x440c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x440c78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x440c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440c7c: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x440c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x440c80: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x440c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x440c84: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x440C84u;
    {
        const bool branch_taken_0x440c84 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x440C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440C84u;
            // 0x440c88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440c84) {
            ctx->pc = 0x440C9Cu;
            goto label_440c9c;
        }
    }
    ctx->pc = 0x440C8Cu;
    // 0x440c8c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x440c8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x440c90: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x440C90u;
    {
        const bool branch_taken_0x440c90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x440c90) {
            ctx->pc = 0x440C9Cu;
            goto label_440c9c;
        }
    }
    ctx->pc = 0x440C98u;
    // 0x440c98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x440c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_440c9c:
    // 0x440c9c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x440C9Cu;
    {
        const bool branch_taken_0x440c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x440c9c) {
            ctx->pc = 0x440CB8u;
            goto label_440cb8;
        }
    }
    ctx->pc = 0x440CA4u;
    // 0x440ca4: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x440CA4u;
    SET_GPR_U32(ctx, 31, 0x440CACu);
    ctx->pc = 0x440CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440CA4u;
            // 0x440ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440CACu; }
        if (ctx->pc != 0x440CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440CACu; }
        if (ctx->pc != 0x440CACu) { return; }
    }
    ctx->pc = 0x440CACu;
label_440cac:
    // 0x440cac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x440CACu;
    {
        const bool branch_taken_0x440cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x440cac) {
            ctx->pc = 0x440CB8u;
            goto label_440cb8;
        }
    }
    ctx->pc = 0x440CB4u;
    // 0x440cb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x440cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_440cb8:
    // 0x440cb8: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x440CB8u;
    {
        const bool branch_taken_0x440cb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x440cb8) {
            ctx->pc = 0x440CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440CB8u;
            // 0x440cbc: 0x8e240110  lw          $a0, 0x110($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440CD4u;
            goto label_440cd4;
        }
    }
    ctx->pc = 0x440CC0u;
    // 0x440cc0: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x440cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x440cc4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x440cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x440cc8: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x440CC8u;
    {
        const bool branch_taken_0x440cc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x440cc8) {
            ctx->pc = 0x440CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440CC8u;
            // 0x440ccc: 0x8e230100  lw          $v1, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440CECu;
            goto label_440cec;
        }
    }
    ctx->pc = 0x440CD0u;
    // 0x440cd0: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x440cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_440cd4:
    // 0x440cd4: 0xc10c9d8  jal         func_432760
    ctx->pc = 0x440CD4u;
    SET_GPR_U32(ctx, 31, 0x440CDCu);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440CDCu; }
        if (ctx->pc != 0x440CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440CDCu; }
        if (ctx->pc != 0x440CDCu) { return; }
    }
    ctx->pc = 0x440CDCu;
label_440cdc:
    // 0x440cdc: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x440cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x440ce0: 0xc10c990  jal         func_432640
    ctx->pc = 0x440CE0u;
    SET_GPR_U32(ctx, 31, 0x440CE8u);
    ctx->pc = 0x440CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440CE0u;
            // 0x440ce4: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432640u;
    if (runtime->hasFunction(0x432640u)) {
        auto targetFn = runtime->lookupFunction(0x432640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440CE8u; }
        if (ctx->pc != 0x440CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432640_0x432640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440CE8u; }
        if (ctx->pc != 0x440CE8u) { return; }
    }
    ctx->pc = 0x440CE8u;
label_440ce8:
    // 0x440ce8: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x440ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_440cec:
    // 0x440cec: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x440CECu;
    {
        const bool branch_taken_0x440cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x440cec) {
            ctx->pc = 0x440CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440CECu;
            // 0x440cf0: 0x8e240108  lw          $a0, 0x108($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440D48u;
            goto label_440d48;
        }
    }
    ctx->pc = 0x440CF4u;
    // 0x440cf4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x440cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x440cf8: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x440cf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x440cfc: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x440cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x440d00: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x440d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x440d04: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x440d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x440d08: 0x26070f00  addiu       $a3, $s0, 0xF00
    ctx->pc = 0x440d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    // 0x440d0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x440d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440d10: 0xc0bb0e8  jal         func_2EC3A0
    ctx->pc = 0x440D10u;
    SET_GPR_U32(ctx, 31, 0x440D18u);
    ctx->pc = 0x440D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440D10u;
            // 0x440d14: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440D18u; }
        if (ctx->pc != 0x440D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440D18u; }
        if (ctx->pc != 0x440D18u) { return; }
    }
    ctx->pc = 0x440D18u;
label_440d18:
    // 0x440d18: 0xae220100  sw          $v0, 0x100($s1)
    ctx->pc = 0x440d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
    // 0x440d1c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x440d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x440d20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x440d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x440d24: 0x920411aa  lbu         $a0, 0x11AA($s0)
    ctx->pc = 0x440d24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
    // 0x440d28: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x440d28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x440d2c: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x440d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x440d30: 0x26070ef0  addiu       $a3, $s0, 0xEF0
    ctx->pc = 0x440d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3824));
    // 0x440d34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x440d34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440d38: 0xc0bb0e8  jal         func_2EC3A0
    ctx->pc = 0x440D38u;
    SET_GPR_U32(ctx, 31, 0x440D40u);
    ctx->pc = 0x440D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440D38u;
            // 0x440d3c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440D40u; }
        if (ctx->pc != 0x440D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440D40u; }
        if (ctx->pc != 0x440D40u) { return; }
    }
    ctx->pc = 0x440D40u;
label_440d40:
    // 0x440d40: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x440d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
    // 0x440d44: 0x8e240108  lw          $a0, 0x108($s1)
    ctx->pc = 0x440d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_440d48:
    // 0x440d48: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x440d48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x440d4c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x440d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x440d50: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x440d50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x440d54: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x440d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x440d58: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x440d58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x440d5c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x440d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x440d60: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x440d60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x440d64: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x440d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x440d68: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x440D68u;
    {
        const bool branch_taken_0x440d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x440d68) {
            ctx->pc = 0x440D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x440D68u;
            // 0x440d6c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x440DBCu;
            goto label_440dbc;
        }
    }
    ctx->pc = 0x440D70u;
    // 0x440d70: 0xc040180  jal         func_100600
    ctx->pc = 0x440D70u;
    SET_GPR_U32(ctx, 31, 0x440D78u);
    ctx->pc = 0x440D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440D70u;
            // 0x440d74: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440D78u; }
        if (ctx->pc != 0x440D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440D78u; }
        if (ctx->pc != 0x440D78u) { return; }
    }
    ctx->pc = 0x440D78u;
label_440d78:
    // 0x440d78: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x440D78u;
    {
        const bool branch_taken_0x440d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x440D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440D78u;
            // 0x440d7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440d78) {
            ctx->pc = 0x440DB4u;
            goto label_440db4;
        }
    }
    ctx->pc = 0x440D80u;
    // 0x440d80: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x440d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x440d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x440d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440d88: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x440d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
    // 0x440d8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x440d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x440d90: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x440D90u;
    SET_GPR_U32(ctx, 31, 0x440D98u);
    ctx->pc = 0x440D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x440D90u;
            // 0x440d94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440D98u; }
        if (ctx->pc != 0x440D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x440D98u; }
        if (ctx->pc != 0x440D98u) { return; }
    }
    ctx->pc = 0x440D98u;
label_440d98:
    // 0x440d98: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x440d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x440d9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x440d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x440da0: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x440da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
    // 0x440da4: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x440da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
    // 0x440da8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x440da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x440dac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x440dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x440db0: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x440db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
label_440db4:
    // 0x440db4: 0xae300028  sw          $s0, 0x28($s1)
    ctx->pc = 0x440db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 16));
    // 0x440db8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x440db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_440dbc:
    // 0x440dbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x440dbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x440dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x440dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x440dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x440dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x440dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x440DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440DC8u;
            // 0x440dcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x440DD0u;
    // 0x440dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x440DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x440DD8u;
    // 0x440dd8: 0x0  nop
    ctx->pc = 0x440dd8u;
    // NOP
    // 0x440ddc: 0x0  nop
    ctx->pc = 0x440ddcu;
    // NOP
}
