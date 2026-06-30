#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305330
// Address: 0x305330 - 0x3054c0
void sub_00305330_0x305330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305330_0x305330");
#endif

    switch (ctx->pc) {
        case 0x3053f4u: goto label_3053f4;
        case 0x30543cu: goto label_30543c;
        case 0x305464u: goto label_305464;
        case 0x305480u: goto label_305480;
        case 0x3054a8u: goto label_3054a8;
        default: break;
    }

    ctx->pc = 0x305330u;

    // 0x305330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x305334: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x305334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x305338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x305338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30533c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x305340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305344: 0x8c840d60  lw          $a0, 0xD60($a0)
    ctx->pc = 0x305344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x305348: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x305348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30534c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30534cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x305350: 0x50600056  beql        $v1, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x305350u;
    {
        const bool branch_taken_0x305350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305350) {
            ctx->pc = 0x305354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305350u;
            // 0x305354: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3054ACu;
            goto label_3054ac;
        }
    }
    ctx->pc = 0x305358u;
    // 0x305358: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x305358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x30535c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x30535cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x305360: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x305360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x305364: 0x8cc30968  lw          $v1, 0x968($a2)
    ctx->pc = 0x305364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x305368: 0x54640020  bnel        $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x305368u;
    {
        const bool branch_taken_0x305368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x305368) {
            ctx->pc = 0x30536Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305368u;
            // 0x30536c: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3053ECu;
            goto label_3053ec;
        }
    }
    ctx->pc = 0x305370u;
    // 0x305370: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x305370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x305374: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x305374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x305378: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x305378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x30537c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x30537cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x305380: 0x54a40017  bnel        $a1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x305380u;
    {
        const bool branch_taken_0x305380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x305380) {
            ctx->pc = 0x305384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305380u;
            // 0x305384: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3053E0u;
            goto label_3053e0;
        }
    }
    ctx->pc = 0x305388u;
    // 0x305388: 0x8cc30cc4  lw          $v1, 0xCC4($a2)
    ctx->pc = 0x305388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3268)));
    // 0x30538c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x30538cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x305390: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x305390u;
    {
        const bool branch_taken_0x305390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x305390) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x305398u;
    // 0x305398: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x305398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x30539c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30539cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3053a0: 0x24842af0  addiu       $a0, $a0, 0x2AF0
    ctx->pc = 0x3053a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10992));
    // 0x3053a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3053a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3053a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3053a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3053ac: 0x600008  jr          $v1
    ctx->pc = 0x3053ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3053B4u: goto label_3053b4;
            case 0x3053BCu: goto label_3053bc;
            case 0x3053C4u: goto label_3053c4;
            case 0x3053CCu: goto label_3053cc;
            case 0x3053D4u: goto label_3053d4;
            case 0x3053E8u: goto label_3053e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3053B4u;
label_3053b4:
    // 0x3053b4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3053B4u;
    {
        const bool branch_taken_0x3053b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3053b4) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x3053BCu;
label_3053bc:
    // 0x3053bc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3053BCu;
    {
        const bool branch_taken_0x3053bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3053bc) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x3053C4u;
label_3053c4:
    // 0x3053c4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3053C4u;
    {
        const bool branch_taken_0x3053c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3053c4) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x3053CCu;
label_3053cc:
    // 0x3053cc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3053CCu;
    {
        const bool branch_taken_0x3053cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3053cc) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x3053D4u;
label_3053d4:
    // 0x3053d4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3053D4u;
    {
        const bool branch_taken_0x3053d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3053d4) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x3053DCu;
    // 0x3053dc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3053dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3053e0:
    // 0x3053e0: 0x14a30031  bne         $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3053E0u;
    {
        const bool branch_taken_0x3053e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3053e0) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x3053E8u;
label_3053e8:
    // 0x3053e8: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x3053e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_3053ec:
    // 0x3053ec: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3053ECu;
    SET_GPR_U32(ctx, 31, 0x3053F4u);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3053F4u; }
        if (ctx->pc != 0x3053F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3053F4u; }
        if (ctx->pc != 0x3053F4u) { return; }
    }
    ctx->pc = 0x3053F4u;
label_3053f4:
    // 0x3053f4: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x3053f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3053f8: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x3053f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x3053fc: 0x5460001c  bnel        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3053FCu;
    {
        const bool branch_taken_0x3053fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3053fc) {
            ctx->pc = 0x305400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3053FCu;
            // 0x305400: 0x8e030e00  lw          $v1, 0xE00($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3584)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305470u;
            goto label_305470;
        }
    }
    ctx->pc = 0x305404u;
    // 0x305404: 0xc6010a7c  lwc1        $f1, 0xA7C($s0)
    ctx->pc = 0x305404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x305408: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x305408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x30540c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30540cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305410: 0x0  nop
    ctx->pc = 0x305410u;
    // NOP
    // 0x305414: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x305414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x305418: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x305418u;
    {
        const bool branch_taken_0x305418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x305418) {
            ctx->pc = 0x30541Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305418u;
            // 0x30541c: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305434u;
            goto label_305434;
        }
    }
    ctx->pc = 0x305420u;
    // 0x305420: 0x8e030a78  lw          $v1, 0xA78($s0)
    ctx->pc = 0x305420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2680)));
    // 0x305424: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x305424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x305428: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x305428u;
    {
        const bool branch_taken_0x305428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305428) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x305430u;
    // 0x305430: 0x26040440  addiu       $a0, $s0, 0x440
    ctx->pc = 0x305430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
label_305434:
    // 0x305434: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x305434u;
    SET_GPR_U32(ctx, 31, 0x30543Cu);
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30543Cu; }
        if (ctx->pc != 0x30543Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30543Cu; }
        if (ctx->pc != 0x30543Cu) { return; }
    }
    ctx->pc = 0x30543Cu;
label_30543c:
    // 0x30543c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x30543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x305440: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x305440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x305444: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x305444u;
    {
        const bool branch_taken_0x305444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305444) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x30544Cu;
    // 0x30544c: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x30544cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
    // 0x305450: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x305450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x305454: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x305458: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x305458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30545c: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x30545Cu;
    SET_GPR_U32(ctx, 31, 0x305464u);
    ctx->pc = 0x305460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30545Cu;
            // 0x305460: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305464u; }
        if (ctx->pc != 0x305464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305464u; }
        if (ctx->pc != 0x305464u) { return; }
    }
    ctx->pc = 0x305464u;
label_305464:
    // 0x305464: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x305464u;
    {
        const bool branch_taken_0x305464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305464) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x30546Cu;
    // 0x30546c: 0x8e030e00  lw          $v1, 0xE00($s0)
    ctx->pc = 0x30546cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3584)));
label_305470:
    // 0x305470: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x305470u;
    {
        const bool branch_taken_0x305470 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x305470) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x305478u;
    // 0x305478: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x305478u;
    SET_GPR_U32(ctx, 31, 0x305480u);
    ctx->pc = 0x30547Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305478u;
            // 0x30547c: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305480u; }
        if (ctx->pc != 0x305480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305480u; }
        if (ctx->pc != 0x305480u) { return; }
    }
    ctx->pc = 0x305480u;
label_305480:
    // 0x305480: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x305480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x305484: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x305484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x305488: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x305488u;
    {
        const bool branch_taken_0x305488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305488) {
            ctx->pc = 0x3054A8u;
            goto label_3054a8;
        }
    }
    ctx->pc = 0x305490u;
    // 0x305490: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x305490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
    // 0x305494: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x305494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x305498: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30549c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30549cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3054a0: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x3054A0u;
    SET_GPR_U32(ctx, 31, 0x3054A8u);
    ctx->pc = 0x3054A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3054A0u;
            // 0x3054a4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3054A8u; }
        if (ctx->pc != 0x3054A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3054A8u; }
        if (ctx->pc != 0x3054A8u) { return; }
    }
    ctx->pc = 0x3054A8u;
label_3054a8:
    // 0x3054a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3054a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3054ac:
    // 0x3054ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3054acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3054b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3054B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3054B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3054B0u;
            // 0x3054b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3054B8u;
    // 0x3054b8: 0x0  nop
    ctx->pc = 0x3054b8u;
    // NOP
    // 0x3054bc: 0x0  nop
    ctx->pc = 0x3054bcu;
    // NOP
}
