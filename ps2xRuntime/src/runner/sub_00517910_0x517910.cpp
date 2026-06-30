#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00517910
// Address: 0x517910 - 0x5179b0
void sub_00517910_0x517910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00517910_0x517910");
#endif

    switch (ctx->pc) {
        case 0x517910u: goto label_517910;
        case 0x517914u: goto label_517914;
        case 0x517918u: goto label_517918;
        case 0x51791cu: goto label_51791c;
        case 0x517920u: goto label_517920;
        case 0x517924u: goto label_517924;
        case 0x517928u: goto label_517928;
        case 0x51792cu: goto label_51792c;
        case 0x517930u: goto label_517930;
        case 0x517934u: goto label_517934;
        case 0x517938u: goto label_517938;
        case 0x51793cu: goto label_51793c;
        case 0x517940u: goto label_517940;
        case 0x517944u: goto label_517944;
        case 0x517948u: goto label_517948;
        case 0x51794cu: goto label_51794c;
        case 0x517950u: goto label_517950;
        case 0x517954u: goto label_517954;
        case 0x517958u: goto label_517958;
        case 0x51795cu: goto label_51795c;
        case 0x517960u: goto label_517960;
        case 0x517964u: goto label_517964;
        case 0x517968u: goto label_517968;
        case 0x51796cu: goto label_51796c;
        case 0x517970u: goto label_517970;
        case 0x517974u: goto label_517974;
        case 0x517978u: goto label_517978;
        case 0x51797cu: goto label_51797c;
        case 0x517980u: goto label_517980;
        case 0x517984u: goto label_517984;
        case 0x517988u: goto label_517988;
        case 0x51798cu: goto label_51798c;
        case 0x517990u: goto label_517990;
        case 0x517994u: goto label_517994;
        case 0x517998u: goto label_517998;
        case 0x51799cu: goto label_51799c;
        case 0x5179a0u: goto label_5179a0;
        case 0x5179a4u: goto label_5179a4;
        case 0x5179a8u: goto label_5179a8;
        case 0x5179acu: goto label_5179ac;
        default: break;
    }

    ctx->pc = 0x517910u;

label_517910:
    // 0x517910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x517910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_517914:
    // 0x517914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x517914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_517918:
    // 0x517918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x517918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51791c:
    // 0x51791c: 0xc481015c  lwc1        $f1, 0x15C($a0)
    ctx->pc = 0x51791cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_517920:
    // 0x517920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x517920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_517924:
    // 0x517924: 0xc4800154  lwc1        $f0, 0x154($a0)
    ctx->pc = 0x517924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_517928:
    // 0x517928: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x517928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51792c:
    // 0x51792c: 0x45010019  bc1t        . + 4 + (0x19 << 2)
label_517930:
    if (ctx->pc == 0x517930u) {
        ctx->pc = 0x517930u;
            // 0x517930: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x517934u;
        goto label_517934;
    }
    ctx->pc = 0x51792Cu;
    {
        const bool branch_taken_0x51792c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x517930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51792Cu;
            // 0x517930: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51792c) {
            ctx->pc = 0x517994u;
            goto label_517994;
        }
    }
    ctx->pc = 0x517934u;
label_517934:
    // 0x517934: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x517934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_517938:
    // 0x517938: 0x58600017  blezl       $v1, . + 4 + (0x17 << 2)
label_51793c:
    if (ctx->pc == 0x51793Cu) {
        ctx->pc = 0x51793Cu;
            // 0x51793c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x517940u;
        goto label_517940;
    }
    ctx->pc = 0x517938u;
    {
        const bool branch_taken_0x517938 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x517938) {
            ctx->pc = 0x51793Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x517938u;
            // 0x51793c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x517998u;
            goto label_517998;
        }
    }
    ctx->pc = 0x517940u;
label_517940:
    // 0x517940: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x517940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_517944:
    // 0x517944: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x517944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_517948:
    // 0x517948: 0x54830012  bnel        $a0, $v1, . + 4 + (0x12 << 2)
label_51794c:
    if (ctx->pc == 0x51794Cu) {
        ctx->pc = 0x51794Cu;
            // 0x51794c: 0xaca0012c  sw          $zero, 0x12C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 0));
        ctx->pc = 0x517950u;
        goto label_517950;
    }
    ctx->pc = 0x517948u;
    {
        const bool branch_taken_0x517948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x517948) {
            ctx->pc = 0x51794Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x517948u;
            // 0x51794c: 0xaca0012c  sw          $zero, 0x12C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x517994u;
            goto label_517994;
        }
    }
    ctx->pc = 0x517950u;
label_517950:
    // 0x517950: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x517950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_517954:
    // 0x517954: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x517954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_517958:
    // 0x517958: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x517958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_51795c:
    // 0x51795c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_517960:
    if (ctx->pc == 0x517960u) {
        ctx->pc = 0x517964u;
        goto label_517964;
    }
    ctx->pc = 0x51795Cu;
    {
        const bool branch_taken_0x51795c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x51795c) {
            ctx->pc = 0x517990u;
            goto label_517990;
        }
    }
    ctx->pc = 0x517964u;
label_517964:
    // 0x517964: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x517964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_517968:
    // 0x517968: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x517968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51796c:
    // 0x51796c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x51796cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_517970:
    // 0x517970: 0x320f809  jalr        $t9
label_517974:
    if (ctx->pc == 0x517974u) {
        ctx->pc = 0x517978u;
        goto label_517978;
    }
    ctx->pc = 0x517970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x517978u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x517978u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x517978u; }
            if (ctx->pc != 0x517978u) { return; }
        }
        }
    }
    ctx->pc = 0x517978u;
label_517978:
    // 0x517978: 0xc145e7c  jal         func_5179F0
label_51797c:
    if (ctx->pc == 0x51797Cu) {
        ctx->pc = 0x51797Cu;
            // 0x51797c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x517980u;
        goto label_517980;
    }
    ctx->pc = 0x517978u;
    SET_GPR_U32(ctx, 31, 0x517980u);
    ctx->pc = 0x51797Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x517978u;
            // 0x51797c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5179F0u;
    if (runtime->hasFunction(0x5179F0u)) {
        auto targetFn = runtime->lookupFunction(0x5179F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517980u; }
        if (ctx->pc != 0x517980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005179F0_0x5179f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x517980u; }
        if (ctx->pc != 0x517980u) { return; }
    }
    ctx->pc = 0x517980u;
label_517980:
    // 0x517980: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x517980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_517984:
    // 0x517984: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x517984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_517988:
    // 0x517988: 0x10000002  b           . + 4 + (0x2 << 2)
label_51798c:
    if (ctx->pc == 0x51798Cu) {
        ctx->pc = 0x51798Cu;
            // 0x51798c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x517990u;
        goto label_517990;
    }
    ctx->pc = 0x517988u;
    {
        const bool branch_taken_0x517988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51798Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x517988u;
            // 0x51798c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x517988) {
            ctx->pc = 0x517994u;
            goto label_517994;
        }
    }
    ctx->pc = 0x517990u;
label_517990:
    // 0x517990: 0xaca0012c  sw          $zero, 0x12C($a1)
    ctx->pc = 0x517990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 300), GPR_U32(ctx, 0));
label_517994:
    // 0x517994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x517994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_517998:
    // 0x517998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x517998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51799c:
    // 0x51799c: 0x3e00008  jr          $ra
label_5179a0:
    if (ctx->pc == 0x5179A0u) {
        ctx->pc = 0x5179A0u;
            // 0x5179a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5179A4u;
        goto label_5179a4;
    }
    ctx->pc = 0x51799Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5179A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51799Cu;
            // 0x5179a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5179A4u;
label_5179a4:
    // 0x5179a4: 0x0  nop
    ctx->pc = 0x5179a4u;
    // NOP
label_5179a8:
    // 0x5179a8: 0x0  nop
    ctx->pc = 0x5179a8u;
    // NOP
label_5179ac:
    // 0x5179ac: 0x0  nop
    ctx->pc = 0x5179acu;
    // NOP
}
