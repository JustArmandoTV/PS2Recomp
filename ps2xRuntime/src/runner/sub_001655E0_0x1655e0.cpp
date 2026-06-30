#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001655E0
// Address: 0x1655e0 - 0x165768
void sub_001655E0_0x1655e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001655E0_0x1655e0");
#endif

    switch (ctx->pc) {
        case 0x165658u: goto label_165658;
        default: break;
    }

    ctx->pc = 0x1655e0u;

    // 0x1655e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1655e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1655e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1655e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1655e8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1655e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1655ec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1655ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1655f0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1655f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1655f4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1655f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1655f8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1655f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1655fc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1655fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x165600: 0x26d40048  addiu       $s4, $s6, 0x48
    ctx->pc = 0x165600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 72));
    // 0x165604: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x165604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x165608: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x165608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16560c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x16560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x165610: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x165610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x165614: 0x8e910010  lw          $s1, 0x10($s4)
    ctx->pc = 0x165614u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x165618: 0x8e920028  lw          $s2, 0x28($s4)
    ctx->pc = 0x165618u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x16561c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16561Cu;
    {
        const bool branch_taken_0x16561c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16561c) {
            ctx->pc = 0x165620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16561Cu;
            // 0x165620: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165624u;
            goto label_165624;
        }
    }
    ctx->pc = 0x165624u;
label_165624:
    // 0x165624: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x165624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x165628: 0x8ec20044  lw          $v0, 0x44($s6)
    ctx->pc = 0x165628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 68)));
    // 0x16562c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x16562cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x165630: 0x8ed70040  lw          $s7, 0x40($s6)
    ctx->pc = 0x165630u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
    // 0x165634: 0x251001a  div         $zero, $s2, $s1
    ctx->pc = 0x165634u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165638: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x165638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x16563c: 0x8e9e0014  lw          $fp, 0x14($s4)
    ctx->pc = 0x16563cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x165640: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x165640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x165644: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x165648: 0x8010  mfhi        $s0
    ctx->pc = 0x165648u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x16564c: 0x9012  mflo        $s2
    ctx->pc = 0x16564cu;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x165650: 0xc05dfac  jal         func_177EB0
    ctx->pc = 0x165650u;
    SET_GPR_U32(ctx, 31, 0x165658u);
    ctx->pc = 0x165654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165650u;
            // 0x165654: 0x8e950020  lw          $s5, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177EB0u;
    if (runtime->hasFunction(0x177EB0u)) {
        auto targetFn = runtime->lookupFunction(0x177EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165658u; }
        if (ctx->pc != 0x165658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177EB0_0x177eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165658u; }
        if (ctx->pc != 0x165658u) { return; }
    }
    ctx->pc = 0x165658u;
label_165658:
    // 0x165658: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x165658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x16565c: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x16565cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x165660: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x165660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x165664: 0x2439018  mult        $s2, $s2, $v1
    ctx->pc = 0x165664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x165668: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x165668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x16566c: 0x70539818  mult1       $s3, $v0, $s3
    ctx->pc = 0x16566cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x165670: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x165670u;
    {
        const bool branch_taken_0x165670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165670) {
            ctx->pc = 0x165674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x165670u;
            // 0x165674: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x165678u;
            goto label_165678;
        }
    }
    ctx->pc = 0x165678u;
label_165678:
    // 0x165678: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x165678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16567c: 0x223001a  div         $zero, $s1, $v1
    ctx->pc = 0x16567cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x165680: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x165680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x165684: 0xaed30094  sw          $s3, 0x94($s6)
    ctx->pc = 0x165684u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 148), GPR_U32(ctx, 19));
    // 0x165688: 0x8812  mflo        $s1
    ctx->pc = 0x165688u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x16568c: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x16568cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x165690: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x165690u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x165694: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x165694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x165698: 0xaed00090  sw          $s0, 0x90($s6)
    ctx->pc = 0x165698u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 16));
    // 0x16569c: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x16569cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1656a0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1656A0u;
    {
        const bool branch_taken_0x1656a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1656A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1656A0u;
            // 0x1656a4: 0x2b7a823  subu        $s5, $s5, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656a0) {
            ctx->pc = 0x165738u;
            goto label_165738;
        }
    }
    ctx->pc = 0x1656A8u;
    // 0x1656a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1656a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1656ac: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1656ACu;
    {
        const bool branch_taken_0x1656ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1656B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1656ACu;
            // 0x1656b0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656ac) {
            ctx->pc = 0x1656C0u;
            goto label_1656c0;
        }
    }
    ctx->pc = 0x1656B4u;
    // 0x1656b4: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x1656b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
    // 0x1656b8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1656B8u;
    {
        const bool branch_taken_0x1656b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1656B8u;
            // 0x1656bc: 0xdfbe0050  ld          $fp, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656b8) {
            ctx->pc = 0x165700u;
            goto label_165700;
        }
    }
    ctx->pc = 0x1656C0u;
label_1656c0:
    // 0x1656c0: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1656c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1656c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1656c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1656c8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1656c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1656cc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1656ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1656d0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1656d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1656d4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1656d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1656d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1656d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1656dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1656dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1656e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1656e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1656e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1656e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1656e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1656e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1656ec: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1656ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1656f0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1656f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1656f4: 0x8059554  j           func_165550
    ctx->pc = 0x1656F4u;
    ctx->pc = 0x1656F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1656F4u;
            // 0x1656f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165550u;
    {
        auto targetFn = runtime->lookupFunction(0x165550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1656FCu;
    // 0x1656fc: 0x0  nop
    ctx->pc = 0x1656fcu;
    // NOP
label_165700:
    // 0x165700: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x165700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165704: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x165704u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165708: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x165708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16570c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16570cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165710: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x165710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165714: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x165714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165718: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x165718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16571c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16571cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165720: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x165720u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x165724: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x165724u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165728: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x165728u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16572c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x16572cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165730: 0x8059570  j           func_1655C0
    ctx->pc = 0x165730u;
    ctx->pc = 0x165734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165730u;
            // 0x165734: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1655C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1655C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x165738u;
label_165738:
    // 0x165738: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x165738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16573c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16573cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x165740: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x165740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165744: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x165744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x165748: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x165748u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16574c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x16574cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x165750: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x165750u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165754: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x165754u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x165758: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x165758u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16575c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x16575cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165760: 0x3e00008  jr          $ra
    ctx->pc = 0x165760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165760u;
            // 0x165764: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165768u;
}
