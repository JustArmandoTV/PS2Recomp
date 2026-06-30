#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BB8A0
// Address: 0x3bb8a0 - 0x3bba90
void sub_003BB8A0_0x3bb8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB8A0_0x3bb8a0");
#endif

    switch (ctx->pc) {
        case 0x3bb8f8u: goto label_3bb8f8;
        case 0x3bb9dcu: goto label_3bb9dc;
        case 0x3bb9ecu: goto label_3bb9ec;
        case 0x3bba00u: goto label_3bba00;
        case 0x3bba30u: goto label_3bba30;
        case 0x3bba44u: goto label_3bba44;
        case 0x3bba58u: goto label_3bba58;
        case 0x3bba6cu: goto label_3bba6c;
        case 0x3bba74u: goto label_3bba74;
        default: break;
    }

    ctx->pc = 0x3bb8a0u;

    // 0x3bb8a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3bb8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3bb8a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3bb8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb8a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bb8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bb8ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3bb8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3bb8b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bb8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3bb8b4: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x3bb8b4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3bb8b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3bb8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3bb8bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3bb8bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3bb8c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3bb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3bb8c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3bb8c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3bb8c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3bb8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3bb8cc: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x3bb8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x3bb8d0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB8D0u;
    {
        const bool branch_taken_0x3bb8d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3BB8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB8D0u;
            // 0x3bb8d4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb8d0) {
            ctx->pc = 0x3BB8E8u;
            goto label_3bb8e8;
        }
    }
    ctx->pc = 0x3BB8D8u;
    // 0x3bb8d8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x3bb8d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3bb8dc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB8DCu;
    {
        const bool branch_taken_0x3bb8dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb8dc) {
            ctx->pc = 0x3BB8E8u;
            goto label_3bb8e8;
        }
    }
    ctx->pc = 0x3BB8E4u;
    // 0x3bb8e4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3bb8e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bb8e8:
    // 0x3bb8e8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB8E8u;
    {
        const bool branch_taken_0x3bb8e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb8e8) {
            ctx->pc = 0x3BB904u;
            goto label_3bb904;
        }
    }
    ctx->pc = 0x3BB8F0u;
    // 0x3bb8f0: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x3BB8F0u;
    SET_GPR_U32(ctx, 31, 0x3BB8F8u);
    ctx->pc = 0x3BB8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB8F0u;
            // 0x3bb8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB8F8u; }
        if (ctx->pc != 0x3BB8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB8F8u; }
        if (ctx->pc != 0x3BB8F8u) { return; }
    }
    ctx->pc = 0x3BB8F8u;
label_3bb8f8:
    // 0x3bb8f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB8F8u;
    {
        const bool branch_taken_0x3bb8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb8f8) {
            ctx->pc = 0x3BB904u;
            goto label_3bb904;
        }
    }
    ctx->pc = 0x3BB900u;
    // 0x3bb900: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3bb900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bb904:
    // 0x3bb904: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB904u;
    {
        const bool branch_taken_0x3bb904 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb904) {
            ctx->pc = 0x3BB908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB904u;
            // 0x3bb908: 0x8e22004c  lw          $v0, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB920u;
            goto label_3bb920;
        }
    }
    ctx->pc = 0x3BB90Cu;
    // 0x3bb90c: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x3bb90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
    // 0x3bb910: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3bb910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3bb914: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3BB914u;
    {
        const bool branch_taken_0x3bb914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bb914) {
            ctx->pc = 0x3BB918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB914u;
            // 0x3bb918: 0xc6200070  lwc1        $f0, 0x70($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BB9A4u;
            goto label_3bb9a4;
        }
    }
    ctx->pc = 0x3BB91Cu;
    // 0x3bb91c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x3bb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_3bb920:
    // 0x3bb920: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3BB920u;
    {
        const bool branch_taken_0x3bb920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb920) {
            ctx->pc = 0x3BB9A0u;
            goto label_3bb9a0;
        }
    }
    ctx->pc = 0x3BB928u;
    // 0x3bb928: 0x822300a4  lb          $v1, 0xA4($s1)
    ctx->pc = 0x3bb928u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x3bb92c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3bb92cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3bb930: 0x461000e  bgez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3BB930u;
    {
        const bool branch_taken_0x3bb930 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3bb930) {
            ctx->pc = 0x3BB96Cu;
            goto label_3bb96c;
        }
    }
    ctx->pc = 0x3BB938u;
    // 0x3bb938: 0x822200a5  lb          $v0, 0xA5($s1)
    ctx->pc = 0x3bb938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 165)));
    // 0x3bb93c: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3BB93Cu;
    {
        const bool branch_taken_0x3bb93c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3bb93c) {
            ctx->pc = 0x3BB96Cu;
            goto label_3bb96c;
        }
    }
    ctx->pc = 0x3BB944u;
    // 0x3bb944: 0x822200a6  lb          $v0, 0xA6($s1)
    ctx->pc = 0x3bb944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 166)));
    // 0x3bb948: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BB948u;
    {
        const bool branch_taken_0x3bb948 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3bb948) {
            ctx->pc = 0x3BB96Cu;
            goto label_3bb96c;
        }
    }
    ctx->pc = 0x3BB950u;
    // 0x3bb950: 0x822200a7  lb          $v0, 0xA7($s1)
    ctx->pc = 0x3bb950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 167)));
    // 0x3bb954: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BB954u;
    {
        const bool branch_taken_0x3bb954 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3bb954) {
            ctx->pc = 0x3BB96Cu;
            goto label_3bb96c;
        }
    }
    ctx->pc = 0x3BB95Cu;
    // 0x3bb95c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3bb95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3bb960: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3bb960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3bb964: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3BB964u;
    {
        const bool branch_taken_0x3bb964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb964) {
            ctx->pc = 0x3BB9A0u;
            goto label_3bb9a0;
        }
    }
    ctx->pc = 0x3BB96Cu;
label_3bb96c:
    // 0x3bb96c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3BB96Cu;
    {
        const bool branch_taken_0x3bb96c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3bb96c) {
            ctx->pc = 0x3BB9A0u;
            goto label_3bb9a0;
        }
    }
    ctx->pc = 0x3BB974u;
    // 0x3bb974: 0x822200a5  lb          $v0, 0xA5($s1)
    ctx->pc = 0x3bb974u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 165)));
    // 0x3bb978: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3BB978u;
    {
        const bool branch_taken_0x3bb978 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3bb978) {
            ctx->pc = 0x3BB9A0u;
            goto label_3bb9a0;
        }
    }
    ctx->pc = 0x3BB980u;
    // 0x3bb980: 0x822200a6  lb          $v0, 0xA6($s1)
    ctx->pc = 0x3bb980u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 166)));
    // 0x3bb984: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BB984u;
    {
        const bool branch_taken_0x3bb984 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3bb984) {
            ctx->pc = 0x3BB9A0u;
            goto label_3bb9a0;
        }
    }
    ctx->pc = 0x3BB98Cu;
    // 0x3bb98c: 0x822200a7  lb          $v0, 0xA7($s1)
    ctx->pc = 0x3bb98cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 167)));
    // 0x3bb990: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB990u;
    {
        const bool branch_taken_0x3bb990 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3bb990) {
            ctx->pc = 0x3BB9A0u;
            goto label_3bb9a0;
        }
    }
    ctx->pc = 0x3BB998u;
    // 0x3bb998: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3bb998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3bb99c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3bb99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3bb9a0:
    // 0x3bb9a0: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x3bb9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3bb9a4:
    // 0x3bb9a4: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3bb9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x3bb9a8: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x3bb9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb9ac: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3bb9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x3bb9b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3bb9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bb9b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3bb9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3bb9b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3bb9b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3bb9bc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3bb9bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3bb9c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bb9c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bb9c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb9c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb9c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb9c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bb9cc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3bb9ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bb9d0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3bb9d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3bb9d4: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x3BB9D4u;
    SET_GPR_U32(ctx, 31, 0x3BB9DCu);
    ctx->pc = 0x3BB9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB9D4u;
            // 0x3bb9d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB9DCu; }
        if (ctx->pc != 0x3BB9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB9DCu; }
        if (ctx->pc != 0x3BB9DCu) { return; }
    }
    ctx->pc = 0x3BB9DCu;
label_3bb9dc:
    // 0x3bb9dc: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x3bb9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3bb9e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3bb9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3bb9e4: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x3BB9E4u;
    SET_GPR_U32(ctx, 31, 0x3BB9ECu);
    ctx->pc = 0x3BB9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB9E4u;
            // 0x3bb9e8: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB9ECu; }
        if (ctx->pc != 0x3BB9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB9ECu; }
        if (ctx->pc != 0x3BB9ECu) { return; }
    }
    ctx->pc = 0x3BB9ECu;
label_3bb9ec:
    // 0x3bb9ec: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x3bb9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3bb9f0: 0x260502e0  addiu       $a1, $s0, 0x2E0
    ctx->pc = 0x3bb9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
    // 0x3bb9f4: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x3bb9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x3bb9f8: 0xc07527c  jal         func_1D49F0
    ctx->pc = 0x3BB9F8u;
    SET_GPR_U32(ctx, 31, 0x3BBA00u);
    ctx->pc = 0x3BB9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB9F8u;
            // 0x3bb9fc: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D49F0u;
    if (runtime->hasFunction(0x1D49F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D49F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA00u; }
        if (ctx->pc != 0x3BBA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D49F0_0x1d49f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA00u; }
        if (ctx->pc != 0x3BBA00u) { return; }
    }
    ctx->pc = 0x3BBA00u;
label_3bba00:
    // 0x3bba00: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x3bba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bba04: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x3bba04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
    // 0x3bba08: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x3bba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x3bba0c: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x3bba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3bba10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bba10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bba14: 0x26040840  addiu       $a0, $s0, 0x840
    ctx->pc = 0x3bba14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    // 0x3bba18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bba18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bba1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3bba1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bba20: 0x46006018  adda.s      $f12, $f0
    ctx->pc = 0x3bba20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3bba24: 0x4614081c  madd.s      $f0, $f1, $f20
    ctx->pc = 0x3bba24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[20]));
    // 0x3bba28: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3BBA28u;
    SET_GPR_U32(ctx, 31, 0x3BBA30u);
    ctx->pc = 0x3BBA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBA28u;
            // 0x3bba2c: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA30u; }
        if (ctx->pc != 0x3BBA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA30u; }
        if (ctx->pc != 0x3BBA30u) { return; }
    }
    ctx->pc = 0x3BBA30u;
label_3bba30:
    // 0x3bba30: 0x26050560  addiu       $a1, $s0, 0x560
    ctx->pc = 0x3bba30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x3bba34: 0x260408f0  addiu       $a0, $s0, 0x8F0
    ctx->pc = 0x3bba34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2288));
    // 0x3bba38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bba38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bba3c: 0xc0c6250  jal         func_318940
    ctx->pc = 0x3BBA3Cu;
    SET_GPR_U32(ctx, 31, 0x3BBA44u);
    ctx->pc = 0x3BBA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBA3Cu;
            // 0x3bba40: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA44u; }
        if (ctx->pc != 0x3BBA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA44u; }
        if (ctx->pc != 0x3BBA44u) { return; }
    }
    ctx->pc = 0x3BBA44u;
label_3bba44:
    // 0x3bba44: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x3bba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3bba48: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x3bba48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    // 0x3bba4c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3bba4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3bba50: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3BBA50u;
    SET_GPR_U32(ctx, 31, 0x3BBA58u);
    ctx->pc = 0x3BBA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBA50u;
            // 0x3bba54: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA58u; }
        if (ctx->pc != 0x3BBA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA58u; }
        if (ctx->pc != 0x3BBA58u) { return; }
    }
    ctx->pc = 0x3BBA58u;
label_3bba58:
    // 0x3bba58: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x3bba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3bba5c: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x3bba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
    // 0x3bba60: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3bba60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3bba64: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3BBA64u;
    SET_GPR_U32(ctx, 31, 0x3BBA6Cu);
    ctx->pc = 0x3BBA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBA64u;
            // 0x3bba68: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA6Cu; }
        if (ctx->pc != 0x3BBA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA6Cu; }
        if (ctx->pc != 0x3BBA6Cu) { return; }
    }
    ctx->pc = 0x3BBA6Cu;
label_3bba6c:
    // 0x3bba6c: 0xc0b9210  jal         func_2E4840
    ctx->pc = 0x3BBA6Cu;
    SET_GPR_U32(ctx, 31, 0x3BBA74u);
    ctx->pc = 0x3BBA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBA6Cu;
            // 0x3bba70: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA74u; }
        if (ctx->pc != 0x3BBA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BBA74u; }
        if (ctx->pc != 0x3BBA74u) { return; }
    }
    ctx->pc = 0x3BBA74u;
label_3bba74:
    // 0x3bba74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bba74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bba78: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3bba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3bba7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3bba7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bba80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bba80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bba84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3bba84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bba88: 0x3e00008  jr          $ra
    ctx->pc = 0x3BBA88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BBA88u;
            // 0x3bba8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BBA90u;
}
