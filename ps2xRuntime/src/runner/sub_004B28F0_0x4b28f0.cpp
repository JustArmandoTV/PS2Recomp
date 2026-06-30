#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B28F0
// Address: 0x4b28f0 - 0x4b2b00
void sub_004B28F0_0x4b28f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B28F0_0x4b28f0");
#endif

    switch (ctx->pc) {
        case 0x4b2958u: goto label_4b2958;
        case 0x4b2a14u: goto label_4b2a14;
        case 0x4b2a7cu: goto label_4b2a7c;
        case 0x4b2ac0u: goto label_4b2ac0;
        case 0x4b2ae0u: goto label_4b2ae0;
        default: break;
    }

    ctx->pc = 0x4b28f0u;

    // 0x4b28f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b28f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4b28f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b28f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4b28f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b28f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4b28fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b28fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2900: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b2900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4b2904: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b2904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4b2908: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b2908u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b290c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4b2910: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4b2910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2914: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b2914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b2918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b2918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b291c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4b291cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4b2920: 0x8c7189e8  lw          $s1, -0x7618($v1)
    ctx->pc = 0x4b2920u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
    // 0x4b2924: 0x8c850d6c  lw          $a1, 0xD6C($a0)
    ctx->pc = 0x4b2924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
    // 0x4b2928: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x4b2928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
    // 0x4b292c: 0x90b00010  lbu         $s0, 0x10($a1)
    ctx->pc = 0x4b292cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4b2930: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B2930u;
    {
        const bool branch_taken_0x4b2930 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B2934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2930u;
            // 0x4b2934: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2930) {
            ctx->pc = 0x4B2948u;
            goto label_4b2948;
        }
    }
    ctx->pc = 0x4B2938u;
    // 0x4b2938: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4b2938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x4b293c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B293Cu;
    {
        const bool branch_taken_0x4b293c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b293c) {
            ctx->pc = 0x4B2948u;
            goto label_4b2948;
        }
    }
    ctx->pc = 0x4B2944u;
    // 0x4b2944: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4b2944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2948:
    // 0x4b2948: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B2948u;
    {
        const bool branch_taken_0x4b2948 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2948) {
            ctx->pc = 0x4B2964u;
            goto label_4b2964;
        }
    }
    ctx->pc = 0x4B2950u;
    // 0x4b2950: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x4B2950u;
    SET_GPR_U32(ctx, 31, 0x4B2958u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2958u; }
        if (ctx->pc != 0x4B2958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2958u; }
        if (ctx->pc != 0x4B2958u) { return; }
    }
    ctx->pc = 0x4B2958u;
label_4b2958:
    // 0x4b2958: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B2958u;
    {
        const bool branch_taken_0x4b2958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2958) {
            ctx->pc = 0x4B2964u;
            goto label_4b2964;
        }
    }
    ctx->pc = 0x4B2960u;
    // 0x4b2960: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b2960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b2964:
    // 0x4b2964: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4B2964u;
    {
        const bool branch_taken_0x4b2964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2964) {
            ctx->pc = 0x4B2968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2964u;
            // 0x4b2968: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2998u;
            goto label_4b2998;
        }
    }
    ctx->pc = 0x4B296Cu;
    // 0x4b296c: 0x320600ff  andi        $a2, $s0, 0xFF
    ctx->pc = 0x4b296cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x4b2970: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b2970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b2974: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x4b2974u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4b2978: 0x24840db0  addiu       $a0, $a0, 0xDB0
    ctx->pc = 0x4b2978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3504));
    // 0x4b297c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4b297cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4b2980: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x4b2980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4b2984: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4b2984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x4b2988: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4b2988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4b298c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b298cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b2990: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4B2990u;
    {
        const bool branch_taken_0x4b2990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2990u;
            // 0x4b2994: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2990) {
            ctx->pc = 0x4B29ECu;
            goto label_4b29ec;
        }
    }
    ctx->pc = 0x4B2998u;
label_4b2998:
    // 0x4b2998: 0x5263000c  beql        $s3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4B2998u;
    {
        const bool branch_taken_0x4b2998 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b2998) {
            ctx->pc = 0x4B299Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2998u;
            // 0x4b299c: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B29CCu;
            goto label_4b29cc;
        }
    }
    ctx->pc = 0x4B29A0u;
    // 0x4b29a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4b29a4: 0x52630003  beql        $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B29A4u;
    {
        const bool branch_taken_0x4b29a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b29a4) {
            ctx->pc = 0x4B29A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B29A4u;
            // 0x4b29a8: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B29B4u;
            goto label_4b29b4;
        }
    }
    ctx->pc = 0x4B29ACu;
    // 0x4b29ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B29ACu;
    {
        const bool branch_taken_0x4b29ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b29ac) {
            ctx->pc = 0x4B29E4u;
            goto label_4b29e4;
        }
    }
    ctx->pc = 0x4B29B4u;
label_4b29b4:
    // 0x4b29b4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b29b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4b29b8: 0x24631310  addiu       $v1, $v1, 0x1310
    ctx->pc = 0x4b29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4880));
    // 0x4b29bc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4b29bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x4b29c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b29c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b29c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4B29C4u;
    {
        const bool branch_taken_0x4b29c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B29C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B29C4u;
            // 0x4b29c8: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b29c4) {
            ctx->pc = 0x4B29ECu;
            goto label_4b29ec;
        }
    }
    ctx->pc = 0x4B29CCu;
label_4b29cc:
    // 0x4b29cc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b29ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4b29d0: 0x24631314  addiu       $v1, $v1, 0x1314
    ctx->pc = 0x4b29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4884));
    // 0x4b29d4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4b29d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x4b29d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b29d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4b29dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B29DCu;
    {
        const bool branch_taken_0x4b29dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B29E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B29DCu;
            // 0x4b29e0: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b29dc) {
            ctx->pc = 0x4B29ECu;
            goto label_4b29ec;
        }
    }
    ctx->pc = 0x4B29E4u;
label_4b29e4:
    // 0x4b29e4: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x4B29E4u;
    {
        const bool branch_taken_0x4b29e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B29E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B29E4u;
            // 0x4b29e8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b29e4) {
            ctx->pc = 0x4B2AE4u;
            goto label_4b2ae4;
        }
    }
    ctx->pc = 0x4B29ECu;
label_4b29ec:
    // 0x4b29ec: 0x2663fffb  addiu       $v1, $s3, -0x5
    ctx->pc = 0x4b29ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967291));
    // 0x4b29f0: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x4b29f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4b29f4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B29F4u;
    {
        const bool branch_taken_0x4b29f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b29f4) {
            ctx->pc = 0x4B2A1Cu;
            goto label_4b2a1c;
        }
    }
    ctx->pc = 0x4B29FCu;
    // 0x4b29fc: 0x28c10000  slti        $at, $a2, 0x0
    ctx->pc = 0x4b29fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4b2a00: 0x14200037  bnez        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x4B2A00u;
    {
        const bool branch_taken_0x4b2a00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2a00) {
            ctx->pc = 0x4B2AE0u;
            goto label_4b2ae0;
        }
    }
    ctx->pc = 0x4B2A08u;
    // 0x4b2a08: 0x8e240198  lw          $a0, 0x198($s1)
    ctx->pc = 0x4b2a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x4b2a0c: 0xc05d7c2  jal         func_175F08
    ctx->pc = 0x4B2A0Cu;
    SET_GPR_U32(ctx, 31, 0x4B2A14u);
    ctx->pc = 0x4B2A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2A0Cu;
            // 0x4b2a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175F08u;
    if (runtime->hasFunction(0x175F08u)) {
        auto targetFn = runtime->lookupFunction(0x175F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2A14u; }
        if (ctx->pc != 0x4B2A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175F08_0x175f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2A14u; }
        if (ctx->pc != 0x4B2A14u) { return; }
    }
    ctx->pc = 0x4B2A14u;
label_4b2a14:
    // 0x4b2a14: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x4B2A14u;
    {
        const bool branch_taken_0x4b2a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2a14) {
            ctx->pc = 0x4B2AE0u;
            goto label_4b2ae0;
        }
    }
    ctx->pc = 0x4B2A1Cu;
label_4b2a1c:
    // 0x4b2a1c: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x4B2A1Cu;
    {
        const bool branch_taken_0x4b2a1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2a1c) {
            ctx->pc = 0x4B2AE0u;
            goto label_4b2ae0;
        }
    }
    ctx->pc = 0x4B2A24u;
    // 0x4b2a24: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4b2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x4b2a28: 0x52630016  beql        $s3, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B2A28u;
    {
        const bool branch_taken_0x4b2a28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b2a28) {
            ctx->pc = 0x4B2A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2A28u;
            // 0x4b2a2c: 0xc681000c  lwc1        $f1, 0xC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2A84u;
            goto label_4b2a84;
        }
    }
    ctx->pc = 0x4B2A30u;
    // 0x4b2a30: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4b2a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b2a34: 0x52650003  beql        $s3, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2A34u;
    {
        const bool branch_taken_0x4b2a34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 5));
        if (branch_taken_0x4b2a34) {
            ctx->pc = 0x4B2A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2A34u;
            // 0x4b2a38: 0xc6810008  lwc1        $f1, 0x8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B2A44u;
            goto label_4b2a44;
        }
    }
    ctx->pc = 0x4B2A3Cu;
    // 0x4b2a3c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x4B2A3Cu;
    {
        const bool branch_taken_0x4b2a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2A3Cu;
            // 0x4b2a40: 0x3c0300af  lui         $v1, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2a3c) {
            ctx->pc = 0x4B2AC8u;
            goto label_4b2ac8;
        }
    }
    ctx->pc = 0x4B2A44u;
label_4b2a44:
    // 0x4b2a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b2a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b2a48: 0x0  nop
    ctx->pc = 0x4b2a48u;
    // NOP
    // 0x4b2a4c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4b2a4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b2a50: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x4B2A50u;
    {
        const bool branch_taken_0x4b2a50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b2a50) {
            ctx->pc = 0x4B2AE0u;
            goto label_4b2ae0;
        }
    }
    ctx->pc = 0x4B2A58u;
    // 0x4b2a58: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x4b2a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x4b2a5c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b2a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4b2a60: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x4b2a60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
    // 0x4b2a64: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4b2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4b2a68: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4b2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
    // 0x4b2a6c: 0x1465001c  bne         $v1, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x4B2A6Cu;
    {
        const bool branch_taken_0x4b2a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4b2a6c) {
            ctx->pc = 0x4B2AE0u;
            goto label_4b2ae0;
        }
    }
    ctx->pc = 0x4B2A74u;
    // 0x4b2a74: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x4B2A74u;
    SET_GPR_U32(ctx, 31, 0x4B2A7Cu);
    ctx->pc = 0x4B2A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2A74u;
            // 0x4b2a78: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2A7Cu; }
        if (ctx->pc != 0x4B2A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2A7Cu; }
        if (ctx->pc != 0x4B2A7Cu) { return; }
    }
    ctx->pc = 0x4B2A7Cu;
label_4b2a7c:
    // 0x4b2a7c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4B2A7Cu;
    {
        const bool branch_taken_0x4b2a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2a7c) {
            ctx->pc = 0x4B2AE0u;
            goto label_4b2ae0;
        }
    }
    ctx->pc = 0x4B2A84u;
label_4b2a84:
    // 0x4b2a84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4b2a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4b2a88: 0x0  nop
    ctx->pc = 0x4b2a88u;
    // NOP
    // 0x4b2a8c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4b2a8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4b2a90: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x4B2A90u;
    {
        const bool branch_taken_0x4b2a90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b2a90) {
            ctx->pc = 0x4B2AE0u;
            goto label_4b2ae0;
        }
    }
    ctx->pc = 0x4B2A98u;
    // 0x4b2a98: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x4b2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x4b2a9c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b2a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4b2aa0: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x4b2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
    // 0x4b2aa4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4b2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4b2aa8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4b2aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4b2aac: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4b2aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
    // 0x4b2ab0: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B2AB0u;
    {
        const bool branch_taken_0x4b2ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4b2ab0) {
            ctx->pc = 0x4B2AE0u;
            goto label_4b2ae0;
        }
    }
    ctx->pc = 0x4B2AB8u;
    // 0x4b2ab8: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x4B2AB8u;
    SET_GPR_U32(ctx, 31, 0x4B2AC0u);
    ctx->pc = 0x4B2ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2AB8u;
            // 0x4b2abc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2AC0u; }
        if (ctx->pc != 0x4B2AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2AC0u; }
        if (ctx->pc != 0x4B2AC0u) { return; }
    }
    ctx->pc = 0x4B2AC0u;
label_4b2ac0:
    // 0x4b2ac0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B2AC0u;
    {
        const bool branch_taken_0x4b2ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2ac0) {
            ctx->pc = 0x4B2AE0u;
            goto label_4b2ae0;
        }
    }
    ctx->pc = 0x4B2AC8u;
label_4b2ac8:
    // 0x4b2ac8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4b2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4b2acc: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4b2accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
    // 0x4b2ad0: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B2AD0u;
    {
        const bool branch_taken_0x4b2ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x4b2ad0) {
            ctx->pc = 0x4B2AE0u;
            goto label_4b2ae0;
        }
    }
    ctx->pc = 0x4B2AD8u;
    // 0x4b2ad8: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x4B2AD8u;
    SET_GPR_U32(ctx, 31, 0x4B2AE0u);
    ctx->pc = 0x4B2ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2AD8u;
            // 0x4b2adc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2AE0u; }
        if (ctx->pc != 0x4B2AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B2AE0u; }
        if (ctx->pc != 0x4B2AE0u) { return; }
    }
    ctx->pc = 0x4B2AE0u;
label_4b2ae0:
    // 0x4b2ae0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b2ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b2ae4:
    // 0x4b2ae4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b2ae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b2ae8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b2ae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b2aec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b2aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b2af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b2af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2af8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B2AF8u;
            // 0x4b2afc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B2B00u;
}
