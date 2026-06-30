#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013D550
// Address: 0x13d550 - 0x13d9d0
void sub_0013D550_0x13d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D550_0x13d550");
#endif

    switch (ctx->pc) {
        case 0x13d580u: goto label_13d580;
        case 0x13d958u: goto label_13d958;
        case 0x13d990u: goto label_13d990;
        case 0x13d9a4u: goto label_13d9a4;
        case 0x13d9b0u: goto label_13d9b0;
        case 0x13d9b8u: goto label_13d9b8;
        default: break;
    }

    ctx->pc = 0x13d550u;

    // 0x13d550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d554: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x13d554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13d558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13d558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13d55c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13d55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13d560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d564: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13d568: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d56c: 0xaf808194  sw          $zero, -0x7E6C($gp)
    ctx->pc = 0x13d56cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 0));
    // 0x13d570: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d574: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d578: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x13D578u;
    SET_GPR_U32(ctx, 31, 0x13D580u);
    ctx->pc = 0x13D57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D578u;
            // 0x13d57c: 0x24845560  addiu       $a0, $a0, 0x5560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D580u; }
        if (ctx->pc != 0x13D580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D580u; }
        if (ctx->pc != 0x13D580u) { return; }
    }
    ctx->pc = 0x13D580u;
label_13d580:
    // 0x13d580: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x13d580u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13d584: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D584u;
    {
        const bool branch_taken_0x13d584 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13d584) {
            ctx->pc = 0x13D588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D584u;
            // 0x13d588: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D598u;
            goto label_13d598;
        }
    }
    ctx->pc = 0x13D58Cu;
    // 0x13d58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d590: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13D590u;
    {
        const bool branch_taken_0x13d590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D590u;
            // 0x13d594: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d590) {
            ctx->pc = 0x13D5B0u;
            goto label_13d5b0;
        }
    }
    ctx->pc = 0x13D598u;
label_13d598:
    // 0x13d598: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13d59c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13d59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13d5a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d5a4: 0x0  nop
    ctx->pc = 0x13d5a4u;
    // NOP
    // 0x13d5a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13d5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13d5ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x13d5acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_13d5b0:
    // 0x13d5b0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x13d5b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13d5b4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D5B4u;
    {
        const bool branch_taken_0x13d5b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13d5b4) {
            ctx->pc = 0x13D5B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5B4u;
            // 0x13d5b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D5C8u;
            goto label_13d5c8;
        }
    }
    ctx->pc = 0x13D5BCu;
    // 0x13d5bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d5c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13D5C0u;
    {
        const bool branch_taken_0x13d5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5C0u;
            // 0x13d5c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5c0) {
            ctx->pc = 0x13D5E0u;
            goto label_13d5e0;
        }
    }
    ctx->pc = 0x13D5C8u;
label_13d5c8:
    // 0x13d5c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13d5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13d5cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13d5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13d5d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d5d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d5d4: 0x0  nop
    ctx->pc = 0x13d5d4u;
    // NOP
    // 0x13d5d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13d5d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13d5dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13d5dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13d5e0:
    // 0x13d5e0: 0x0  nop
    ctx->pc = 0x13d5e0u;
    // NOP
    // 0x13d5e4: 0x0  nop
    ctx->pc = 0x13d5e4u;
    // NOP
    // 0x13d5e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x13d5e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x13d5ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13d5f0: 0xe440559c  swc1        $f0, 0x559C($v0)
    ctx->pc = 0x13d5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21916), bits); }
    // 0x13d5f4: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x13d5f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x13d5f8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D5F8u;
    {
        const bool branch_taken_0x13d5f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13d5f8) {
            ctx->pc = 0x13D5FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D5F8u;
            // 0x13d5fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D60Cu;
            goto label_13d60c;
        }
    }
    ctx->pc = 0x13D600u;
    // 0x13d600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d604: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13D604u;
    {
        const bool branch_taken_0x13d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D604u;
            // 0x13d608: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d604) {
            ctx->pc = 0x13D624u;
            goto label_13d624;
        }
    }
    ctx->pc = 0x13D60Cu;
label_13d60c:
    // 0x13d60c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13d60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13d610: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13d610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13d614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d618: 0x0  nop
    ctx->pc = 0x13d618u;
    // NOP
    // 0x13d61c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x13d61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13d620: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x13d620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_13d624:
    // 0x13d624: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x13d624u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x13d628: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D628u;
    {
        const bool branch_taken_0x13d628 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13d628) {
            ctx->pc = 0x13D62Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D628u;
            // 0x13d62c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D63Cu;
            goto label_13d63c;
        }
    }
    ctx->pc = 0x13D630u;
    // 0x13d630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d634: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13D634u;
    {
        const bool branch_taken_0x13d634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D634u;
            // 0x13d638: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d634) {
            ctx->pc = 0x13D654u;
            goto label_13d654;
        }
    }
    ctx->pc = 0x13D63Cu;
label_13d63c:
    // 0x13d63c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13d63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13d640: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13d640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13d644: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d648: 0x0  nop
    ctx->pc = 0x13d648u;
    // NOP
    // 0x13d64c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13d64cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13d650: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13d650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13d654:
    // 0x13d654: 0x0  nop
    ctx->pc = 0x13d654u;
    // NOP
    // 0x13d658: 0x0  nop
    ctx->pc = 0x13d658u;
    // NOP
    // 0x13d65c: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x13d65cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x13d660: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x13d660u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x13d664: 0x3c0a43fa  lui         $t2, 0x43FA
    ctx->pc = 0x13d664u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17402 << 16));
    // 0x13d668: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x13d668u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x13d66c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13d670: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x13d670u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x13d674: 0xac4a5598  sw          $t2, 0x5598($v0)
    ctx->pc = 0x13d674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21912), GPR_U32(ctx, 10));
    // 0x13d678: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x13d678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x13d67c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13d67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13d680: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13d680u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13d684: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d688: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13d688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13d68c: 0xc4e3559c  lwc1        $f3, 0x559C($a3)
    ctx->pc = 0x13d68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 21916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13d690: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x13d690u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d694: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x13d694u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d698: 0x46032083  div.s       $f2, $f4, $f3
    ctx->pc = 0x13d698u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[2] = ctx->f[4] / ctx->f[3];
    // 0x13d69c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x13d69cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13d6a0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x13d6a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x13d6a4: 0xe4c255a4  swc1        $f2, 0x55A4($a2)
    ctx->pc = 0x13d6a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 21924), bits); }
    // 0x13d6a8: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x13d6a8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x13d6ac: 0x46030803  div.s       $f0, $f1, $f3
    ctx->pc = 0x13d6acu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[3];
    // 0x13d6b0: 0xe4605590  swc1        $f0, 0x5590($v1)
    ctx->pc = 0x13d6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 21904), bits); }
    // 0x13d6b4: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x13d6b4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
    // 0x13d6b8: 0xe50455a0  swc1        $f4, 0x55A0($t0)
    ctx->pc = 0x13d6b8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 21920), bits); }
    // 0x13d6bc: 0xe4a35580  swc1        $f3, 0x5580($a1)
    ctx->pc = 0x13d6bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 21888), bits); }
    // 0x13d6c0: 0xe4825584  swc1        $f2, 0x5584($a0)
    ctx->pc = 0x13d6c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 21892), bits); }
    // 0x13d6c4: 0x0  nop
    ctx->pc = 0x13d6c4u;
    // NOP
    // 0x13d6c8: 0xe4405594  swc1        $f0, 0x5594($v0)
    ctx->pc = 0x13d6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21908), bits); }
    // 0x13d6cc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x13d6ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13d6d0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D6D0u;
    {
        const bool branch_taken_0x13d6d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13d6d0) {
            ctx->pc = 0x13D6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6D0u;
            // 0x13d6d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D6E4u;
            goto label_13d6e4;
        }
    }
    ctx->pc = 0x13D6D8u;
    // 0x13d6d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d6d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d6dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13D6DCu;
    {
        const bool branch_taken_0x13d6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D6DCu;
            // 0x13d6e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d6dc) {
            ctx->pc = 0x13D6FCu;
            goto label_13d6fc;
        }
    }
    ctx->pc = 0x13D6E4u;
label_13d6e4:
    // 0x13d6e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13d6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13d6e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13d6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13d6ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d6f0: 0x0  nop
    ctx->pc = 0x13d6f0u;
    // NOP
    // 0x13d6f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13d6f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13d6f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x13d6f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_13d6fc:
    // 0x13d6fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13d700: 0xe44055a8  swc1        $f0, 0x55A8($v0)
    ctx->pc = 0x13d700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21928), bits); }
    // 0x13d704: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x13d704u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x13d708: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D708u;
    {
        const bool branch_taken_0x13d708 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x13d708) {
            ctx->pc = 0x13D70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13D708u;
            // 0x13d70c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13D71Cu;
            goto label_13d71c;
        }
    }
    ctx->pc = 0x13D710u;
    // 0x13d710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13d710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d714: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13D714u;
    {
        const bool branch_taken_0x13d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D714u;
            // 0x13d718: 0x46800160  cvt.s.w     $f5, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d714) {
            ctx->pc = 0x13D734u;
            goto label_13d734;
        }
    }
    ctx->pc = 0x13D71Cu;
label_13d71c:
    // 0x13d71c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13d720: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13d720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13d724: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13d724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13d728: 0x0  nop
    ctx->pc = 0x13d728u;
    // NOP
    // 0x13d72c: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x13d72cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x13d730: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x13d730u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_13d734:
    // 0x13d734: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13d734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13d738: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x13d738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x13d73c: 0xe44555ac  swc1        $f5, 0x55AC($v0)
    ctx->pc = 0x13d73cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21932), bits); }
    // 0x13d740: 0x3c0c006c  lui         $t4, 0x6C
    ctx->pc = 0x13d740u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)108 << 16));
    // 0x13d744: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13d744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13d748: 0x3c0e4700  lui         $t6, 0x4700
    ctx->pc = 0x13d748u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)18176 << 16));
    // 0x13d74c: 0xc44055a8  lwc1        $f0, 0x55A8($v0)
    ctx->pc = 0x13d74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13d750: 0x3c0b006c  lui         $t3, 0x6C
    ctx->pc = 0x13d750u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)108 << 16));
    // 0x13d754: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13d754u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d758: 0x3c0f4180  lui         $t7, 0x4180
    ctx->pc = 0x13d758u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16768 << 16));
    // 0x13d75c: 0x448e1800  mtc1        $t6, $f3
    ctx->pc = 0x13d75cu;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13d760: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x13d760u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
    // 0x13d764: 0x460509c2  mul.s       $f7, $f1, $f5
    ctx->pc = 0x13d764u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x13d768: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13d768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13d76c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13d770: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x13d770u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x13d774: 0xac4055bc  sw          $zero, 0x55BC($v0)
    ctx->pc = 0x13d774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21948), GPR_U32(ctx, 0));
    // 0x13d778: 0x3c19006c  lui         $t9, 0x6C
    ctx->pc = 0x13d778u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)108 << 16));
    // 0x13d77c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13d780: 0x240efe00  addiu       $t6, $zero, -0x200
    ctx->pc = 0x13d780u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x13d784: 0xac4055c4  sw          $zero, 0x55C4($v0)
    ctx->pc = 0x13d784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21956), GPR_U32(ctx, 0));
    // 0x13d788: 0x3c18006c  lui         $t8, 0x6C
    ctx->pc = 0x13d788u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)108 << 16));
    // 0x13d78c: 0x46000a02  mul.s       $f8, $f1, $f0
    ctx->pc = 0x13d78cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13d790: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13d790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13d794: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x13d794u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x13d798: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13d798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13d79c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x13d79cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x13d7a0: 0x3c09006c  lui         $t1, 0x6C
    ctx->pc = 0x13d7a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)108 << 16));
    // 0x13d7a4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d7a8: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x13d7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x13d7ac: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x13d7acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x13d7b0: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x13d7b0u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d7b4: 0x0  nop
    ctx->pc = 0x13d7b4u;
    // NOP
    // 0x13d7b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13d7b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13d7bc: 0xe72055b8  swc1        $f0, 0x55B8($t9)
    ctx->pc = 0x13d7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 21944), bits); }
    // 0x13d7c0: 0xe5485588  swc1        $f8, 0x5588($t2)
    ctx->pc = 0x13d7c0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 21896), bits); }
    // 0x13d7c4: 0x30190001  andi        $t9, $zero, 0x1
    ctx->pc = 0x13d7c4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x13d7c8: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x13d7c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x13d7cc: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x13d7ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x13d7d0: 0xc586559c  lwc1        $f6, 0x559C($t4)
    ctx->pc = 0x13d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 21916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13d7d4: 0xe467558c  swc1        $f7, 0x558C($v1)
    ctx->pc = 0x13d7d4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 21900), bits); }
    // 0x13d7d8: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x13d7d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x13d7dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13d7e0: 0x954c5570  lhu         $t4, 0x5570($t2)
    ctx->pc = 0x13d7e0u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 21872)));
    // 0x13d7e4: 0xe46055d8  swc1        $f0, 0x55D8($v1)
    ctx->pc = 0x13d7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 21976), bits); }
    // 0x13d7e8: 0x3c0a005d  lui         $t2, 0x5D
    ctx->pc = 0x13d7e8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)93 << 16));
    // 0x13d7ec: 0x954a2040  lhu         $t2, 0x2040($t2)
    ctx->pc = 0x13d7ecu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 8256)));
    // 0x13d7f0: 0x448f2000  mtc1        $t7, $f4
    ctx->pc = 0x13d7f0u;
    { uint32_t bits = GPR_U32(ctx, 15); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13d7f4: 0x46070801  sub.s       $f0, $f1, $f7
    ctx->pc = 0x13d7f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x13d7f8: 0x318f01ff  andi        $t7, $t4, 0x1FF
    ctx->pc = 0x13d7f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)511);
    // 0x13d7fc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x13d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x13d800: 0x14e5024  and         $t2, $t2, $t6
    ctx->pc = 0x13d800u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 14));
    // 0x13d804: 0xe44055e0  swc1        $f0, 0x55E0($v0)
    ctx->pc = 0x13d804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 21984), bits); }
    // 0x13d808: 0xe70155c0  swc1        $f1, 0x55C0($t8)
    ctx->pc = 0x13d808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 21952), bits); }
    // 0x13d80c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13d810: 0xc56255a0  lwc1        $f2, 0x55A0($t3)
    ctx->pc = 0x13d810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 21920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13d814: 0x9042203c  lbu         $v0, 0x203C($v0)
    ctx->pc = 0x13d814u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8252)));
    // 0x13d818: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x13d818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x13d81c: 0x3c18005d  lui         $t8, 0x5D
    ctx->pc = 0x13d81cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)93 << 16));
    // 0x13d820: 0x14f5825  or          $t3, $t2, $t7
    ctx->pc = 0x13d820u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
    // 0x13d824: 0x3c0a005d  lui         $t2, 0x5D
    ctx->pc = 0x13d824u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)93 << 16));
    // 0x13d828: 0xa54b2040  sh          $t3, 0x2040($t2)
    ctx->pc = 0x13d828u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8256), (uint16_t)GPR_U32(ctx, 11));
    // 0x13d82c: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x13d82cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x13d830: 0x240bfff0  addiu       $t3, $zero, -0x10
    ctx->pc = 0x13d830u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13d834: 0x954d5572  lhu         $t5, 0x5572($t2)
    ctx->pc = 0x13d834u;
    SET_GPR_U32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 21874)));
    // 0x13d838: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13d838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13d83c: 0x0  nop
    ctx->pc = 0x13d83cu;
    // NOP
    // 0x13d840: 0xe50055f4  swc1        $f0, 0x55F4($t0)
    ctx->pc = 0x13d840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 22004), bits); }
    // 0x13d844: 0x46080801  sub.s       $f0, $f1, $f8
    ctx->pc = 0x13d844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x13d848: 0x3c0a005d  lui         $t2, 0x5D
    ctx->pc = 0x13d848u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)93 << 16));
    // 0x13d84c: 0x31ac000f  andi        $t4, $t5, 0xF
    ctx->pc = 0x13d84cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x13d850: 0x91512043  lbu         $s1, 0x2043($t2)
    ctx->pc = 0x13d850u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 8259)));
    // 0x13d854: 0x46064142  mul.s       $f5, $f8, $f6
    ctx->pc = 0x13d854u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x13d858: 0x3c0a005d  lui         $t2, 0x5D
    ctx->pc = 0x13d858u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)93 << 16));
    // 0x13d85c: 0x22b9024  and         $s2, $s1, $t3
    ctx->pc = 0x13d85cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & GPR_U64(ctx, 11));
    // 0x13d860: 0x91512044  lbu         $s1, 0x2044($t2)
    ctx->pc = 0x13d860u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 8260)));
    // 0x13d864: 0x24c5025  or          $t2, $s2, $t4
    ctx->pc = 0x13d864u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) | GPR_U64(ctx, 12));
    // 0x13d868: 0xa20a2043  sb          $t2, 0x2043($s0)
    ctx->pc = 0x13d868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8259), (uint8_t)GPR_U32(ctx, 10));
    // 0x13d86c: 0xe4a055dc  swc1        $f0, 0x55DC($a1)
    ctx->pc = 0x13d86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 21980), bits); }
    // 0x13d870: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x13d870u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13d874: 0x240afffe  addiu       $t2, $zero, -0x2
    ctx->pc = 0x13d874u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13d878: 0x4605201d  msub.s      $f0, $f4, $f5
    ctx->pc = 0x13d878u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x13d87c: 0x22a8824  and         $s1, $s1, $t2
    ctx->pc = 0x13d87cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 10));
    // 0x13d880: 0xe52055f0  swc1        $f0, 0x55F0($t1)
    ctx->pc = 0x13d880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 22000), bits); }
    // 0x13d884: 0x2398825  or          $s1, $s1, $t9
    ctx->pc = 0x13d884u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 25));
    // 0x13d888: 0x46070801  sub.s       $f0, $f1, $f7
    ctx->pc = 0x13d888u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x13d88c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x13d88cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x13d890: 0x96192038  lhu         $t9, 0x2038($s0)
    ctx->pc = 0x13d890u;
    SET_GPR_U32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8248)));
    // 0x13d894: 0x4a5024  and         $t2, $v0, $t2
    ctx->pc = 0x13d894u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x13d898: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13d898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13d89c: 0xa3112044  sb          $s1, 0x2044($t8)
    ctx->pc = 0x13d89cu;
    WRITE8(ADD32(GPR_U32(ctx, 24), 8260), (uint8_t)GPR_U32(ctx, 17));
    // 0x13d8a0: 0xe48055e4  swc1        $f0, 0x55E4($a0)
    ctx->pc = 0x13d8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 21988), bits); }
    // 0x13d8a4: 0x32e7024  and         $t6, $t9, $t6
    ctx->pc = 0x13d8a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 25) & GPR_U64(ctx, 14));
    // 0x13d8a8: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x13d8a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x13d8ac: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x13d8acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x13d8b0: 0x906f203b  lbu         $t7, 0x203B($v1)
    ctx->pc = 0x13d8b0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8251)));
    // 0x13d8b4: 0x46023802  mul.s       $f0, $f7, $f2
    ctx->pc = 0x13d8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x13d8b8: 0xa60e2038  sh          $t6, 0x2038($s0)
    ctx->pc = 0x13d8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8248), (uint16_t)GPR_U32(ctx, 14));
    // 0x13d8bc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x13d8bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d8c0: 0x1eb5824  and         $t3, $t7, $t3
    ctx->pc = 0x13d8c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x13d8c4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x13d8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x13d8c8: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x13d8c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x13d8cc: 0xac4e2034  sw          $t6, 0x2034($v0)
    ctx->pc = 0x13d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8244), GPR_U32(ctx, 14));
    // 0x13d8d0: 0xa06b203b  sb          $t3, 0x203B($v1)
    ctx->pc = 0x13d8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8251), (uint8_t)GPR_U32(ctx, 11));
    // 0x13d8d4: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x13d8d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x13d8d8: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x13d8d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x13d8dc: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x13d8dcu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13d8e0: 0xe4e055f8  swc1        $f0, 0x55F8($a3)
    ctx->pc = 0x13d8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 22008), bits); }
    // 0x13d8e4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x13d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x13d8e8: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x13d8e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x13d8ec: 0x14b1025  or          $v0, $t2, $t3
    ctx->pc = 0x13d8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x13d8f0: 0xa062203c  sb          $v0, 0x203C($v1)
    ctx->pc = 0x13d8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8252), (uint8_t)GPR_U32(ctx, 2));
    // 0x13d8f4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x13d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x13d8f8: 0x15a20005  bne         $t5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D8F8u;
    {
        const bool branch_taken_0x13d8f8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 2));
        ctx->pc = 0x13D8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D8F8u;
            // 0x13d8fc: 0xe4c055fc  swc1        $f0, 0x55FC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 22012), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d8f8) {
            ctx->pc = 0x13D910u;
            goto label_13d910;
        }
    }
    ctx->pc = 0x13D900u;
    // 0x13d900: 0x3c02416f  lui         $v0, 0x416F
    ctx->pc = 0x13d900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16751 << 16));
    // 0x13d904: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x13d904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x13d908: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13D908u;
    {
        const bool branch_taken_0x13d908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D908u;
            // 0x13d90c: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d908) {
            ctx->pc = 0x13D91Cu;
            goto label_13d91c;
        }
    }
    ctx->pc = 0x13D910u;
label_13d910:
    // 0x13d910: 0x3c0240ef  lui         $v0, 0x40EF
    ctx->pc = 0x13d910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16623 << 16));
    // 0x13d914: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x13d914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
    // 0x13d918: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13d918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_13d91c:
    // 0x13d91c: 0xff828168  sd          $v0, -0x7E98($gp)
    ctx->pc = 0x13d91cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934888), GPR_U64(ctx, 2));
    // 0x13d920: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d924: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13d924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13d928: 0x8f858194  lw          $a1, -0x7E6C($gp)
    ctx->pc = 0x13d928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934932)));
    // 0x13d92c: 0x8c432034  lw          $v1, 0x2034($v0)
    ctx->pc = 0x13d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8244)));
    // 0x13d930: 0x24845600  addiu       $a0, $a0, 0x5600
    ctx->pc = 0x13d930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    // 0x13d934: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x13d934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x13d938: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13d938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13d93c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13d940: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x13d940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x13d944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d948: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x13d948u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13d94c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x13d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13d950: 0xc057540  jal         func_15D500
    ctx->pc = 0x13D950u;
    SET_GPR_U32(ctx, 31, 0x13D958u);
    ctx->pc = 0x13D954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D950u;
            // 0x13d954: 0xaf838194  sw          $v1, -0x7E6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D958u; }
        if (ctx->pc != 0x13D958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D958u; }
        if (ctx->pc != 0x13D958u) { return; }
    }
    ctx->pc = 0x13D958u;
label_13d958:
    // 0x13d958: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13d958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13d95c: 0x8f858194  lw          $a1, -0x7E6C($gp)
    ctx->pc = 0x13d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934932)));
    // 0x13d960: 0x8c432034  lw          $v1, 0x2034($v0)
    ctx->pc = 0x13d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8244)));
    // 0x13d964: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d968: 0x24845600  addiu       $a0, $a0, 0x5600
    ctx->pc = 0x13d968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    // 0x13d96c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x13d96cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13d970: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x13d970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x13d974: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13d974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13d978: 0x24422030  addiu       $v0, $v0, 0x2030
    ctx->pc = 0x13d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8240));
    // 0x13d97c: 0xaf878194  sw          $a3, -0x7E6C($gp)
    ctx->pc = 0x13d97cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934932), GPR_U32(ctx, 7));
    // 0x13d980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d984: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x13d984u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13d988: 0xc057540  jal         func_15D500
    ctx->pc = 0x13D988u;
    SET_GPR_U32(ctx, 31, 0x13D990u);
    ctx->pc = 0x13D98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D988u;
            // 0x13d98c: 0x2406004f  addiu       $a2, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D990u; }
        if (ctx->pc != 0x13D990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D990u; }
        if (ctx->pc != 0x13D990u) { return; }
    }
    ctx->pc = 0x13D990u;
label_13d990:
    // 0x13d990: 0x8f868194  lw          $a2, -0x7E6C($gp)
    ctx->pc = 0x13d990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934932)));
    // 0x13d994: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13d994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13d998: 0x24845600  addiu       $a0, $a0, 0x5600
    ctx->pc = 0x13d998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22016));
    // 0x13d99c: 0xc05750c  jal         func_15D430
    ctx->pc = 0x13D99Cu;
    SET_GPR_U32(ctx, 31, 0x13D9A4u);
    ctx->pc = 0x13D9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D99Cu;
            // 0x13d9a0: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9A4u; }
        if (ctx->pc != 0x13D9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9A4u; }
        if (ctx->pc != 0x13D9A4u) { return; }
    }
    ctx->pc = 0x13D9A4u;
label_13d9a4:
    // 0x13d9a4: 0xaf828190  sw          $v0, -0x7E70($gp)
    ctx->pc = 0x13d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934928), GPR_U32(ctx, 2));
    // 0x13d9a8: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x13D9A8u;
    SET_GPR_U32(ctx, 31, 0x13D9B0u);
    ctx->pc = 0x13D9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13D9A8u;
            // 0x13d9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9B0u; }
        if (ctx->pc != 0x13D9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9B0u; }
        if (ctx->pc != 0x13D9B0u) { return; }
    }
    ctx->pc = 0x13D9B0u;
label_13d9b0:
    // 0x13d9b0: 0xc04f4d8  jal         func_13D360
    ctx->pc = 0x13D9B0u;
    SET_GPR_U32(ctx, 31, 0x13D9B8u);
    ctx->pc = 0x13D360u;
    if (runtime->hasFunction(0x13D360u)) {
        auto targetFn = runtime->lookupFunction(0x13D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9B8u; }
        if (ctx->pc != 0x13D9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D360_0x13d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13D9B8u; }
        if (ctx->pc != 0x13D9B8u) { return; }
    }
    ctx->pc = 0x13D9B8u;
label_13d9b8:
    // 0x13d9b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13d9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d9bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13d9bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d9c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d9c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d9c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13D9C8u;
            // 0x13d9cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13D9D0u;
}
