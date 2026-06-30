#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00426580
// Address: 0x426580 - 0x4268a0
void sub_00426580_0x426580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426580_0x426580");
#endif

    switch (ctx->pc) {
        case 0x426580u: goto label_426580;
        case 0x426584u: goto label_426584;
        case 0x426588u: goto label_426588;
        case 0x42658cu: goto label_42658c;
        case 0x426590u: goto label_426590;
        case 0x426594u: goto label_426594;
        case 0x426598u: goto label_426598;
        case 0x42659cu: goto label_42659c;
        case 0x4265a0u: goto label_4265a0;
        case 0x4265a4u: goto label_4265a4;
        case 0x4265a8u: goto label_4265a8;
        case 0x4265acu: goto label_4265ac;
        case 0x4265b0u: goto label_4265b0;
        case 0x4265b4u: goto label_4265b4;
        case 0x4265b8u: goto label_4265b8;
        case 0x4265bcu: goto label_4265bc;
        case 0x4265c0u: goto label_4265c0;
        case 0x4265c4u: goto label_4265c4;
        case 0x4265c8u: goto label_4265c8;
        case 0x4265ccu: goto label_4265cc;
        case 0x4265d0u: goto label_4265d0;
        case 0x4265d4u: goto label_4265d4;
        case 0x4265d8u: goto label_4265d8;
        case 0x4265dcu: goto label_4265dc;
        case 0x4265e0u: goto label_4265e0;
        case 0x4265e4u: goto label_4265e4;
        case 0x4265e8u: goto label_4265e8;
        case 0x4265ecu: goto label_4265ec;
        case 0x4265f0u: goto label_4265f0;
        case 0x4265f4u: goto label_4265f4;
        case 0x4265f8u: goto label_4265f8;
        case 0x4265fcu: goto label_4265fc;
        case 0x426600u: goto label_426600;
        case 0x426604u: goto label_426604;
        case 0x426608u: goto label_426608;
        case 0x42660cu: goto label_42660c;
        case 0x426610u: goto label_426610;
        case 0x426614u: goto label_426614;
        case 0x426618u: goto label_426618;
        case 0x42661cu: goto label_42661c;
        case 0x426620u: goto label_426620;
        case 0x426624u: goto label_426624;
        case 0x426628u: goto label_426628;
        case 0x42662cu: goto label_42662c;
        case 0x426630u: goto label_426630;
        case 0x426634u: goto label_426634;
        case 0x426638u: goto label_426638;
        case 0x42663cu: goto label_42663c;
        case 0x426640u: goto label_426640;
        case 0x426644u: goto label_426644;
        case 0x426648u: goto label_426648;
        case 0x42664cu: goto label_42664c;
        case 0x426650u: goto label_426650;
        case 0x426654u: goto label_426654;
        case 0x426658u: goto label_426658;
        case 0x42665cu: goto label_42665c;
        case 0x426660u: goto label_426660;
        case 0x426664u: goto label_426664;
        case 0x426668u: goto label_426668;
        case 0x42666cu: goto label_42666c;
        case 0x426670u: goto label_426670;
        case 0x426674u: goto label_426674;
        case 0x426678u: goto label_426678;
        case 0x42667cu: goto label_42667c;
        case 0x426680u: goto label_426680;
        case 0x426684u: goto label_426684;
        case 0x426688u: goto label_426688;
        case 0x42668cu: goto label_42668c;
        case 0x426690u: goto label_426690;
        case 0x426694u: goto label_426694;
        case 0x426698u: goto label_426698;
        case 0x42669cu: goto label_42669c;
        case 0x4266a0u: goto label_4266a0;
        case 0x4266a4u: goto label_4266a4;
        case 0x4266a8u: goto label_4266a8;
        case 0x4266acu: goto label_4266ac;
        case 0x4266b0u: goto label_4266b0;
        case 0x4266b4u: goto label_4266b4;
        case 0x4266b8u: goto label_4266b8;
        case 0x4266bcu: goto label_4266bc;
        case 0x4266c0u: goto label_4266c0;
        case 0x4266c4u: goto label_4266c4;
        case 0x4266c8u: goto label_4266c8;
        case 0x4266ccu: goto label_4266cc;
        case 0x4266d0u: goto label_4266d0;
        case 0x4266d4u: goto label_4266d4;
        case 0x4266d8u: goto label_4266d8;
        case 0x4266dcu: goto label_4266dc;
        case 0x4266e0u: goto label_4266e0;
        case 0x4266e4u: goto label_4266e4;
        case 0x4266e8u: goto label_4266e8;
        case 0x4266ecu: goto label_4266ec;
        case 0x4266f0u: goto label_4266f0;
        case 0x4266f4u: goto label_4266f4;
        case 0x4266f8u: goto label_4266f8;
        case 0x4266fcu: goto label_4266fc;
        case 0x426700u: goto label_426700;
        case 0x426704u: goto label_426704;
        case 0x426708u: goto label_426708;
        case 0x42670cu: goto label_42670c;
        case 0x426710u: goto label_426710;
        case 0x426714u: goto label_426714;
        case 0x426718u: goto label_426718;
        case 0x42671cu: goto label_42671c;
        case 0x426720u: goto label_426720;
        case 0x426724u: goto label_426724;
        case 0x426728u: goto label_426728;
        case 0x42672cu: goto label_42672c;
        case 0x426730u: goto label_426730;
        case 0x426734u: goto label_426734;
        case 0x426738u: goto label_426738;
        case 0x42673cu: goto label_42673c;
        case 0x426740u: goto label_426740;
        case 0x426744u: goto label_426744;
        case 0x426748u: goto label_426748;
        case 0x42674cu: goto label_42674c;
        case 0x426750u: goto label_426750;
        case 0x426754u: goto label_426754;
        case 0x426758u: goto label_426758;
        case 0x42675cu: goto label_42675c;
        case 0x426760u: goto label_426760;
        case 0x426764u: goto label_426764;
        case 0x426768u: goto label_426768;
        case 0x42676cu: goto label_42676c;
        case 0x426770u: goto label_426770;
        case 0x426774u: goto label_426774;
        case 0x426778u: goto label_426778;
        case 0x42677cu: goto label_42677c;
        case 0x426780u: goto label_426780;
        case 0x426784u: goto label_426784;
        case 0x426788u: goto label_426788;
        case 0x42678cu: goto label_42678c;
        case 0x426790u: goto label_426790;
        case 0x426794u: goto label_426794;
        case 0x426798u: goto label_426798;
        case 0x42679cu: goto label_42679c;
        case 0x4267a0u: goto label_4267a0;
        case 0x4267a4u: goto label_4267a4;
        case 0x4267a8u: goto label_4267a8;
        case 0x4267acu: goto label_4267ac;
        case 0x4267b0u: goto label_4267b0;
        case 0x4267b4u: goto label_4267b4;
        case 0x4267b8u: goto label_4267b8;
        case 0x4267bcu: goto label_4267bc;
        case 0x4267c0u: goto label_4267c0;
        case 0x4267c4u: goto label_4267c4;
        case 0x4267c8u: goto label_4267c8;
        case 0x4267ccu: goto label_4267cc;
        case 0x4267d0u: goto label_4267d0;
        case 0x4267d4u: goto label_4267d4;
        case 0x4267d8u: goto label_4267d8;
        case 0x4267dcu: goto label_4267dc;
        case 0x4267e0u: goto label_4267e0;
        case 0x4267e4u: goto label_4267e4;
        case 0x4267e8u: goto label_4267e8;
        case 0x4267ecu: goto label_4267ec;
        case 0x4267f0u: goto label_4267f0;
        case 0x4267f4u: goto label_4267f4;
        case 0x4267f8u: goto label_4267f8;
        case 0x4267fcu: goto label_4267fc;
        case 0x426800u: goto label_426800;
        case 0x426804u: goto label_426804;
        case 0x426808u: goto label_426808;
        case 0x42680cu: goto label_42680c;
        case 0x426810u: goto label_426810;
        case 0x426814u: goto label_426814;
        case 0x426818u: goto label_426818;
        case 0x42681cu: goto label_42681c;
        case 0x426820u: goto label_426820;
        case 0x426824u: goto label_426824;
        case 0x426828u: goto label_426828;
        case 0x42682cu: goto label_42682c;
        case 0x426830u: goto label_426830;
        case 0x426834u: goto label_426834;
        case 0x426838u: goto label_426838;
        case 0x42683cu: goto label_42683c;
        case 0x426840u: goto label_426840;
        case 0x426844u: goto label_426844;
        case 0x426848u: goto label_426848;
        case 0x42684cu: goto label_42684c;
        case 0x426850u: goto label_426850;
        case 0x426854u: goto label_426854;
        case 0x426858u: goto label_426858;
        case 0x42685cu: goto label_42685c;
        case 0x426860u: goto label_426860;
        case 0x426864u: goto label_426864;
        case 0x426868u: goto label_426868;
        case 0x42686cu: goto label_42686c;
        case 0x426870u: goto label_426870;
        case 0x426874u: goto label_426874;
        case 0x426878u: goto label_426878;
        case 0x42687cu: goto label_42687c;
        case 0x426880u: goto label_426880;
        case 0x426884u: goto label_426884;
        case 0x426888u: goto label_426888;
        case 0x42688cu: goto label_42688c;
        case 0x426890u: goto label_426890;
        case 0x426894u: goto label_426894;
        case 0x426898u: goto label_426898;
        case 0x42689cu: goto label_42689c;
        default: break;
    }

    ctx->pc = 0x426580u;

label_426580:
    // 0x426580: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x426580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_426584:
    // 0x426584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x426584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_426588:
    // 0x426588: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x426588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_42658c:
    // 0x42658c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x42658cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_426590:
    // 0x426590: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x426590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_426594:
    // 0x426594: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x426594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_426598:
    // 0x426598: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x426598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42659c:
    // 0x42659c: 0x2a3a004  sllv        $s4, $v1, $s5
    ctx->pc = 0x42659cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
label_4265a0:
    // 0x4265a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4265a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4265a4:
    // 0x4265a4: 0x2801827  not         $v1, $s4
    ctx->pc = 0x4265a4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 20) | GPR_U64(ctx, 0)));
label_4265a8:
    // 0x4265a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4265a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4265ac:
    // 0x4265ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4265acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4265b0:
    // 0x4265b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4265b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4265b4:
    // 0x4265b4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4265b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4265b8:
    // 0x4265b8: 0x8c8200ec  lw          $v0, 0xEC($a0)
    ctx->pc = 0x4265b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
label_4265bc:
    // 0x4265bc: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x4265bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4265c0:
    // 0x4265c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4265c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4265c4:
    // 0x4265c4: 0xac8200ec  sw          $v0, 0xEC($a0)
    ctx->pc = 0x4265c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 2));
label_4265c8:
    // 0x4265c8: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x4265c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4265cc:
    // 0x4265cc: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
label_4265d0:
    if (ctx->pc == 0x4265D0u) {
        ctx->pc = 0x4265D0u;
            // 0x4265d0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4265D4u;
        goto label_4265d4;
    }
    ctx->pc = 0x4265CCu;
    {
        const bool branch_taken_0x4265cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4265D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4265CCu;
            // 0x4265d0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4265cc) {
            ctx->pc = 0x4267E8u;
            goto label_4267e8;
        }
    }
    ctx->pc = 0x4265D4u;
label_4265d4:
    // 0x4265d4: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x4265d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_4265d8:
    // 0x4265d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4265d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4265dc:
    // 0x4265dc: 0x54620083  bnel        $v1, $v0, . + 4 + (0x83 << 2)
label_4265e0:
    if (ctx->pc == 0x4265E0u) {
        ctx->pc = 0x4265E0u;
            // 0x4265e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4265E4u;
        goto label_4265e4;
    }
    ctx->pc = 0x4265DCu;
    {
        const bool branch_taken_0x4265dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4265dc) {
            ctx->pc = 0x4265E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4265DCu;
            // 0x4265e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4267ECu;
            goto label_4267ec;
        }
    }
    ctx->pc = 0x4265E4u;
label_4265e4:
    // 0x4265e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4265e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4265e8:
    // 0x4265e8: 0xc04f278  jal         func_13C9E0
label_4265ec:
    if (ctx->pc == 0x4265ECu) {
        ctx->pc = 0x4265ECu;
            // 0x4265ec: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x4265F0u;
        goto label_4265f0;
    }
    ctx->pc = 0x4265E8u;
    SET_GPR_U32(ctx, 31, 0x4265F0u);
    ctx->pc = 0x4265ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4265E8u;
            // 0x4265ec: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4265F0u; }
        if (ctx->pc != 0x4265F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4265F0u; }
        if (ctx->pc != 0x4265F0u) { return; }
    }
    ctx->pc = 0x4265F0u;
label_4265f0:
    // 0x4265f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4265f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4265f4:
    // 0x4265f4: 0xc04ce80  jal         func_133A00
label_4265f8:
    if (ctx->pc == 0x4265F8u) {
        ctx->pc = 0x4265F8u;
            // 0x4265f8: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x4265FCu;
        goto label_4265fc;
    }
    ctx->pc = 0x4265F4u;
    SET_GPR_U32(ctx, 31, 0x4265FCu);
    ctx->pc = 0x4265F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4265F4u;
            // 0x4265f8: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4265FCu; }
        if (ctx->pc != 0x4265FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4265FCu; }
        if (ctx->pc != 0x4265FCu) { return; }
    }
    ctx->pc = 0x4265FCu;
label_4265fc:
    // 0x4265fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4265fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_426600:
    // 0x426600: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x426600u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_426604:
    // 0x426604: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x426604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_426608:
    // 0x426608: 0xc07698c  jal         func_1DA630
label_42660c:
    if (ctx->pc == 0x42660Cu) {
        ctx->pc = 0x42660Cu;
            // 0x42660c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426610u;
        goto label_426610;
    }
    ctx->pc = 0x426608u;
    SET_GPR_U32(ctx, 31, 0x426610u);
    ctx->pc = 0x42660Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426608u;
            // 0x42660c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426610u; }
        if (ctx->pc != 0x426610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426610u; }
        if (ctx->pc != 0x426610u) { return; }
    }
    ctx->pc = 0x426610u;
label_426610:
    // 0x426610: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x426610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_426614:
    // 0x426614: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_426618:
    if (ctx->pc == 0x426618u) {
        ctx->pc = 0x42661Cu;
        goto label_42661c;
    }
    ctx->pc = 0x426614u;
    {
        const bool branch_taken_0x426614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x426614) {
            ctx->pc = 0x426624u;
            goto label_426624;
        }
    }
    ctx->pc = 0x42661Cu;
label_42661c:
    // 0x42661c: 0x10000033  b           . + 4 + (0x33 << 2)
label_426620:
    if (ctx->pc == 0x426620u) {
        ctx->pc = 0x426620u;
            // 0x426620: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x426624u;
        goto label_426624;
    }
    ctx->pc = 0x42661Cu;
    {
        const bool branch_taken_0x42661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42661Cu;
            // 0x426620: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42661c) {
            ctx->pc = 0x4266ECu;
            goto label_4266ec;
        }
    }
    ctx->pc = 0x426624u;
label_426624:
    // 0x426624: 0xc0576f4  jal         func_15DBD0
label_426628:
    if (ctx->pc == 0x426628u) {
        ctx->pc = 0x42662Cu;
        goto label_42662c;
    }
    ctx->pc = 0x426624u;
    SET_GPR_U32(ctx, 31, 0x42662Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42662Cu; }
        if (ctx->pc != 0x42662Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42662Cu; }
        if (ctx->pc != 0x42662Cu) { return; }
    }
    ctx->pc = 0x42662Cu;
label_42662c:
    // 0x42662c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x42662cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_426630:
    // 0x426630: 0xc076984  jal         func_1DA610
label_426634:
    if (ctx->pc == 0x426634u) {
        ctx->pc = 0x426634u;
            // 0x426634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426638u;
        goto label_426638;
    }
    ctx->pc = 0x426630u;
    SET_GPR_U32(ctx, 31, 0x426638u);
    ctx->pc = 0x426634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426630u;
            // 0x426634: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426638u; }
        if (ctx->pc != 0x426638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426638u; }
        if (ctx->pc != 0x426638u) { return; }
    }
    ctx->pc = 0x426638u;
label_426638:
    // 0x426638: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x426638u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42663c:
    // 0x42663c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x42663cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_426640:
    // 0x426640: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x426640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_426644:
    // 0x426644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x426644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_426648:
    // 0x426648: 0xc442ffd0  lwc1        $f2, -0x30($v0)
    ctx->pc = 0x426648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42664c:
    // 0x42664c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x42664cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_426650:
    // 0x426650: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x426650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_426654:
    // 0x426654: 0xc441ffd8  lwc1        $f1, -0x28($v0)
    ctx->pc = 0x426654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_426658:
    // 0x426658: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x426658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_42665c:
    // 0x42665c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_426660:
    // 0x426660: 0xc440ffdc  lwc1        $f0, -0x24($v0)
    ctx->pc = 0x426660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_426664:
    // 0x426664: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x426664u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_426668:
    // 0x426668: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x426668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42666c:
    // 0x42666c: 0x8c42ffd4  lw          $v0, -0x2C($v0)
    ctx->pc = 0x42666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967252)));
label_426670:
    // 0x426670: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x426670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_426674:
    // 0x426674: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x426674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_426678:
    // 0x426678: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x426678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42667c:
    // 0x42667c: 0xc04cca0  jal         func_133280
label_426680:
    if (ctx->pc == 0x426680u) {
        ctx->pc = 0x426680u;
            // 0x426680: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x426684u;
        goto label_426684;
    }
    ctx->pc = 0x42667Cu;
    SET_GPR_U32(ctx, 31, 0x426684u);
    ctx->pc = 0x426680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42667Cu;
            // 0x426680: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426684u; }
        if (ctx->pc != 0x426684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426684u; }
        if (ctx->pc != 0x426684u) { return; }
    }
    ctx->pc = 0x426684u;
label_426684:
    // 0x426684: 0xc076980  jal         func_1DA600
label_426688:
    if (ctx->pc == 0x426688u) {
        ctx->pc = 0x426688u;
            // 0x426688: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42668Cu;
        goto label_42668c;
    }
    ctx->pc = 0x426684u;
    SET_GPR_U32(ctx, 31, 0x42668Cu);
    ctx->pc = 0x426688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426684u;
            // 0x426688: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42668Cu; }
        if (ctx->pc != 0x42668Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42668Cu; }
        if (ctx->pc != 0x42668Cu) { return; }
    }
    ctx->pc = 0x42668Cu;
label_42668c:
    // 0x42668c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42668cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_426690:
    // 0x426690: 0xc04cc34  jal         func_1330D0
label_426694:
    if (ctx->pc == 0x426694u) {
        ctx->pc = 0x426694u;
            // 0x426694: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x426698u;
        goto label_426698;
    }
    ctx->pc = 0x426690u;
    SET_GPR_U32(ctx, 31, 0x426698u);
    ctx->pc = 0x426694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426690u;
            // 0x426694: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426698u; }
        if (ctx->pc != 0x426698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426698u; }
        if (ctx->pc != 0x426698u) { return; }
    }
    ctx->pc = 0x426698u;
label_426698:
    // 0x426698: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x426698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_42669c:
    // 0x42669c: 0xc441c848  lwc1        $f1, -0x37B8($v0)
    ctx->pc = 0x42669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4266a0:
    // 0x4266a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4266a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4266a4:
    // 0x4266a4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4266a8:
    if (ctx->pc == 0x4266A8u) {
        ctx->pc = 0x4266A8u;
            // 0x4266a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4266ACu;
        goto label_4266ac;
    }
    ctx->pc = 0x4266A4u;
    {
        const bool branch_taken_0x4266a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4266a4) {
            ctx->pc = 0x4266A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4266A4u;
            // 0x4266a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4266B4u;
            goto label_4266b4;
        }
    }
    ctx->pc = 0x4266ACu;
label_4266ac:
    // 0x4266ac: 0x1000000f  b           . + 4 + (0xF << 2)
label_4266b0:
    if (ctx->pc == 0x4266B0u) {
        ctx->pc = 0x4266B0u;
            // 0x4266b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4266B4u;
        goto label_4266b4;
    }
    ctx->pc = 0x4266ACu;
    {
        const bool branch_taken_0x4266ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4266B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4266ACu;
            // 0x4266b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4266ac) {
            ctx->pc = 0x4266ECu;
            goto label_4266ec;
        }
    }
    ctx->pc = 0x4266B4u;
label_4266b4:
    // 0x4266b4: 0xc07697c  jal         func_1DA5F0
label_4266b8:
    if (ctx->pc == 0x4266B8u) {
        ctx->pc = 0x4266BCu;
        goto label_4266bc;
    }
    ctx->pc = 0x4266B4u;
    SET_GPR_U32(ctx, 31, 0x4266BCu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4266BCu; }
        if (ctx->pc != 0x4266BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4266BCu; }
        if (ctx->pc != 0x4266BCu) { return; }
    }
    ctx->pc = 0x4266BCu;
label_4266bc:
    // 0x4266bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4266bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4266c0:
    // 0x4266c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4266c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4266c4:
    // 0x4266c4: 0xc04cd60  jal         func_133580
label_4266c8:
    if (ctx->pc == 0x4266C8u) {
        ctx->pc = 0x4266C8u;
            // 0x4266c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4266CCu;
        goto label_4266cc;
    }
    ctx->pc = 0x4266C4u;
    SET_GPR_U32(ctx, 31, 0x4266CCu);
    ctx->pc = 0x4266C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4266C4u;
            // 0x4266c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4266CCu; }
        if (ctx->pc != 0x4266CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4266CCu; }
        if (ctx->pc != 0x4266CCu) { return; }
    }
    ctx->pc = 0x4266CCu;
label_4266cc:
    // 0x4266cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4266ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4266d0:
    // 0x4266d0: 0xc04c650  jal         func_131940
label_4266d4:
    if (ctx->pc == 0x4266D4u) {
        ctx->pc = 0x4266D4u;
            // 0x4266d4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4266D8u;
        goto label_4266d8;
    }
    ctx->pc = 0x4266D0u;
    SET_GPR_U32(ctx, 31, 0x4266D8u);
    ctx->pc = 0x4266D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4266D0u;
            // 0x4266d4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4266D8u; }
        if (ctx->pc != 0x4266D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4266D8u; }
        if (ctx->pc != 0x4266D8u) { return; }
    }
    ctx->pc = 0x4266D8u;
label_4266d8:
    // 0x4266d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4266d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4266dc:
    // 0x4266dc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4266dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4266e0:
    // 0x4266e0: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x4266e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_4266e4:
    // 0x4266e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4266e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4266e8:
    // 0x4266e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4266e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4266ec:
    // 0x4266ec: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4266ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4266f0:
    // 0x4266f0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4266f4:
    if (ctx->pc == 0x4266F4u) {
        ctx->pc = 0x4266F4u;
            // 0x4266f4: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4266F8u;
        goto label_4266f8;
    }
    ctx->pc = 0x4266F0u;
    {
        const bool branch_taken_0x4266f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4266F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4266F0u;
            // 0x4266f4: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4266f0) {
            ctx->pc = 0x426700u;
            goto label_426700;
        }
    }
    ctx->pc = 0x4266F8u;
label_4266f8:
    // 0x4266f8: 0x1000003c  b           . + 4 + (0x3C << 2)
label_4266fc:
    if (ctx->pc == 0x4266FCu) {
        ctx->pc = 0x4266FCu;
            // 0x4266fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426700u;
        goto label_426700;
    }
    ctx->pc = 0x4266F8u;
    {
        const bool branch_taken_0x4266f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4266FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4266F8u;
            // 0x4266fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4266f8) {
            ctx->pc = 0x4267ECu;
            goto label_4267ec;
        }
    }
    ctx->pc = 0x426700u;
label_426700:
    // 0x426700: 0x8e6400ec  lw          $a0, 0xEC($s3)
    ctx->pc = 0x426700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_426704:
    // 0x426704: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x426704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_426708:
    // 0x426708: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x426708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_42670c:
    // 0x42670c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42670cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_426710:
    // 0x426710: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x426710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_426714:
    // 0x426714: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x426714u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_426718:
    // 0x426718: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x426718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
label_42671c:
    // 0x42671c: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x42671cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_426720:
    // 0x426720: 0xae6400ec  sw          $a0, 0xEC($s3)
    ctx->pc = 0x426720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 4));
label_426724:
    // 0x426724: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x426724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_426728:
    // 0x426728: 0x8ccae3c0  lw          $t2, -0x1C40($a2)
    ctx->pc = 0x426728u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960064)));
label_42672c:
    // 0x42672c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x42672cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_426730:
    // 0x426730: 0x8cace3d8  lw          $t4, -0x1C28($a1)
    ctx->pc = 0x426730u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_426734:
    // 0x426734: 0xa5880  sll         $t3, $t2, 2
    ctx->pc = 0x426734u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_426738:
    // 0x426738: 0x8c66e360  lw          $a2, -0x1CA0($v1)
    ctx->pc = 0x426738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_42673c:
    // 0x42673c: 0x8c4ae3b0  lw          $t2, -0x1C50($v0)
    ctx->pc = 0x42673cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_426740:
    // 0x426740: 0xc6180  sll         $t4, $t4, 6
    ctx->pc = 0x426740u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
label_426744:
    // 0x426744: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x426744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_426748:
    // 0x426748: 0xcca821  addu        $s5, $a2, $t4
    ctx->pc = 0x426748u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_42674c:
    // 0x42674c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42674cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_426750:
    // 0x426750: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x426750u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_426754:
    // 0x426754: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x426754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_426758:
    // 0x426758: 0xad550000  sw          $s5, 0x0($t2)
    ctx->pc = 0x426758u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 21));
label_42675c:
    // 0x42675c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42675cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426760:
    // 0x426760: 0x8d29e3d8  lw          $t1, -0x1C28($t1)
    ctx->pc = 0x426760u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960088)));
label_426764:
    // 0x426764: 0x8d08e378  lw          $t0, -0x1C88($t0)
    ctx->pc = 0x426764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294959992)));
label_426768:
    // 0x426768: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x426768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_42676c:
    // 0x42676c: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x42676cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_426770:
    // 0x426770: 0x109a021  addu        $s4, $t0, $t1
    ctx->pc = 0x426770u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_426774:
    // 0x426774: 0x8b4021  addu        $t0, $a0, $t3
    ctx->pc = 0x426774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_426778:
    // 0x426778: 0xad140000  sw          $s4, 0x0($t0)
    ctx->pc = 0x426778u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 20));
label_42677c:
    // 0x42677c: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x42677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_426780:
    // 0x426780: 0x8e480028  lw          $t0, 0x28($s2)
    ctx->pc = 0x426780u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_426784:
    // 0x426784: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x426784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_426788:
    // 0x426788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x426788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42678c:
    // 0x42678c: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x42678cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_426790:
    // 0x426790: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x426790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_426794:
    // 0x426794: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x426794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_426798:
    // 0x426798: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x426798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_42679c:
    // 0x42679c: 0xc04e4a4  jal         func_139290
label_4267a0:
    if (ctx->pc == 0x4267A0u) {
        ctx->pc = 0x4267A0u;
            // 0x4267a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4267A4u;
        goto label_4267a4;
    }
    ctx->pc = 0x42679Cu;
    SET_GPR_U32(ctx, 31, 0x4267A4u);
    ctx->pc = 0x4267A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42679Cu;
            // 0x4267a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4267A4u; }
        if (ctx->pc != 0x4267A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4267A4u; }
        if (ctx->pc != 0x4267A4u) { return; }
    }
    ctx->pc = 0x4267A4u;
label_4267a4:
    // 0x4267a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4267a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4267a8:
    // 0x4267a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4267a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4267ac:
    // 0x4267ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4267acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4267b0:
    // 0x4267b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4267b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4267b4:
    // 0x4267b4: 0xc04cd60  jal         func_133580
label_4267b8:
    if (ctx->pc == 0x4267B8u) {
        ctx->pc = 0x4267B8u;
            // 0x4267b8: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x4267BCu;
        goto label_4267bc;
    }
    ctx->pc = 0x4267B4u;
    SET_GPR_U32(ctx, 31, 0x4267BCu);
    ctx->pc = 0x4267B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4267B4u;
            // 0x4267b8: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4267BCu; }
        if (ctx->pc != 0x4267BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4267BCu; }
        if (ctx->pc != 0x4267BCu) { return; }
    }
    ctx->pc = 0x4267BCu;
label_4267bc:
    // 0x4267bc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4267bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4267c0:
    // 0x4267c0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4267c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4267c4:
    // 0x4267c4: 0x320f809  jalr        $t9
label_4267c8:
    if (ctx->pc == 0x4267C8u) {
        ctx->pc = 0x4267C8u;
            // 0x4267c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4267CCu;
        goto label_4267cc;
    }
    ctx->pc = 0x4267C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4267CCu);
        ctx->pc = 0x4267C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4267C4u;
            // 0x4267c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4267CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4267CCu; }
            if (ctx->pc != 0x4267CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4267CCu;
label_4267cc:
    // 0x4267cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4267ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4267d0:
    // 0x4267d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4267d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4267d4:
    // 0x4267d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4267d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4267d8:
    // 0x4267d8: 0xc054fd4  jal         func_153F50
label_4267dc:
    if (ctx->pc == 0x4267DCu) {
        ctx->pc = 0x4267DCu;
            // 0x4267dc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4267E0u;
        goto label_4267e0;
    }
    ctx->pc = 0x4267D8u;
    SET_GPR_U32(ctx, 31, 0x4267E0u);
    ctx->pc = 0x4267DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4267D8u;
            // 0x4267dc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4267E0u; }
        if (ctx->pc != 0x4267E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4267E0u; }
        if (ctx->pc != 0x4267E0u) { return; }
    }
    ctx->pc = 0x4267E0u;
label_4267e0:
    // 0x4267e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4267e4:
    if (ctx->pc == 0x4267E4u) {
        ctx->pc = 0x4267E4u;
            // 0x4267e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4267E8u;
        goto label_4267e8;
    }
    ctx->pc = 0x4267E0u;
    {
        const bool branch_taken_0x4267e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4267E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4267E0u;
            // 0x4267e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4267e0) {
            ctx->pc = 0x4267ECu;
            goto label_4267ec;
        }
    }
    ctx->pc = 0x4267E8u;
label_4267e8:
    // 0x4267e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4267e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4267ec:
    // 0x4267ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4267ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4267f0:
    // 0x4267f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4267f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4267f4:
    // 0x4267f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4267f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4267f8:
    // 0x4267f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4267f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4267fc:
    // 0x4267fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4267fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_426800:
    // 0x426800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x426800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_426804:
    // 0x426804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x426804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_426808:
    // 0x426808: 0x3e00008  jr          $ra
label_42680c:
    if (ctx->pc == 0x42680Cu) {
        ctx->pc = 0x42680Cu;
            // 0x42680c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x426810u;
        goto label_426810;
    }
    ctx->pc = 0x426808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42680Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426808u;
            // 0x42680c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426810u;
label_426810:
    // 0x426810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x426810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_426814:
    // 0x426814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x426814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_426818:
    // 0x426818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x426818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42681c:
    // 0x42681c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_426820:
    // 0x426820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x426820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_426824:
    // 0x426824: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_426828:
    if (ctx->pc == 0x426828u) {
        ctx->pc = 0x426828u;
            // 0x426828: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42682Cu;
        goto label_42682c;
    }
    ctx->pc = 0x426824u;
    {
        const bool branch_taken_0x426824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x426828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426824u;
            // 0x426828: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426824) {
            ctx->pc = 0x426880u;
            goto label_426880;
        }
    }
    ctx->pc = 0x42682Cu;
label_42682c:
    // 0x42682c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42682cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_426830:
    // 0x426830: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x426830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_426834:
    // 0x426834: 0x2463be60  addiu       $v1, $v1, -0x41A0
    ctx->pc = 0x426834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950496));
label_426838:
    // 0x426838: 0x2442be98  addiu       $v0, $v0, -0x4168
    ctx->pc = 0x426838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950552));
label_42683c:
    // 0x42683c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42683cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_426840:
    // 0x426840: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_426844:
    if (ctx->pc == 0x426844u) {
        ctx->pc = 0x426844u;
            // 0x426844: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x426848u;
        goto label_426848;
    }
    ctx->pc = 0x426840u;
    {
        const bool branch_taken_0x426840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x426844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426840u;
            // 0x426844: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426840) {
            ctx->pc = 0x426868u;
            goto label_426868;
        }
    }
    ctx->pc = 0x426848u;
label_426848:
    // 0x426848: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x426848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_42684c:
    // 0x42684c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42684cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_426850:
    // 0x426850: 0x2463bf10  addiu       $v1, $v1, -0x40F0
    ctx->pc = 0x426850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950672));
label_426854:
    // 0x426854: 0x2442bf48  addiu       $v0, $v0, -0x40B8
    ctx->pc = 0x426854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950728));
label_426858:
    // 0x426858: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x426858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_42685c:
    // 0x42685c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42685cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_426860:
    // 0x426860: 0xc109a28  jal         func_4268A0
label_426864:
    if (ctx->pc == 0x426864u) {
        ctx->pc = 0x426864u;
            // 0x426864: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x426868u;
        goto label_426868;
    }
    ctx->pc = 0x426860u;
    SET_GPR_U32(ctx, 31, 0x426868u);
    ctx->pc = 0x426864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426860u;
            // 0x426864: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4268A0u;
    if (runtime->hasFunction(0x4268A0u)) {
        auto targetFn = runtime->lookupFunction(0x4268A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426868u; }
        if (ctx->pc != 0x426868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004268A0_0x4268a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426868u; }
        if (ctx->pc != 0x426868u) { return; }
    }
    ctx->pc = 0x426868u;
label_426868:
    // 0x426868: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x426868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_42686c:
    // 0x42686c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42686cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_426870:
    // 0x426870: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_426874:
    if (ctx->pc == 0x426874u) {
        ctx->pc = 0x426874u;
            // 0x426874: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426878u;
        goto label_426878;
    }
    ctx->pc = 0x426870u;
    {
        const bool branch_taken_0x426870 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x426870) {
            ctx->pc = 0x426874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x426870u;
            // 0x426874: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x426884u;
            goto label_426884;
        }
    }
    ctx->pc = 0x426878u;
label_426878:
    // 0x426878: 0xc0400a8  jal         func_1002A0
label_42687c:
    if (ctx->pc == 0x42687Cu) {
        ctx->pc = 0x42687Cu;
            // 0x42687c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x426880u;
        goto label_426880;
    }
    ctx->pc = 0x426878u;
    SET_GPR_U32(ctx, 31, 0x426880u);
    ctx->pc = 0x42687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x426878u;
            // 0x42687c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426880u; }
        if (ctx->pc != 0x426880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x426880u; }
        if (ctx->pc != 0x426880u) { return; }
    }
    ctx->pc = 0x426880u;
label_426880:
    // 0x426880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x426880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_426884:
    // 0x426884: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x426884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_426888:
    // 0x426888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x426888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42688c:
    // 0x42688c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42688cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_426890:
    // 0x426890: 0x3e00008  jr          $ra
label_426894:
    if (ctx->pc == 0x426894u) {
        ctx->pc = 0x426894u;
            // 0x426894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x426898u;
        goto label_426898;
    }
    ctx->pc = 0x426890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x426890u;
            // 0x426894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x426898u;
label_426898:
    // 0x426898: 0x0  nop
    ctx->pc = 0x426898u;
    // NOP
label_42689c:
    // 0x42689c: 0x0  nop
    ctx->pc = 0x42689cu;
    // NOP
}
