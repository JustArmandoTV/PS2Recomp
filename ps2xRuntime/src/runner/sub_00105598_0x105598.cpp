#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00105598
// Address: 0x105598 - 0x1058c8
void sub_00105598_0x105598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105598_0x105598");
#endif

    switch (ctx->pc) {
        case 0x1055dcu: goto label_1055dc;
        case 0x1055e8u: goto label_1055e8;
        case 0x10561cu: goto label_10561c;
        case 0x105668u: goto label_105668;
        case 0x10568cu: goto label_10568c;
        case 0x105700u: goto label_105700;
        case 0x105730u: goto label_105730;
        case 0x105764u: goto label_105764;
        case 0x10578cu: goto label_10578c;
        case 0x1057b8u: goto label_1057b8;
        case 0x1057f0u: goto label_1057f0;
        case 0x10581cu: goto label_10581c;
        case 0x105848u: goto label_105848;
        case 0x105874u: goto label_105874;
        default: break;
    }

    ctx->pc = 0x105598u;

    // 0x105598: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x105598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x10559c: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x10559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x1055a0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1055a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1055a4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1055a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1055a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1055a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1055acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055b0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1055b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1055b4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1055b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1055b8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1055b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1055bc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1055bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055c0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1055c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1055c4: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x1055c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x1055c8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1055c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x1055cc: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x1055ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x1055d0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1055d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1055d4: 0xc041f06  jal         func_107C18
    ctx->pc = 0x1055D4u;
    SET_GPR_U32(ctx, 31, 0x1055DCu);
    ctx->pc = 0x1055D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1055D4u;
            // 0x1055d8: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107C18u;
    if (runtime->hasFunction(0x107C18u)) {
        auto targetFn = runtime->lookupFunction(0x107C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055DCu; }
        if (ctx->pc != 0x1055DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107C18_0x107c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055DCu; }
        if (ctx->pc != 0x1055DCu) { return; }
    }
    ctx->pc = 0x1055DCu;
label_1055dc:
    // 0x1055dc: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1055DCu;
    {
        const bool branch_taken_0x1055dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1055E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1055DCu;
            // 0x1055e0: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055dc) {
            ctx->pc = 0x1058A0u;
            goto label_1058a0;
        }
    }
    ctx->pc = 0x1055E4u;
    // 0x1055e4: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1055e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_1055e8:
    // 0x1055e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1055e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1055ec: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x1055ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1055f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1055F0u;
    {
        const bool branch_taken_0x1055f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1055f0) {
            ctx->pc = 0x1055F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1055F0u;
            // 0x1055f4: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105600u;
            goto label_105600;
        }
    }
    ctx->pc = 0x1055F8u;
    // 0x1055f8: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1055F8u;
    {
        const bool branch_taken_0x1055f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1055FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1055F8u;
            // 0x1055fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1055f8) {
            ctx->pc = 0x10589Cu;
            goto label_10589c;
        }
    }
    ctx->pc = 0x105600u;
label_105600:
    // 0x105600: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x105600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x105604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105608: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x105608u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10560c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x10560cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x105610: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x105610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x105614: 0xc041a96  jal         func_106A58
    ctx->pc = 0x105614u;
    SET_GPR_U32(ctx, 31, 0x10561Cu);
    ctx->pc = 0x105618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105614u;
            // 0x105618: 0xac4006dc  sw          $zero, 0x6DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A58u;
    if (runtime->hasFunction(0x106A58u)) {
        auto targetFn = runtime->lookupFunction(0x106A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10561Cu; }
        if (ctx->pc != 0x10561Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A58_0x106a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10561Cu; }
        if (ctx->pc != 0x10561Cu) { return; }
    }
    ctx->pc = 0x10561Cu;
label_10561c:
    // 0x10561c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105620: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x105620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x105624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105624u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105628: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x105628u;
    {
        const bool branch_taken_0x105628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10562Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105628u;
            // 0x10562c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105628) {
            ctx->pc = 0x1056B4u;
            goto label_1056b4;
        }
    }
    ctx->pc = 0x105630u;
    // 0x105630: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x105630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x105634: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105634u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105638: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x105638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x10563c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x10563Cu;
    {
        const bool branch_taken_0x10563c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10563Cu;
            // 0x105640: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10563c) {
            ctx->pc = 0x1056B8u;
            goto label_1056b8;
        }
    }
    ctx->pc = 0x105644u;
    // 0x105644: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x105644u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x105648: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x105648u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x10564c: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x10564cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x105650: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x105650u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x105654: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x105654u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x105658: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x105658u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x10565c: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x10565cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x105660: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x105660u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x105664: 0x0  nop
    ctx->pc = 0x105664u;
    // NOP
label_105668:
    // 0x105668: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x105668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x10566c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10566Cu;
    {
        const bool branch_taken_0x10566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10566c) {
            ctx->pc = 0x105670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10566Cu;
            // 0x105670: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105690u;
            goto label_105690;
        }
    }
    ctx->pc = 0x105674u;
    // 0x105674: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x105674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x105678: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x105678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10567c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10567Cu;
    {
        const bool branch_taken_0x10567c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10567c) {
            ctx->pc = 0x105680u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10567Cu;
            // 0x105680: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105690u;
            goto label_105690;
        }
    }
    ctx->pc = 0x105684u;
    // 0x105684: 0xc0427de  jal         func_109F78
    ctx->pc = 0x105684u;
    SET_GPR_U32(ctx, 31, 0x10568Cu);
    ctx->pc = 0x105688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105684u;
            // 0x105688: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109F78u;
    if (runtime->hasFunction(0x109F78u)) {
        auto targetFn = runtime->lookupFunction(0x109F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10568Cu; }
        if (ctx->pc != 0x10568Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00109F78_0x109f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10568Cu; }
        if (ctx->pc != 0x10568Cu) { return; }
    }
    ctx->pc = 0x10568Cu;
label_10568c:
    // 0x10568c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_105690:
    // 0x105690: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x105690u;
    {
        const bool branch_taken_0x105690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105690) {
            ctx->pc = 0x1056F8u;
            goto label_1056f8;
        }
    }
    ctx->pc = 0x105698u;
    // 0x105698: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x105698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10569c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10569Cu;
    {
        const bool branch_taken_0x10569c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10569Cu;
            // 0x1056a0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10569c) {
            ctx->pc = 0x1056B8u;
            goto label_1056b8;
        }
    }
    ctx->pc = 0x1056A4u;
    // 0x1056a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1056a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1056a8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1056a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1056ac: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1056ACu;
    {
        const bool branch_taken_0x1056ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1056ac) {
            ctx->pc = 0x105668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105668;
        }
    }
    ctx->pc = 0x1056B4u;
label_1056b4:
    // 0x1056b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1056b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1056b8:
    // 0x1056b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1056b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1056bc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1056bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1056c0: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x1056c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x1056c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1056c4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1056c8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1056c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1056cc: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1056ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1056d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1056d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1056d4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1056D4u;
    {
        const bool branch_taken_0x1056d4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1056D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1056D4u;
            // 0x1056d8: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056d4) {
            ctx->pc = 0x105708u;
            goto label_105708;
        }
    }
    ctx->pc = 0x1056DCu;
    // 0x1056dc: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x1056dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1056e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1056E0u;
    {
        const bool branch_taken_0x1056e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1056E0u;
            // 0x1056e4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056e0) {
            ctx->pc = 0x1056F0u;
            goto label_1056f0;
        }
    }
    ctx->pc = 0x1056E8u;
    // 0x1056e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1056E8u;
    {
        const bool branch_taken_0x1056e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1056E8u;
            // 0x1056ec: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056e8) {
            ctx->pc = 0x10570Cu;
            goto label_10570c;
        }
    }
    ctx->pc = 0x1056F0u;
label_1056f0:
    // 0x1056f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1056F0u;
    {
        const bool branch_taken_0x1056f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1056F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1056F0u;
            // 0x1056f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1056f0) {
            ctx->pc = 0x10570Cu;
            goto label_10570c;
        }
    }
    ctx->pc = 0x1056F8u;
label_1056f8:
    // 0x1056f8: 0xc042dbc  jal         func_10B6F0
    ctx->pc = 0x1056F8u;
    SET_GPR_U32(ctx, 31, 0x105700u);
    ctx->pc = 0x10B6F0u;
    if (runtime->hasFunction(0x10B6F0u)) {
        auto targetFn = runtime->lookupFunction(0x10B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105700u; }
        if (ctx->pc != 0x105700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B6F0_0x10b6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105700u; }
        if (ctx->pc != 0x105700u) { return; }
    }
    ctx->pc = 0x105700u;
label_105700:
    // 0x105700: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x105700u;
    {
        const bool branch_taken_0x105700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105700u;
            // 0x105704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105700) {
            ctx->pc = 0x105734u;
            goto label_105734;
        }
    }
    ctx->pc = 0x105708u;
label_105708:
    // 0x105708: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10570c:
    // 0x10570c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x10570cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x105710: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105714: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x105714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x105718: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105718u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x10571c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10571cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x105720: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105720u;
    {
        const bool branch_taken_0x105720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105720u;
            // 0x105724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105720) {
            ctx->pc = 0x105730u;
            goto label_105730;
        }
    }
    ctx->pc = 0x105728u;
    // 0x105728: 0xc042de4  jal         func_10B790
    ctx->pc = 0x105728u;
    SET_GPR_U32(ctx, 31, 0x105730u);
    ctx->pc = 0x10572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105728u;
            // 0x10572c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B790u;
    if (runtime->hasFunction(0x10B790u)) {
        auto targetFn = runtime->lookupFunction(0x10B790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105730u; }
        if (ctx->pc != 0x105730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B790_0x10b790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105730u; }
        if (ctx->pc != 0x105730u) { return; }
    }
    ctx->pc = 0x105730u;
label_105730:
    // 0x105730: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x105730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_105734:
    // 0x105734: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x105734u;
    {
        const bool branch_taken_0x105734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105734) {
            ctx->pc = 0x105738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105734u;
            // 0x105738: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105750u;
            goto label_105750;
        }
    }
    ctx->pc = 0x10573Cu;
    // 0x10573c: 0x8e040878  lw          $a0, 0x878($s0)
    ctx->pc = 0x10573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x105740: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x105740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x105744: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x105744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105748: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x105748u;
    {
        const bool branch_taken_0x105748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10574Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105748u;
            // 0x10574c: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105748) {
            ctx->pc = 0x10589Cu;
            goto label_10589c;
        }
    }
    ctx->pc = 0x105750u;
label_105750:
    // 0x105750: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x105750u;
    {
        const bool branch_taken_0x105750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105750u;
            // 0x105754: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105750) {
            ctx->pc = 0x10579Cu;
            goto label_10579c;
        }
    }
    ctx->pc = 0x105758u;
    // 0x105758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10575c: 0xc041a4c  jal         func_106930
    ctx->pc = 0x10575Cu;
    SET_GPR_U32(ctx, 31, 0x105764u);
    ctx->pc = 0x105760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10575Cu;
            // 0x105760: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105764u; }
        if (ctx->pc != 0x105764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106930_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105764u; }
        if (ctx->pc != 0x105764u) { return; }
    }
    ctx->pc = 0x105764u;
label_105764:
    // 0x105764: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x105764u;
    {
        const bool branch_taken_0x105764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105764) {
            ctx->pc = 0x105768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105764u;
            // 0x105768: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10577Cu;
            goto label_10577c;
        }
    }
    ctx->pc = 0x10576Cu;
    // 0x10576c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x10576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x105770: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105770u;
    {
        const bool branch_taken_0x105770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105770) {
            ctx->pc = 0x105784u;
            goto label_105784;
        }
    }
    ctx->pc = 0x105778u;
    // 0x105778: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x105778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_10577c:
    // 0x10577c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x10577Cu;
    {
        const bool branch_taken_0x10577c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10577Cu;
            // 0x105780: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10577c) {
            ctx->pc = 0x10589Cu;
            goto label_10589c;
        }
    }
    ctx->pc = 0x105784u;
label_105784:
    // 0x105784: 0xc0418fa  jal         func_1063E8
    ctx->pc = 0x105784u;
    SET_GPR_U32(ctx, 31, 0x10578Cu);
    ctx->pc = 0x105788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105784u;
            // 0x105788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1063E8u;
    if (runtime->hasFunction(0x1063E8u)) {
        auto targetFn = runtime->lookupFunction(0x1063E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10578Cu; }
        if (ctx->pc != 0x10578Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001063E8_0x1063e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10578Cu; }
        if (ctx->pc != 0x10578Cu) { return; }
    }
    ctx->pc = 0x10578Cu;
label_10578c:
    // 0x10578c: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x10578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x105790: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x105790u;
    {
        const bool branch_taken_0x105790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105790u;
            // 0x105794: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105790) {
            ctx->pc = 0x1057F8u;
            goto label_1057f8;
        }
    }
    ctx->pc = 0x105798u;
    // 0x105798: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x105798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10579c:
    // 0x10579c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x10579cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1057a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1057A0u;
    {
        const bool branch_taken_0x1057a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1057A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057A0u;
            // 0x1057a4: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057a0) {
            ctx->pc = 0x1057C0u;
            goto label_1057c0;
        }
    }
    ctx->pc = 0x1057A8u;
    // 0x1057a8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1057a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1057ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1057acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057b0: 0xc042e16  jal         func_10B858
    ctx->pc = 0x1057B0u;
    SET_GPR_U32(ctx, 31, 0x1057B8u);
    ctx->pc = 0x1057B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1057B0u;
            // 0x1057b4: 0x24a5e6f0  addiu       $a1, $a1, -0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057B8u; }
        if (ctx->pc != 0x1057B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057B8u; }
        if (ctx->pc != 0x1057B8u) { return; }
    }
    ctx->pc = 0x1057B8u;
label_1057b8:
    // 0x1057b8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1057B8u;
    {
        const bool branch_taken_0x1057b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1057BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057B8u;
            // 0x1057bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057b8) {
            ctx->pc = 0x10589Cu;
            goto label_10589c;
        }
    }
    ctx->pc = 0x1057C0u;
label_1057c0:
    // 0x1057c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1057c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1057c4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1057C4u;
    {
        const bool branch_taken_0x1057c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1057C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057C4u;
            // 0x1057c8: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057c4) {
            ctx->pc = 0x105804u;
            goto label_105804;
        }
    }
    ctx->pc = 0x1057CCu;
    // 0x1057cc: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1057ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1057d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1057d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057d4: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x1057d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1057d8: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1057d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1057dc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1057dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1057e0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1057e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057e4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1057e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057e8: 0xc0417a4  jal         func_105E90
    ctx->pc = 0x1057E8u;
    SET_GPR_U32(ctx, 31, 0x1057F0u);
    ctx->pc = 0x1057ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1057E8u;
            // 0x1057ec: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105E90u;
    if (runtime->hasFunction(0x105E90u)) {
        auto targetFn = runtime->lookupFunction(0x105E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057F0u; }
        if (ctx->pc != 0x1057F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105E90_0x105e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057F0u; }
        if (ctx->pc != 0x1057F0u) { return; }
    }
    ctx->pc = 0x1057F0u;
label_1057f0:
    // 0x1057f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1057F0u;
    {
        const bool branch_taken_0x1057f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1057F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057F0u;
            // 0x1057f4: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057f0) {
            ctx->pc = 0x105828u;
            goto label_105828;
        }
    }
    ctx->pc = 0x1057F8u;
label_1057f8:
    // 0x1057f8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1057f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x1057fc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1057FCu;
    {
        const bool branch_taken_0x1057fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1057FCu;
            // 0x105800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1057fc) {
            ctx->pc = 0x10589Cu;
            goto label_10589c;
        }
    }
    ctx->pc = 0x105804u;
label_105804:
    // 0x105804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105808: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x105808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10580c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x10580cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x105810: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x105810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105814: 0xc041aa6  jal         func_106A98
    ctx->pc = 0x105814u;
    SET_GPR_U32(ctx, 31, 0x10581Cu);
    ctx->pc = 0x105818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105814u;
            // 0x105818: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106A98u;
    if (runtime->hasFunction(0x106A98u)) {
        auto targetFn = runtime->lookupFunction(0x106A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10581Cu; }
        if (ctx->pc != 0x10581Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106A98_0x106a98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10581Cu; }
        if (ctx->pc != 0x10581Cu) { return; }
    }
    ctx->pc = 0x10581Cu;
label_10581c:
    // 0x10581c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10581Cu;
    {
        const bool branch_taken_0x10581c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10581Cu;
            // 0x105820: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10581c) {
            ctx->pc = 0x105850u;
            goto label_105850;
        }
    }
    ctx->pc = 0x105824u;
    // 0x105824: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x105824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_105828:
    // 0x105828: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x105828u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10582c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x10582cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x105830: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x105830u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105834: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x105834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x105838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10583c: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x10583cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x105840: 0xc041298  jal         func_104A60
    ctx->pc = 0x105840u;
    SET_GPR_U32(ctx, 31, 0x105848u);
    ctx->pc = 0x105844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105840u;
            // 0x105844: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x104A60u;
    if (runtime->hasFunction(0x104A60u)) {
        auto targetFn = runtime->lookupFunction(0x104A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105848u; }
        if (ctx->pc != 0x105848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00104A60_0x104a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105848u; }
        if (ctx->pc != 0x105848u) { return; }
    }
    ctx->pc = 0x105848u;
label_105848:
    // 0x105848: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105848u;
    {
        const bool branch_taken_0x105848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10584Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105848u;
            // 0x10584c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105848) {
            ctx->pc = 0x10585Cu;
            goto label_10585c;
        }
    }
    ctx->pc = 0x105850u;
label_105850:
    // 0x105850: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x105850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x105854: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x105854u;
    {
        const bool branch_taken_0x105854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105854u;
            // 0x105858: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105854) {
            ctx->pc = 0x10589Cu;
            goto label_10589c;
        }
    }
    ctx->pc = 0x10585Cu;
label_10585c:
    // 0x10585c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10585Cu;
    {
        const bool branch_taken_0x10585c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10585c) {
            ctx->pc = 0x105860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10585Cu;
            // 0x105860: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10587Cu;
            goto label_10587c;
        }
    }
    ctx->pc = 0x105864u;
    // 0x105864: 0x8e050820  lw          $a1, 0x820($s0)
    ctx->pc = 0x105864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x105868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10586c: 0xc04144e  jal         func_105138
    ctx->pc = 0x10586Cu;
    SET_GPR_U32(ctx, 31, 0x105874u);
    ctx->pc = 0x105870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10586Cu;
            // 0x105870: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (runtime->hasFunction(0x105138u)) {
        auto targetFn = runtime->lookupFunction(0x105138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105874u; }
        if (ctx->pc != 0x105874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105138_0x105138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105874u; }
        if (ctx->pc != 0x105874u) { return; }
    }
    ctx->pc = 0x105874u;
label_105874:
    // 0x105874: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x105874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105878: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x105878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_10587c:
    // 0x10587c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10587cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x105880: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x105880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x105884: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x105884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x105888: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x105888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x10588c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x105890: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x105890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
    // 0x105894: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x105894u;
    {
        const bool branch_taken_0x105894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105894u;
            // 0x105898: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105894) {
            ctx->pc = 0x1055E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1055e8;
        }
    }
    ctx->pc = 0x10589Cu;
label_10589c:
    // 0x10589c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x10589cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1058a0:
    // 0x1058a0: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1058a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1058a4: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x1058a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1058a8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1058a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1058ac: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x1058acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1058b0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1058b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1058b4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x1058b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1058b8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1058b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1058bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1058BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1058C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1058BCu;
            // 0x1058c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1058C4u;
    // 0x1058c4: 0x0  nop
    ctx->pc = 0x1058c4u;
    // NOP
}
