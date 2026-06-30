#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004878A0
// Address: 0x4878a0 - 0x487940
void sub_004878A0_0x4878a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004878A0_0x4878a0");
#endif

    switch (ctx->pc) {
        case 0x4878a0u: goto label_4878a0;
        case 0x4878a4u: goto label_4878a4;
        case 0x4878a8u: goto label_4878a8;
        case 0x4878acu: goto label_4878ac;
        case 0x4878b0u: goto label_4878b0;
        case 0x4878b4u: goto label_4878b4;
        case 0x4878b8u: goto label_4878b8;
        case 0x4878bcu: goto label_4878bc;
        case 0x4878c0u: goto label_4878c0;
        case 0x4878c4u: goto label_4878c4;
        case 0x4878c8u: goto label_4878c8;
        case 0x4878ccu: goto label_4878cc;
        case 0x4878d0u: goto label_4878d0;
        case 0x4878d4u: goto label_4878d4;
        case 0x4878d8u: goto label_4878d8;
        case 0x4878dcu: goto label_4878dc;
        case 0x4878e0u: goto label_4878e0;
        case 0x4878e4u: goto label_4878e4;
        case 0x4878e8u: goto label_4878e8;
        case 0x4878ecu: goto label_4878ec;
        case 0x4878f0u: goto label_4878f0;
        case 0x4878f4u: goto label_4878f4;
        case 0x4878f8u: goto label_4878f8;
        case 0x4878fcu: goto label_4878fc;
        case 0x487900u: goto label_487900;
        case 0x487904u: goto label_487904;
        case 0x487908u: goto label_487908;
        case 0x48790cu: goto label_48790c;
        case 0x487910u: goto label_487910;
        case 0x487914u: goto label_487914;
        case 0x487918u: goto label_487918;
        case 0x48791cu: goto label_48791c;
        case 0x487920u: goto label_487920;
        case 0x487924u: goto label_487924;
        case 0x487928u: goto label_487928;
        case 0x48792cu: goto label_48792c;
        case 0x487930u: goto label_487930;
        case 0x487934u: goto label_487934;
        case 0x487938u: goto label_487938;
        case 0x48793cu: goto label_48793c;
        default: break;
    }

    ctx->pc = 0x4878a0u;

label_4878a0:
    // 0x4878a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4878a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4878a4:
    // 0x4878a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4878a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4878a8:
    // 0x4878a8: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x4878a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_4878ac:
    // 0x4878ac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4878acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4878b0:
    // 0x4878b0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_4878b4:
    if (ctx->pc == 0x4878B4u) {
        ctx->pc = 0x4878B4u;
            // 0x4878b4: 0x248600f0  addiu       $a2, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->pc = 0x4878B8u;
        goto label_4878b8;
    }
    ctx->pc = 0x4878B0u;
    {
        const bool branch_taken_0x4878b0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4878B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4878B0u;
            // 0x4878b4: 0x248600f0  addiu       $a2, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4878b0) {
            ctx->pc = 0x4878C4u;
            goto label_4878c4;
        }
    }
    ctx->pc = 0x4878B8u;
label_4878b8:
    // 0x4878b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4878b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4878bc:
    // 0x4878bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_4878c0:
    if (ctx->pc == 0x4878C0u) {
        ctx->pc = 0x4878C0u;
            // 0x4878c0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4878C4u;
        goto label_4878c4;
    }
    ctx->pc = 0x4878BCu;
    {
        const bool branch_taken_0x4878bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4878C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4878BCu;
            // 0x4878c0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4878bc) {
            ctx->pc = 0x4878E0u;
            goto label_4878e0;
        }
    }
    ctx->pc = 0x4878C4u;
label_4878c4:
    // 0x4878c4: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x4878c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_4878c8:
    // 0x4878c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4878c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4878cc:
    // 0x4878cc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4878ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4878d0:
    // 0x4878d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4878d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4878d4:
    // 0x4878d4: 0x0  nop
    ctx->pc = 0x4878d4u;
    // NOP
label_4878d8:
    // 0x4878d8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4878d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4878dc:
    // 0x4878dc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4878dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4878e0:
    // 0x4878e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4878e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4878e4:
    // 0x4878e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4878e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4878e8:
    // 0x4878e8: 0xc4c1012c  lwc1        $f1, 0x12C($a2)
    ctx->pc = 0x4878e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4878ec:
    // 0x4878ec: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4878ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4878f0:
    // 0x4878f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4878f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4878f4:
    // 0x4878f4: 0x0  nop
    ctx->pc = 0x4878f4u;
    // NOP
label_4878f8:
    // 0x4878f8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4878f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4878fc:
    // 0x4878fc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4878fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_487900:
    // 0x487900: 0x4600101c  madd.s      $f0, $f2, $f0
    ctx->pc = 0x487900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_487904:
    // 0x487904: 0xe4c0012c  swc1        $f0, 0x12C($a2)
    ctx->pc = 0x487904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 300), bits); }
label_487908:
    // 0x487908: 0x94c30110  lhu         $v1, 0x110($a2)
    ctx->pc = 0x487908u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 272)));
label_48790c:
    // 0x48790c: 0x54650009  bnel        $v1, $a1, . + 4 + (0x9 << 2)
label_487910:
    if (ctx->pc == 0x487910u) {
        ctx->pc = 0x487910u;
            // 0x487910: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x487914u;
        goto label_487914;
    }
    ctx->pc = 0x48790Cu;
    {
        const bool branch_taken_0x48790c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x48790c) {
            ctx->pc = 0x487910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48790Cu;
            // 0x487910: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487934u;
            goto label_487934;
        }
    }
    ctx->pc = 0x487914u;
label_487914:
    // 0x487914: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x487914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_487918:
    // 0x487918: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_48791c:
    if (ctx->pc == 0x48791Cu) {
        ctx->pc = 0x487920u;
        goto label_487920;
    }
    ctx->pc = 0x487918u;
    {
        const bool branch_taken_0x487918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x487918) {
            ctx->pc = 0x487930u;
            goto label_487930;
        }
    }
    ctx->pc = 0x487920u;
label_487920:
    // 0x487920: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x487920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_487924:
    // 0x487924: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x487924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_487928:
    // 0x487928: 0x320f809  jalr        $t9
label_48792c:
    if (ctx->pc == 0x48792Cu) {
        ctx->pc = 0x487930u;
        goto label_487930;
    }
    ctx->pc = 0x487928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x487930u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x487930u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x487930u; }
            if (ctx->pc != 0x487930u) { return; }
        }
        }
    }
    ctx->pc = 0x487930u;
label_487930:
    // 0x487930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x487930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_487934:
    // 0x487934: 0x3e00008  jr          $ra
label_487938:
    if (ctx->pc == 0x487938u) {
        ctx->pc = 0x487938u;
            // 0x487938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x48793Cu;
        goto label_48793c;
    }
    ctx->pc = 0x487934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487934u;
            // 0x487938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48793Cu;
label_48793c:
    // 0x48793c: 0x0  nop
    ctx->pc = 0x48793cu;
    // NOP
}
