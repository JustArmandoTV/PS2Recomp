#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE6D0
// Address: 0x2fe6d0 - 0x2fe900
void sub_002FE6D0_0x2fe6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE6D0_0x2fe6d0");
#endif

    ctx->pc = 0x2fe6d0u;

    // 0x2fe6d0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2fe6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2fe6d4: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2fe6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fe6d8: 0xc460ee48  lwc1        $f0, -0x11B8($v1)
    ctx->pc = 0x2fe6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe6dc: 0xc481002c  lwc1        $f1, 0x2C($a0)
    ctx->pc = 0x2fe6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe6e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2fe6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2fe6e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2fe6e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fe6e8: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x2fe6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x2fe6ec: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2fe6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2fe6f0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2fe6f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fe6f4: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2fe6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe6f8: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x2fe6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2fe6fc: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x2fe6fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fe700: 0x14600064  bnez        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x2FE700u;
    {
        const bool branch_taken_0x2fe700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FE704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE700u;
            // 0x2fe704: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe700) {
            ctx->pc = 0x2FE894u;
            goto label_2fe894;
        }
    }
    ctx->pc = 0x2FE708u;
    // 0x2fe708: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x2fe708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2fe70c: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2FE70Cu;
    {
        const bool branch_taken_0x2fe70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe70c) {
            ctx->pc = 0x2FE710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE70Cu;
            // 0x2fe710: 0x30a30020  andi        $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE794u;
            goto label_2fe794;
        }
    }
    ctx->pc = 0x2FE714u;
    // 0x2fe714: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x2fe714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe718: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x2fe718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe71c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fe71cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe720: 0x0  nop
    ctx->pc = 0x2fe720u;
    // NOP
    // 0x2fe724: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2fe724u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe728: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2fe728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2fe72c: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x2fe72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2fe730: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2fe730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2fe734: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x2fe734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe738: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2fe738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe73c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fe73cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe740: 0x45030036  bc1tl       . + 4 + (0x36 << 2)
    ctx->pc = 0x2FE740u;
    {
        const bool branch_taken_0x2fe740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fe740) {
            ctx->pc = 0x2FE744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE740u;
            // 0x2fe744: 0xc481003c  lwc1        $f1, 0x3C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE81Cu;
            goto label_2fe81c;
        }
    }
    ctx->pc = 0x2FE748u;
    // 0x2fe748: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2fe748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fe74c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2fe74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2fe750: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2fe750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2fe754: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2fe754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2fe758: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FE758u;
    {
        const bool branch_taken_0x2fe758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe758) {
            ctx->pc = 0x2FE75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE758u;
            // 0x2fe75c: 0xc4800044  lwc1        $f0, 0x44($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE788u;
            goto label_2fe788;
        }
    }
    ctx->pc = 0x2FE760u;
    // 0x2fe760: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2fe760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2fe764: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2fe764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2fe768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe76c: 0x0  nop
    ctx->pc = 0x2fe76cu;
    // NOP
    // 0x2fe770: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2fe770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2fe774: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x2fe774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2fe778: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2fe778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fe77c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2fe77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2fe780: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2FE780u;
    {
        const bool branch_taken_0x2fe780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE780u;
            // 0x2fe784: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe780) {
            ctx->pc = 0x2FE818u;
            goto label_2fe818;
        }
    }
    ctx->pc = 0x2FE788u;
label_2fe788:
    // 0x2fe788: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fe788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fe78c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2FE78Cu;
    {
        const bool branch_taken_0x2fe78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE78Cu;
            // 0x2fe790: 0xe4800044  swc1        $f0, 0x44($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe78c) {
            ctx->pc = 0x2FE818u;
            goto label_2fe818;
        }
    }
    ctx->pc = 0x2FE794u;
label_2fe794:
    // 0x2fe794: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FE794u;
    {
        const bool branch_taken_0x2fe794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe794) {
            ctx->pc = 0x2FE818u;
            goto label_2fe818;
        }
    }
    ctx->pc = 0x2FE79Cu;
    // 0x2fe79c: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x2fe79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe7a0: 0xc4820038  lwc1        $f2, 0x38($a0)
    ctx->pc = 0x2fe7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe7a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fe7a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe7a8: 0x0  nop
    ctx->pc = 0x2fe7a8u;
    // NOP
    // 0x2fe7ac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2fe7acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe7b0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2fe7b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2fe7b4: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2fe7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2fe7b8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2fe7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2fe7bc: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x2fe7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe7c0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2fe7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe7c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fe7c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe7c8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x2FE7C8u;
    {
        const bool branch_taken_0x2fe7c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fe7c8) {
            ctx->pc = 0x2FE818u;
            goto label_2fe818;
        }
    }
    ctx->pc = 0x2FE7D0u;
    // 0x2fe7d0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2fe7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fe7d4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2fe7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2fe7d8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2fe7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2fe7dc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2fe7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2fe7e0: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FE7E0u;
    {
        const bool branch_taken_0x2fe7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe7e0) {
            ctx->pc = 0x2FE7E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE7E0u;
            // 0x2fe7e4: 0xc4800040  lwc1        $f0, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE810u;
            goto label_2fe810;
        }
    }
    ctx->pc = 0x2FE7E8u;
    // 0x2fe7e8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2fe7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2fe7ec: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2fe7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2fe7f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe7f4: 0x0  nop
    ctx->pc = 0x2fe7f4u;
    // NOP
    // 0x2fe7f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2fe7f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2fe7fc: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2fe7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2fe800: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2fe800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fe804: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2fe804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2fe808: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE808u;
    {
        const bool branch_taken_0x2fe808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE808u;
            // 0x2fe80c: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe808) {
            ctx->pc = 0x2FE818u;
            goto label_2fe818;
        }
    }
    ctx->pc = 0x2FE810u;
label_2fe810:
    // 0x2fe810: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fe810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fe814: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2fe814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
label_2fe818:
    // 0x2fe818: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x2fe818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fe81c:
    // 0x2fe81c: 0xc4820030  lwc1        $f2, 0x30($a0)
    ctx->pc = 0x2fe81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fe820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe824: 0x0  nop
    ctx->pc = 0x2fe824u;
    // NOP
    // 0x2fe828: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2fe828u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe82c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2fe82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2fe830: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2fe830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2fe834: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2fe834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2fe838: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x2fe838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe83c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2fe83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe840: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fe840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe844: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x2FE844u;
    {
        const bool branch_taken_0x2fe844 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fe844) {
            ctx->pc = 0x2FE848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE844u;
            // 0x2fe848: 0x8c830020  lw          $v1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE898u;
            goto label_2fe898;
        }
    }
    ctx->pc = 0x2FE84Cu;
    // 0x2fe84c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2fe84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fe850: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2fe850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2fe854: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2fe854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x2fe858: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2fe858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2fe85c: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FE85Cu;
    {
        const bool branch_taken_0x2fe85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe85c) {
            ctx->pc = 0x2FE860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE85Cu;
            // 0x2fe860: 0xc480003c  lwc1        $f0, 0x3C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FE88Cu;
            goto label_2fe88c;
        }
    }
    ctx->pc = 0x2FE864u;
    // 0x2fe864: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2fe864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2fe868: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2fe868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2fe86c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe86cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe870: 0x0  nop
    ctx->pc = 0x2fe870u;
    // NOP
    // 0x2fe874: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2fe874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2fe878: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2fe878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2fe87c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2fe87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fe880: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2fe880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2fe884: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE884u;
    {
        const bool branch_taken_0x2fe884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE884u;
            // 0x2fe888: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe884) {
            ctx->pc = 0x2FE894u;
            goto label_2fe894;
        }
    }
    ctx->pc = 0x2FE88Cu;
label_2fe88c:
    // 0x2fe88c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fe88cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fe890: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2fe890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_2fe894:
    // 0x2fe894: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2fe894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2fe898:
    // 0x2fe898: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x2fe898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x2fe89c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FE89Cu;
    {
        const bool branch_taken_0x2fe89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe89c) {
            ctx->pc = 0x2FE8ECu;
            goto label_2fe8ec;
        }
    }
    ctx->pc = 0x2FE8A4u;
    // 0x2fe8a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2fe8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x2fe8a8: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x2fe8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x2fe8ac: 0xc4820048  lwc1        $f2, 0x48($a0)
    ctx->pc = 0x2fe8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe8b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2fe8b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe8b4: 0xc483004c  lwc1        $f3, 0x4C($a0)
    ctx->pc = 0x2fe8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fe8b8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2fe8b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2fe8bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fe8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe8c0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2fe8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe8c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fe8c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe8c8: 0x0  nop
    ctx->pc = 0x2fe8c8u;
    // NOP
    // 0x2fe8cc: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x2fe8ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x2fe8d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fe8d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe8d4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE8D4u;
    {
        const bool branch_taken_0x2fe8d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FE8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE8D4u;
            // 0x2fe8d8: 0xe4810048  swc1        $f1, 0x48($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe8d4) {
            ctx->pc = 0x2FE8ECu;
            goto label_2fe8ec;
        }
    }
    ctx->pc = 0x2FE8DCu;
    // 0x2fe8dc: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2fe8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fe8e0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2fe8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2fe8e4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2fe8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fe8e8: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2fe8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_2fe8ec:
    // 0x2fe8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE8F4u;
    // 0x2fe8f4: 0x0  nop
    ctx->pc = 0x2fe8f4u;
    // NOP
    // 0x2fe8f8: 0x0  nop
    ctx->pc = 0x2fe8f8u;
    // NOP
    // 0x2fe8fc: 0x0  nop
    ctx->pc = 0x2fe8fcu;
    // NOP
}
