#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B890
// Address: 0x14b890 - 0x14bd20
void sub_0014B890_0x14b890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B890_0x14b890");
#endif

    switch (ctx->pc) {
        case 0x14ba48u: goto label_14ba48;
        case 0x14ba58u: goto label_14ba58;
        case 0x14ba80u: goto label_14ba80;
        case 0x14ba88u: goto label_14ba88;
        case 0x14baf8u: goto label_14baf8;
        case 0x14bb68u: goto label_14bb68;
        case 0x14bc4cu: goto label_14bc4c;
        case 0x14bc54u: goto label_14bc54;
        case 0x14bcd0u: goto label_14bcd0;
        default: break;
    }

    ctx->pc = 0x14b890u;

    // 0x14b890: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x14b890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x14b894: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x14b894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14b898: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x14b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14b89c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14b8a0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14b8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14b8a4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14b8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14b8a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14b8a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14b8b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14b8b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b8b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b8bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14b8bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14b8c0: 0x8c930008  lw          $s3, 0x8($a0)
    ctx->pc = 0x14b8c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14b8c4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x14b8c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14b8c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b8cc: 0x3044000c  andi        $a0, $v0, 0xC
    ctx->pc = 0x14b8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x14b8d0: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x14B8D0u;
    {
        const bool branch_taken_0x14b8d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x14B8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8D0u;
            // 0x14b8d4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8d0) {
            ctx->pc = 0x14B960u;
            goto label_14b960;
        }
    }
    ctx->pc = 0x14B8D8u;
    // 0x14b8d8: 0x50900003  beql        $a0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B8D8u;
    {
        const bool branch_taken_0x14b8d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x14b8d8) {
            ctx->pc = 0x14B8DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8D8u;
            // 0x14b8dc: 0x30440003  andi        $a0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B8E8u;
            goto label_14b8e8;
        }
    }
    ctx->pc = 0x14B8E0u;
    // 0x14b8e0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14B8E0u;
    {
        const bool branch_taken_0x14b8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8E0u;
            // 0x14b8e4: 0x30440070  andi        $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b8e0) {
            ctx->pc = 0x14B9DCu;
            goto label_14b9dc;
        }
    }
    ctx->pc = 0x14B8E8u;
label_14b8e8:
    // 0x14b8e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14b8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b8ec: 0x5085000e  beql        $a0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x14B8ECu;
    {
        const bool branch_taken_0x14b8ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x14b8ec) {
            ctx->pc = 0x14B8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8ECu;
            // 0x14b8f0: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B928u;
            goto label_14b928;
        }
    }
    ctx->pc = 0x14B8F4u;
    // 0x14b8f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b8f8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B8F8u;
    {
        const bool branch_taken_0x14b8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14b8f8) {
            ctx->pc = 0x14B8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B8F8u;
            // 0x14b8fc: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B908u;
            goto label_14b908;
        }
    }
    ctx->pc = 0x14B900u;
    // 0x14b900: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14B900u;
    {
        const bool branch_taken_0x14b900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B900u;
            // 0x14b904: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b900) {
            ctx->pc = 0x14B948u;
            goto label_14b948;
        }
    }
    ctx->pc = 0x14B908u;
label_14b908:
    // 0x14b908: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x14b908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x14b90c: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x14b90cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14b910: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B910u;
    {
        const bool branch_taken_0x14b910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b910) {
            ctx->pc = 0x14B914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B910u;
            // 0x14b914: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B920u;
            goto label_14b920;
        }
    }
    ctx->pc = 0x14B918u;
    // 0x14b918: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14B918u;
    {
        const bool branch_taken_0x14b918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B918u;
            // 0x14b91c: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b918) {
            ctx->pc = 0x14B944u;
            goto label_14b944;
        }
    }
    ctx->pc = 0x14B920u;
label_14b920:
    // 0x14b920: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B920u;
    {
        const bool branch_taken_0x14b920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B920u;
            // 0x14b924: 0x2412000f  addiu       $s2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b920) {
            ctx->pc = 0x14B944u;
            goto label_14b944;
        }
    }
    ctx->pc = 0x14B928u;
label_14b928:
    // 0x14b928: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x14b928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
    // 0x14b92c: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x14b92cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14b930: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B930u;
    {
        const bool branch_taken_0x14b930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b930) {
            ctx->pc = 0x14B934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B930u;
            // 0x14b934: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B940u;
            goto label_14b940;
        }
    }
    ctx->pc = 0x14B938u;
    // 0x14b938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B938u;
    {
        const bool branch_taken_0x14b938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B938u;
            // 0x14b93c: 0x24120018  addiu       $s2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b938) {
            ctx->pc = 0x14B944u;
            goto label_14b944;
        }
    }
    ctx->pc = 0x14B940u;
label_14b940:
    // 0x14b940: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x14b940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_14b944:
    // 0x14b944: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14b944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_14b948:
    // 0x14b948: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x14B948u;
    {
        const bool branch_taken_0x14b948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b948) {
            ctx->pc = 0x14BA40u;
            goto label_14ba40;
        }
    }
    ctx->pc = 0x14B950u;
    // 0x14b950: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14b950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14b954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b958: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x14B958u;
    {
        const bool branch_taken_0x14b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B958u;
            // 0x14b95c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b958) {
            ctx->pc = 0x14BA40u;
            goto label_14ba40;
        }
    }
    ctx->pc = 0x14B960u;
label_14b960:
    // 0x14b960: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x14b960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b964: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14b964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b968: 0x5085000e  beql        $a0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x14B968u;
    {
        const bool branch_taken_0x14b968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x14b968) {
            ctx->pc = 0x14B96Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B968u;
            // 0x14b96c: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B9A4u;
            goto label_14b9a4;
        }
    }
    ctx->pc = 0x14B970u;
    // 0x14b970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14b970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b974: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B974u;
    {
        const bool branch_taken_0x14b974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14b974) {
            ctx->pc = 0x14B978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B974u;
            // 0x14b978: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B984u;
            goto label_14b984;
        }
    }
    ctx->pc = 0x14B97Cu;
    // 0x14b97c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14B97Cu;
    {
        const bool branch_taken_0x14b97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B97Cu;
            // 0x14b980: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b97c) {
            ctx->pc = 0x14B9C4u;
            goto label_14b9c4;
        }
    }
    ctx->pc = 0x14B984u;
label_14b984:
    // 0x14b984: 0x3c0440b0  lui         $a0, 0x40B0
    ctx->pc = 0x14b984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16560 << 16));
    // 0x14b988: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x14b988u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14b98c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B98Cu;
    {
        const bool branch_taken_0x14b98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b98c) {
            ctx->pc = 0x14B990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B98Cu;
            // 0x14b990: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B99Cu;
            goto label_14b99c;
        }
    }
    ctx->pc = 0x14B994u;
    // 0x14b994: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14B994u;
    {
        const bool branch_taken_0x14b994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B994u;
            // 0x14b998: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b994) {
            ctx->pc = 0x14B9C0u;
            goto label_14b9c0;
        }
    }
    ctx->pc = 0x14B99Cu;
label_14b99c:
    // 0x14b99c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B99Cu;
    {
        const bool branch_taken_0x14b99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B99Cu;
            // 0x14b9a0: 0x2412000f  addiu       $s2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b99c) {
            ctx->pc = 0x14B9C0u;
            goto label_14b9c0;
        }
    }
    ctx->pc = 0x14B9A4u;
label_14b9a4:
    // 0x14b9a4: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x14b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x14b9a8: 0x4484a000  mtc1        $a0, $f20
    ctx->pc = 0x14b9a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14b9ac: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B9ACu;
    {
        const bool branch_taken_0x14b9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b9ac) {
            ctx->pc = 0x14B9B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9ACu;
            // 0x14b9b0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B9BCu;
            goto label_14b9bc;
        }
    }
    ctx->pc = 0x14B9B4u;
    // 0x14b9b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B9B4u;
    {
        const bool branch_taken_0x14b9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9B4u;
            // 0x14b9b8: 0x24120018  addiu       $s2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9b4) {
            ctx->pc = 0x14B9C0u;
            goto label_14b9c0;
        }
    }
    ctx->pc = 0x14B9BCu;
label_14b9bc:
    // 0x14b9bc: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x14b9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_14b9c0:
    // 0x14b9c0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14b9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_14b9c4:
    // 0x14b9c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14B9C4u;
    {
        const bool branch_taken_0x14b9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b9c4) {
            ctx->pc = 0x14BA40u;
            goto label_14ba40;
        }
    }
    ctx->pc = 0x14B9CCu;
    // 0x14b9cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14b9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b9d4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14B9D4u;
    {
        const bool branch_taken_0x14b9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9D4u;
            // 0x14b9d8: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9d4) {
            ctx->pc = 0x14BA40u;
            goto label_14ba40;
        }
    }
    ctx->pc = 0x14B9DCu;
label_14b9dc:
    // 0x14b9dc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x14b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14b9e0: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14B9E0u;
    {
        const bool branch_taken_0x14b9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14b9e0) {
            ctx->pc = 0x14B9E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9E0u;
            // 0x14b9e4: 0x30420100  andi        $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BA1Cu;
            goto label_14ba1c;
        }
    }
    ctx->pc = 0x14B9E8u;
    // 0x14b9e8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x14b9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14b9ec: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B9ECu;
    {
        const bool branch_taken_0x14b9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14b9ec) {
            ctx->pc = 0x14B9F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9ECu;
            // 0x14b9f0: 0x3c034180  lui         $v1, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14B9FCu;
            goto label_14b9fc;
        }
    }
    ctx->pc = 0x14B9F4u;
    // 0x14b9f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14B9F4u;
    {
        const bool branch_taken_0x14b9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B9F4u;
            // 0x14b9f8: 0x3c024140  lui         $v0, 0x4140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b9f4) {
            ctx->pc = 0x14BA30u;
            goto label_14ba30;
        }
    }
    ctx->pc = 0x14B9FCu;
label_14b9fc:
    // 0x14b9fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x14b9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x14ba00: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x14ba00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14ba04: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x14BA04u;
    {
        const bool branch_taken_0x14ba04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ba04) {
            ctx->pc = 0x14BA08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA04u;
            // 0x14ba08: 0x24120010  addiu       $s2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BA40u;
            goto label_14ba40;
        }
    }
    ctx->pc = 0x14BA0Cu;
    // 0x14ba0c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14ba10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ba10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ba14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14BA14u;
    {
        const bool branch_taken_0x14ba14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA14u;
            // 0x14ba18: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba14) {
            ctx->pc = 0x14BA3Cu;
            goto label_14ba3c;
        }
    }
    ctx->pc = 0x14BA1Cu;
label_14ba1c:
    // 0x14ba1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BA1Cu;
    {
        const bool branch_taken_0x14ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ba1c) {
            ctx->pc = 0x14BA2Cu;
            goto label_14ba2c;
        }
    }
    ctx->pc = 0x14BA24u;
    // 0x14ba24: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14ba28: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x14ba28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14ba2c:
    // 0x14ba2c: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x14ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_14ba30:
    // 0x14ba30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ba30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ba34: 0x0  nop
    ctx->pc = 0x14ba34u;
    // NOP
    // 0x14ba38: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x14ba38u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_14ba3c:
    // 0x14ba3c: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x14ba3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_14ba40:
    // 0x14ba40: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x14BA40u;
    SET_GPR_U32(ctx, 31, 0x14BA48u);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA48u; }
        if (ctx->pc != 0x14BA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA48u; }
        if (ctx->pc != 0x14BA48u) { return; }
    }
    ctx->pc = 0x14BA48u;
label_14ba48:
    // 0x14ba48: 0x10b080  sll         $s6, $s0, 2
    ctx->pc = 0x14ba48u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14ba4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14ba4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14ba50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba54: 0x2761821  addu        $v1, $s3, $s6
    ctx->pc = 0x14ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_14ba58:
    // 0x14ba58: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14ba5c: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x14ba5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ba60: 0x8c425774  lw          $v0, 0x5774($v0)
    ctx->pc = 0x14ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22388)));
    // 0x14ba64: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x14ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x14ba68: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x14ba68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14ba6c: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x14ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14ba70: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x14ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14ba74: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14ba74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14ba78: 0xc04ab60  jal         func_12AD80
    ctx->pc = 0x14BA78u;
    SET_GPR_U32(ctx, 31, 0x14BA80u);
    ctx->pc = 0x14BA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BA78u;
            // 0x14ba7c: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD80u;
    if (runtime->hasFunction(0x12AD80u)) {
        auto targetFn = runtime->lookupFunction(0x12AD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA80u; }
        if (ctx->pc != 0x14BA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD80_0x12ad80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA80u; }
        if (ctx->pc != 0x14BA80u) { return; }
    }
    ctx->pc = 0x14BA80u;
label_14ba80:
    // 0x14ba80: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x14BA80u;
    SET_GPR_U32(ctx, 31, 0x14BA88u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA88u; }
        if (ctx->pc != 0x14BA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BA88u; }
        if (ctx->pc != 0x14BA88u) { return; }
    }
    ctx->pc = 0x14BA88u;
label_14ba88:
    // 0x14ba88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ba88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ba8c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x14ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x14ba90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14ba90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14ba94: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x14ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x14ba98: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14ba9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14ba9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14baa0: 0x0  nop
    ctx->pc = 0x14baa0u;
    // NOP
    // 0x14baa4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14baa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14baa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14baa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14baac: 0x0  nop
    ctx->pc = 0x14baacu;
    // NOP
    // 0x14bab0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14bab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14bab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bab8: 0x0  nop
    ctx->pc = 0x14bab8u;
    // NOP
    // 0x14babc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14babcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bac0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14BAC0u;
    {
        const bool branch_taken_0x14bac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bac0) {
            ctx->pc = 0x14BAC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAC0u;
            // 0x14bac4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BAD8u;
            goto label_14bad8;
        }
    }
    ctx->pc = 0x14BAC8u;
    // 0x14bac8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14bacc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14baccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bad0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14BAD0u;
    {
        const bool branch_taken_0x14bad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAD0u;
            // 0x14bad4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bad0) {
            ctx->pc = 0x14BAF0u;
            goto label_14baf0;
        }
    }
    ctx->pc = 0x14BAD8u;
label_14bad8:
    // 0x14bad8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14badc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14badcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14bae0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14bae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bae4: 0x0  nop
    ctx->pc = 0x14bae4u;
    // NOP
    // 0x14bae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14bae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14baec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14baecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14baf0:
    // 0x14baf0: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x14BAF0u;
    SET_GPR_U32(ctx, 31, 0x14BAF8u);
    ctx->pc = 0x14BAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BAF0u;
            // 0x14baf4: 0xa3838068  sb          $v1, -0x7F98($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934632), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAF8u; }
        if (ctx->pc != 0x14BAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BAF8u; }
        if (ctx->pc != 0x14BAF8u) { return; }
    }
    ctx->pc = 0x14BAF8u;
label_14baf8:
    // 0x14baf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14baf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bafc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x14bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x14bb00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14bb00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14bb04: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x14bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x14bb08: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14bb0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14bb0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bb10: 0x0  nop
    ctx->pc = 0x14bb10u;
    // NOP
    // 0x14bb14: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14bb14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14bb18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14bb18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bb1c: 0x0  nop
    ctx->pc = 0x14bb1cu;
    // NOP
    // 0x14bb20: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14bb20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14bb24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bb28: 0x0  nop
    ctx->pc = 0x14bb28u;
    // NOP
    // 0x14bb2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14bb2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bb30: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14BB30u;
    {
        const bool branch_taken_0x14bb30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bb30) {
            ctx->pc = 0x14BB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB30u;
            // 0x14bb34: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BB48u;
            goto label_14bb48;
        }
    }
    ctx->pc = 0x14BB38u;
    // 0x14bb38: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bb38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14bb3c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14bb3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bb40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14BB40u;
    {
        const bool branch_taken_0x14bb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB40u;
            // 0x14bb44: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb40) {
            ctx->pc = 0x14BB60u;
            goto label_14bb60;
        }
    }
    ctx->pc = 0x14BB48u;
label_14bb48:
    // 0x14bb48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14bb4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bb4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14bb50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14bb50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bb54: 0x0  nop
    ctx->pc = 0x14bb54u;
    // NOP
    // 0x14bb58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14bb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14bb5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14bb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14bb60:
    // 0x14bb60: 0xc04ab66  jal         func_12AD98
    ctx->pc = 0x14BB60u;
    SET_GPR_U32(ctx, 31, 0x14BB68u);
    ctx->pc = 0x14BB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BB60u;
            // 0x14bb64: 0xa3838069  sb          $v1, -0x7F97($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934633), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB68u; }
        if (ctx->pc != 0x14BB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BB68u; }
        if (ctx->pc != 0x14BB68u) { return; }
    }
    ctx->pc = 0x14BB68u;
label_14bb68:
    // 0x14bb68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bb68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bb6c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x14bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x14bb70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14bb70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14bb74: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x14bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x14bb78: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14bb7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14bb7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bb80: 0x0  nop
    ctx->pc = 0x14bb80u;
    // NOP
    // 0x14bb84: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14bb84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14bb88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14bb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bb8c: 0x0  nop
    ctx->pc = 0x14bb8cu;
    // NOP
    // 0x14bb90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14bb90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14bb94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bb94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bb98: 0x0  nop
    ctx->pc = 0x14bb98u;
    // NOP
    // 0x14bb9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14bb9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bba0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14BBA0u;
    {
        const bool branch_taken_0x14bba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bba0) {
            ctx->pc = 0x14BBA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBA0u;
            // 0x14bba4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BBB8u;
            goto label_14bbb8;
        }
    }
    ctx->pc = 0x14BBA8u;
    // 0x14bba8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bba8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14bbac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14bbacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bbb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14BBB0u;
    {
        const bool branch_taken_0x14bbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBB0u;
            // 0x14bbb4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbb0) {
            ctx->pc = 0x14BBD0u;
            goto label_14bbd0;
        }
    }
    ctx->pc = 0x14BBB8u;
label_14bbb8:
    // 0x14bbb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14bbbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bbbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14bbc0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14bbc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bbc4: 0x0  nop
    ctx->pc = 0x14bbc4u;
    // NOP
    // 0x14bbc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14bbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14bbcc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14bbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14bbd0:
    // 0x14bbd0: 0xc7818364  lwc1        $f1, -0x7C9C($gp)
    ctx->pc = 0x14bbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bbd4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x14bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x14bbd8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14bbd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14bbdc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14bbe0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x14bbe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14bbe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bbe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bbe8: 0x0  nop
    ctx->pc = 0x14bbe8u;
    // NOP
    // 0x14bbec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14bbecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bbf0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14BBF0u;
    {
        const bool branch_taken_0x14bbf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BBF0u;
            // 0x14bbf4: 0xa383806a  sb          $v1, -0x7F96($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294934634), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bbf0) {
            ctx->pc = 0x14BC08u;
            goto label_14bc08;
        }
    }
    ctx->pc = 0x14BBF8u;
    // 0x14bbf8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bbf8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14bbfc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14bbfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bc00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14BC00u;
    {
        const bool branch_taken_0x14bc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC00u;
            // 0x14bc04: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc00) {
            ctx->pc = 0x14BC24u;
            goto label_14bc24;
        }
    }
    ctx->pc = 0x14BC08u;
label_14bc08:
    // 0x14bc08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14bc08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14bc0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14bc10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bc10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14bc14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14bc14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bc18: 0x0  nop
    ctx->pc = 0x14bc18u;
    // NOP
    // 0x14bc1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14bc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14bc20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14bc20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14bc24:
    // 0x14bc24: 0xa383806b  sb          $v1, -0x7F95($gp)
    ctx->pc = 0x14bc24u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934635), (uint8_t)GPR_U32(ctx, 3));
    // 0x14bc28: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x14bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14bc2c: 0x93888068  lbu         $t0, -0x7F98($gp)
    ctx->pc = 0x14bc2cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934632)));
    // 0x14bc30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14bc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc34: 0x93898069  lbu         $t1, -0x7F97($gp)
    ctx->pc = 0x14bc34u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934633)));
    // 0x14bc38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14bc38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bc3c: 0x938a806a  lbu         $t2, -0x7F96($gp)
    ctx->pc = 0x14bc3cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934634)));
    // 0x14bc40: 0x938b806b  lbu         $t3, -0x7F95($gp)
    ctx->pc = 0x14bc40u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934635)));
    // 0x14bc44: 0xc0574a0  jal         func_15D280
    ctx->pc = 0x14BC44u;
    SET_GPR_U32(ctx, 31, 0x14BC4Cu);
    ctx->pc = 0x14BC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC44u;
            // 0x14bc48: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D280u;
    if (runtime->hasFunction(0x15D280u)) {
        auto targetFn = runtime->lookupFunction(0x15D280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC4Cu; }
        if (ctx->pc != 0x14BC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D280_0x15d280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC4Cu; }
        if (ctx->pc != 0x14BC4Cu) { return; }
    }
    ctx->pc = 0x14BC4Cu;
label_14bc4c:
    // 0x14bc4c: 0xc0574b0  jal         func_15D2C0
    ctx->pc = 0x14BC4Cu;
    SET_GPR_U32(ctx, 31, 0x14BC54u);
    ctx->pc = 0x14BC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC4Cu;
            // 0x14bc50: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D2C0u;
    if (runtime->hasFunction(0x15D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC54u; }
        if (ctx->pc != 0x14BC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D2C0_0x15d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BC54u; }
        if (ctx->pc != 0x14BC54u) { return; }
    }
    ctx->pc = 0x14BC54u;
label_14bc54:
    // 0x14bc54: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x14bc54u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bc58: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x14bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x14bc5c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14bc5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14bc60: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14bc64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14bc64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14bc68: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14bc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14bc6c: 0x0  nop
    ctx->pc = 0x14bc6cu;
    // NOP
    // 0x14bc70: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x14bc70u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14bc74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14bc74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bc78: 0x4614185c  madd.s      $f1, $f3, $f20
    ctx->pc = 0x14bc78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
    // 0x14bc7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x14bc7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bc80: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14BC80u;
    {
        const bool branch_taken_0x14bc80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bc80) {
            ctx->pc = 0x14BC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC80u;
            // 0x14bc84: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BC98u;
            goto label_14bc98;
        }
    }
    ctx->pc = 0x14BC88u;
    // 0x14bc88: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bc88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14bc8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14bc8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bc90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14BC90u;
    {
        const bool branch_taken_0x14bc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BC90u;
            // 0x14bc94: 0x2431821  addu        $v1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc90) {
            ctx->pc = 0x14BCB0u;
            goto label_14bcb0;
        }
    }
    ctx->pc = 0x14BC98u;
label_14bc98:
    // 0x14bc98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14bc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14bc9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bc9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14bca0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14bca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x14bca4: 0x0  nop
    ctx->pc = 0x14bca4u;
    // NOP
    // 0x14bca8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14bca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14bcac: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14bcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_14bcb0:
    // 0x14bcb0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x14bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x14bcb4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x14bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x14bcb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14bcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bcbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14bcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14bcc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14bcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bcc4: 0x2a082  srl         $s4, $v0, 2
    ctx->pc = 0x14bcc4u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x14bcc8: 0xc056b18  jal         func_15AC60
    ctx->pc = 0x14BCC8u;
    SET_GPR_U32(ctx, 31, 0x14BCD0u);
    ctx->pc = 0x14BCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCC8u;
            // 0x14bccc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC60u;
    if (runtime->hasFunction(0x15AC60u)) {
        auto targetFn = runtime->lookupFunction(0x15AC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCD0u; }
        if (ctx->pc != 0x14BCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC60_0x15ac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14BCD0u; }
        if (ctx->pc != 0x14BCD0u) { return; }
    }
    ctx->pc = 0x14BCD0u;
label_14bcd0:
    // 0x14bcd0: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x14bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x14bcd4: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x14bcd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14bcd8: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x14bcd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x14bcdc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14bce0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14bce4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x14bce4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14bce8: 0x5460ff5b  bnel        $v1, $zero, . + 4 + (-0xA5 << 2)
    ctx->pc = 0x14BCE8u;
    {
        const bool branch_taken_0x14bce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bce8) {
            ctx->pc = 0x14BCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14BCE8u;
            // 0x14bcec: 0x2761821  addu        $v1, $s3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14BA58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14ba58;
        }
    }
    ctx->pc = 0x14BCF0u;
    // 0x14bcf0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14bcf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14bcf4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14bcf8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14bcf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14bcfc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14bcfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14bd00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14bd00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14bd04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14bd04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14bd08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14bd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14bd0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14bd0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14bd10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14bd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bd14: 0x3e00008  jr          $ra
    ctx->pc = 0x14BD14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14BD14u;
            // 0x14bd18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14BD1Cu;
    // 0x14bd1c: 0x0  nop
    ctx->pc = 0x14bd1cu;
    // NOP
}
