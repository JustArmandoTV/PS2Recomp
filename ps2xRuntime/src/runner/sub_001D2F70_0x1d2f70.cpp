#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2F70
// Address: 0x1d2f70 - 0x1d31d0
void sub_001D2F70_0x1d2f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2F70_0x1d2f70");
#endif

    switch (ctx->pc) {
        case 0x1d2fccu: goto label_1d2fcc;
        case 0x1d3018u: goto label_1d3018;
        case 0x1d30f8u: goto label_1d30f8;
        case 0x1d3148u: goto label_1d3148;
        default: break;
    }

    ctx->pc = 0x1d2f70u;

    // 0x1d2f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d2f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d2f74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d2f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d2f78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d2f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d2f7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2f80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2f84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2f88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2f8c: 0x12200086  beqz        $s1, . + 4 + (0x86 << 2)
    ctx->pc = 0x1D2F8Cu;
    {
        const bool branch_taken_0x1d2f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2F8Cu;
            // 0x1d2f90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f8c) {
            ctx->pc = 0x1D31A8u;
            goto label_1d31a8;
        }
    }
    ctx->pc = 0x1D2F94u;
    // 0x1d2f94: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d2f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1d2f98: 0x3c034649  lui         $v1, 0x4649
    ctx->pc = 0x1d2f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17993 << 16));
    // 0x1d2f9c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1d2f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d2fa0: 0x3463534e  ori         $v1, $v1, 0x534E
    ctx->pc = 0x1d2fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d2fa4: 0x54830081  bnel        $a0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1D2FA4u;
    {
        const bool branch_taken_0x1d2fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d2fa4) {
            ctx->pc = 0x1D2FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FA4u;
            // 0x1d2fa8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D31ACu;
            goto label_1d31ac;
        }
    }
    ctx->pc = 0x1D2FACu;
    // 0x1d2fac: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1d2facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1d2fb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fb4: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x1d2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1d2fb8: 0x8cd20008  lw          $s2, 0x8($a2)
    ctx->pc = 0x1d2fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d2fbc: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x1d2fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d2fc0: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x1d2fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d2fc4: 0xc04a508  jal         func_129420
    ctx->pc = 0x1D2FC4u;
    SET_GPR_U32(ctx, 31, 0x1D2FCCu);
    ctx->pc = 0x1D2FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FC4u;
            // 0x1d2fc8: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FCCu; }
        if (ctx->pc != 0x1D2FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2FCCu; }
        if (ctx->pc != 0x1D2FCCu) { return; }
    }
    ctx->pc = 0x1D2FCCu;
label_1d2fcc:
    // 0x1d2fcc: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1d2fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d2fd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d2fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fd4: 0x26670010  addiu       $a3, $s3, 0x10
    ctx->pc = 0x1d2fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1d2fd8: 0x18a00051  blez        $a1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D2FD8u;
    {
        const bool branch_taken_0x1d2fd8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D2FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FD8u;
            // 0x1d2fdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2fd8) {
            ctx->pc = 0x1D3120u;
            goto label_1d3120;
        }
    }
    ctx->pc = 0x1D2FE0u;
    // 0x1d2fe0: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1d2fe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d2fe4: 0x14200040  bnez        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x1D2FE4u;
    {
        const bool branch_taken_0x1d2fe4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FE4u;
            // 0x1d2fe8: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2fe4) {
            ctx->pc = 0x1D30E8u;
            goto label_1d30e8;
        }
    }
    ctx->pc = 0x1D2FECu;
    // 0x1d2fec: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2FECu;
    {
        const bool branch_taken_0x1d2fec = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D2FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2FECu;
            // 0x1d2ff0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2fec) {
            ctx->pc = 0x1D300Cu;
            goto label_1d300c;
        }
    }
    ctx->pc = 0x1D2FF4u;
    // 0x1d2ff4: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1d2ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1d2ff8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1d2ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1d2ffc: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1d2ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d3000: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3000u;
    {
        const bool branch_taken_0x1d3000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3000) {
            ctx->pc = 0x1D300Cu;
            goto label_1d300c;
        }
    }
    ctx->pc = 0x1D3008u;
    // 0x1d3008: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1d3008u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d300c:
    // 0x1d300c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D300Cu;
    {
        const bool branch_taken_0x1d300c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d300c) {
            ctx->pc = 0x1D30E8u;
            goto label_1d30e8;
        }
    }
    ctx->pc = 0x1D3014u;
    // 0x1d3014: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d3014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3018:
    // 0x1d3018: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x1d3018u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d301c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1d301cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1d3020: 0x104482a  slt         $t1, $t0, $a0
    ctx->pc = 0x1d3020u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d3024: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3024u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3028: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d3028u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d302c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d302cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3030: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d3030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d3034: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3034u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3038: 0x8cea0004  lw          $t2, 0x4($a3)
    ctx->pc = 0x1d3038u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d303c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d303cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3040: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d3040u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d3044: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3044u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3048: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d3048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d304c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d304cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3050: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x1d3050u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d3054: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3054u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3058: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d3058u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d305c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d305cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3060: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d3060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d3064: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3064u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3068: 0x8cea000c  lw          $t2, 0xC($a3)
    ctx->pc = 0x1d3068u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1d306c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d306cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3070: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d3070u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d3074: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3074u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3078: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d307c: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d307cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3080: 0x8cea0010  lw          $t2, 0x10($a3)
    ctx->pc = 0x1d3080u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1d3084: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3084u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3088: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d3088u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d308c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d308cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3090: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d3090u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d3094: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3094u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3098: 0x8cea0014  lw          $t2, 0x14($a3)
    ctx->pc = 0x1d3098u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d309c: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d309cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d30a0: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d30a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d30a4: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d30a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d30a8: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d30a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d30ac: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d30acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d30b0: 0x8cea0018  lw          $t2, 0x18($a3)
    ctx->pc = 0x1d30b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1d30b4: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d30b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d30b8: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d30b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d30bc: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d30bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d30c0: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d30c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d30c4: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d30c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d30c8: 0x8cea001c  lw          $t2, 0x1C($a3)
    ctx->pc = 0x1d30c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1d30cc: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d30ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d30d0: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1d30d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1d30d4: 0x20a5821  addu        $t3, $s0, $t2
    ctx->pc = 0x1d30d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    // 0x1d30d8: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d30d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d30dc: 0x1505021  addu        $t2, $t2, $s0
    ctx->pc = 0x1d30dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x1d30e0: 0x1520ffcd  bnez        $t1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D30E0u;
    {
        const bool branch_taken_0x1d30e0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D30E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D30E0u;
            // 0x1d30e4: 0xad6a0000  sw          $t2, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30e0) {
            ctx->pc = 0x1D3018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3018;
        }
    }
    ctx->pc = 0x1D30E8u;
label_1d30e8:
    // 0x1d30e8: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x1d30e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d30ec: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1D30ECu;
    {
        const bool branch_taken_0x1d30ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d30ec) {
            ctx->pc = 0x1D3120u;
            goto label_1d3120;
        }
    }
    ctx->pc = 0x1D30F4u;
    // 0x1d30f4: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x1d30f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d30f8:
    // 0x1d30f8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d30f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d30fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d30fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d3100: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x1d3100u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d3104: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x1d3104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x1d3108: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d3108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d310c: 0x2044821  addu        $t1, $s0, $a0
    ctx->pc = 0x1d310cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1d3110: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1d3110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3114: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1d3114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d3118: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D3118u;
    {
        const bool branch_taken_0x1d3118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3118u;
            // 0x1d311c: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3118) {
            ctx->pc = 0x1D30F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d30f8;
        }
    }
    ctx->pc = 0x1D3120u;
label_1d3120:
    // 0x1d3120: 0x1a400021  blez        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D3120u;
    {
        const bool branch_taken_0x1d3120 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1D3124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3120u;
            // 0x1d3124: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3120) {
            ctx->pc = 0x1D31A8u;
            goto label_1d31a8;
        }
    }
    ctx->pc = 0x1D3128u;
    // 0x1d3128: 0x3c04434d  lui         $a0, 0x434D
    ctx->pc = 0x1d3128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17229 << 16));
    // 0x1d312c: 0x3c03414d  lui         $v1, 0x414D
    ctx->pc = 0x1d312cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16717 << 16));
    // 0x1d3130: 0x3488534e  ori         $t0, $a0, 0x534E
    ctx->pc = 0x1d3130u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21326);
    // 0x1d3134: 0x3467534e  ori         $a3, $v1, 0x534E
    ctx->pc = 0x1d3134u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d3138: 0x3c03444e  lui         $v1, 0x444E
    ctx->pc = 0x1d3138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17486 << 16));
    // 0x1d313c: 0x3c044f4d  lui         $a0, 0x4F4D
    ctx->pc = 0x1d313cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20301 << 16));
    // 0x1d3140: 0x3465454e  ori         $a1, $v1, 0x454E
    ctx->pc = 0x1d3140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17742);
    // 0x1d3144: 0x3489534e  ori         $t1, $a0, 0x534E
    ctx->pc = 0x1d3144u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21326);
label_1d3148:
    // 0x1d3148: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d3148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d314c: 0x10690006  beq         $v1, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D314Cu;
    {
        const bool branch_taken_0x1d314c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x1d314c) {
            ctx->pc = 0x1D3168u;
            goto label_1d3168;
        }
    }
    ctx->pc = 0x1D3154u;
    // 0x1d3154: 0x10680004  beq         $v1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3154u;
    {
        const bool branch_taken_0x1d3154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x1d3154) {
            ctx->pc = 0x1D3168u;
            goto label_1d3168;
        }
    }
    ctx->pc = 0x1D315Cu;
    // 0x1d315c: 0x14670009  bne         $v1, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D315Cu;
    {
        const bool branch_taken_0x1d315c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1d315c) {
            ctx->pc = 0x1D3184u;
            goto label_1d3184;
        }
    }
    ctx->pc = 0x1D3164u;
    // 0x1d3164: 0x0  nop
    ctx->pc = 0x1d3164u;
    // NOP
label_1d3168:
    // 0x1d3168: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D3168u;
    {
        const bool branch_taken_0x1d3168 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3168) {
            ctx->pc = 0x1D31A8u;
            goto label_1d31a8;
        }
    }
    ctx->pc = 0x1D3170u;
    // 0x1d3170: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1d3170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d3174: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d3174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d3178: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d3178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d317c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D317Cu;
    {
        const bool branch_taken_0x1d317c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d317c) {
            ctx->pc = 0x1D31A8u;
            goto label_1d31a8;
        }
    }
    ctx->pc = 0x1D3184u;
label_1d3184:
    // 0x1d3184: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3184u;
    {
        const bool branch_taken_0x1d3184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d3184) {
            ctx->pc = 0x1D31A8u;
            goto label_1d31a8;
        }
    }
    ctx->pc = 0x1D318Cu;
    // 0x1d318c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1d318cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d3190: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d3190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d3194: 0x152182a  slt         $v1, $t2, $s2
    ctx->pc = 0x1d3194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d3198: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d3198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d319c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1D319Cu;
    {
        const bool branch_taken_0x1d319c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D31A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D319Cu;
            // 0x1d31a0: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d319c) {
            ctx->pc = 0x1D3148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3148;
        }
    }
    ctx->pc = 0x1D31A4u;
    // 0x1d31a4: 0x0  nop
    ctx->pc = 0x1d31a4u;
    // NOP
label_1d31a8:
    // 0x1d31a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d31a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d31ac:
    // 0x1d31ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d31acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d31b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d31b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d31b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d31b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d31b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d31b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d31bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D31BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D31C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31BCu;
            // 0x1d31c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D31C4u;
    // 0x1d31c4: 0x0  nop
    ctx->pc = 0x1d31c4u;
    // NOP
    // 0x1d31c8: 0x0  nop
    ctx->pc = 0x1d31c8u;
    // NOP
    // 0x1d31cc: 0x0  nop
    ctx->pc = 0x1d31ccu;
    // NOP
}
