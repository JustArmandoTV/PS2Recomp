#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157E20
// Address: 0x157e20 - 0x157f80
void sub_00157E20_0x157e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157E20_0x157e20");
#endif

    switch (ctx->pc) {
        case 0x157e8cu: goto label_157e8c;
        case 0x157e9cu: goto label_157e9c;
        case 0x157f40u: goto label_157f40;
        case 0x157f50u: goto label_157f50;
        case 0x157f60u: goto label_157f60;
        case 0x157f70u: goto label_157f70;
        default: break;
    }

    ctx->pc = 0x157e20u;

    // 0x157e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157e24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x157e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157e2c: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x157e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
    // 0x157e30: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x157e30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x157e34: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x157e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x157e38: 0x1283824  and         $a3, $t1, $t0
    ctx->pc = 0x157e38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x157e3c: 0x14e80019  bne         $a3, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x157E3Cu;
    {
        const bool branch_taken_0x157e3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x157E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E3Cu;
            // 0x157e40: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e3c) {
            ctx->pc = 0x157EA4u;
            goto label_157ea4;
        }
    }
    ctx->pc = 0x157E44u;
    // 0x157e44: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x157e44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x157e48: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x157e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157e4c: 0x30e70e77  andi        $a3, $a3, 0xE77
    ctx->pc = 0x157e4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3703);
    // 0x157e50: 0x50e40048  beql        $a3, $a0, . + 4 + (0x48 << 2)
    ctx->pc = 0x157E50u;
    {
        const bool branch_taken_0x157e50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x157e50) {
            ctx->pc = 0x157E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157E50u;
            // 0x157e54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157F74u;
            goto label_157f74;
        }
    }
    ctx->pc = 0x157E58u;
    // 0x157e58: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x157e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x157e5c: 0x50e4000d  beql        $a3, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x157E5Cu;
    {
        const bool branch_taken_0x157e5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x157e5c) {
            ctx->pc = 0x157E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157E5Cu;
            // 0x157e60: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157E94u;
            goto label_157e94;
        }
    }
    ctx->pc = 0x157E64u;
    // 0x157e64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x157e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157e68: 0x50e40006  beql        $a3, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157E68u;
    {
        const bool branch_taken_0x157e68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x157e68) {
            ctx->pc = 0x157E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157E68u;
            // 0x157e6c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157E84u;
            goto label_157e84;
        }
    }
    ctx->pc = 0x157E70u;
    // 0x157e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157e74: 0x10e3003e  beq         $a3, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x157E74u;
    {
        const bool branch_taken_0x157e74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x157e74) {
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157E7Cu;
    // 0x157e7c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x157E7Cu;
    {
        const bool branch_taken_0x157e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e7c) {
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157E84u;
label_157e84:
    // 0x157e84: 0xc04d894  jal         func_136250
    ctx->pc = 0x157E84u;
    SET_GPR_U32(ctx, 31, 0x157E8Cu);
    ctx->pc = 0x136250u;
    if (runtime->hasFunction(0x136250u)) {
        auto targetFn = runtime->lookupFunction(0x136250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E8Cu; }
        if (ctx->pc != 0x157E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136250_0x136250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E8Cu; }
        if (ctx->pc != 0x157E8Cu) { return; }
    }
    ctx->pc = 0x157E8Cu;
label_157e8c:
    // 0x157e8c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x157E8Cu;
    {
        const bool branch_taken_0x157e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e8c) {
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157E94u;
label_157e94:
    // 0x157e94: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x157E94u;
    SET_GPR_U32(ctx, 31, 0x157E9Cu);
    ctx->pc = 0x135F20u;
    if (runtime->hasFunction(0x135F20u)) {
        auto targetFn = runtime->lookupFunction(0x135F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E9Cu; }
        if (ctx->pc != 0x157E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135F20_0x135f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157E9Cu; }
        if (ctx->pc != 0x157E9Cu) { return; }
    }
    ctx->pc = 0x157E9Cu;
label_157e9c:
    // 0x157e9c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x157E9Cu;
    {
        const bool branch_taken_0x157e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157e9c) {
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157EA4u;
label_157ea4:
    // 0x157ea4: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x157ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
    // 0x157ea8: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x157ea8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x157eac: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x157EACu;
    {
        const bool branch_taken_0x157eac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157EACu;
            // 0x157eb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157eac) {
            ctx->pc = 0x157EBCu;
            goto label_157ebc;
        }
    }
    ctx->pc = 0x157EB4u;
    // 0x157eb4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x157EB4u;
    {
        const bool branch_taken_0x157eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157EB4u;
            // 0x157eb8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157eb4) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157EBCu;
label_157ebc:
    // 0x157ebc: 0x3c070008  lui         $a3, 0x8
    ctx->pc = 0x157ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8 << 16));
    // 0x157ec0: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x157ec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x157ec4: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x157EC4u;
    {
        const bool branch_taken_0x157ec4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ec4) {
            ctx->pc = 0x157EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157EC4u;
            // 0x157ec8: 0x3c070010  lui         $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157ED4u;
            goto label_157ed4;
        }
    }
    ctx->pc = 0x157ECCu;
    // 0x157ecc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157ECCu;
    {
        const bool branch_taken_0x157ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157ECCu;
            // 0x157ed0: 0x24c80004  addiu       $t0, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ecc) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157ED4u;
label_157ed4:
    // 0x157ed4: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x157ed4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x157ed8: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x157ED8u;
    {
        const bool branch_taken_0x157ed8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ed8) {
            ctx->pc = 0x157EE4u;
            goto label_157ee4;
        }
    }
    ctx->pc = 0x157EE0u;
    // 0x157ee0: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x157ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_157ee4:
    // 0x157ee4: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x157EE4u;
    {
        const bool branch_taken_0x157ee4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ee4) {
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157EECu;
    // 0x157eec: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x157eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x157ef0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x157ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x157ef4: 0x30c60e77  andi        $a2, $a2, 0xE77
    ctx->pc = 0x157ef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3703);
    // 0x157ef8: 0x50c4001b  beql        $a2, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x157EF8u;
    {
        const bool branch_taken_0x157ef8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157ef8) {
            ctx->pc = 0x157EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157EF8u;
            // 0x157efc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157F68u;
            goto label_157f68;
        }
    }
    ctx->pc = 0x157F00u;
    // 0x157f00: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x157f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157f04: 0x50c40014  beql        $a2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x157F04u;
    {
        const bool branch_taken_0x157f04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157f04) {
            ctx->pc = 0x157F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157F04u;
            // 0x157f08: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157F58u;
            goto label_157f58;
        }
    }
    ctx->pc = 0x157F0Cu;
    // 0x157f0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x157f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x157f10: 0x50c4000d  beql        $a2, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x157F10u;
    {
        const bool branch_taken_0x157f10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157f10) {
            ctx->pc = 0x157F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157F10u;
            // 0x157f14: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157F48u;
            goto label_157f48;
        }
    }
    ctx->pc = 0x157F18u;
    // 0x157f18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x157f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157f1c: 0x50c40006  beql        $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157F1Cu;
    {
        const bool branch_taken_0x157f1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x157f1c) {
            ctx->pc = 0x157F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157F1Cu;
            // 0x157f20: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157F38u;
            goto label_157f38;
        }
    }
    ctx->pc = 0x157F24u;
    // 0x157f24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157f28: 0x10c30011  beq         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x157F28u;
    {
        const bool branch_taken_0x157f28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x157f28) {
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157F30u;
    // 0x157f30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x157F30u;
    {
        const bool branch_taken_0x157f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f30) {
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157F38u;
label_157f38:
    // 0x157f38: 0xc04d868  jal         func_1361A0
    ctx->pc = 0x157F38u;
    SET_GPR_U32(ctx, 31, 0x157F40u);
    ctx->pc = 0x157F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157F38u;
            // 0x157f3c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1361A0u;
    if (runtime->hasFunction(0x1361A0u)) {
        auto targetFn = runtime->lookupFunction(0x1361A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F40u; }
        if (ctx->pc != 0x157F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001361A0_0x1361a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F40u; }
        if (ctx->pc != 0x157F40u) { return; }
    }
    ctx->pc = 0x157F40u;
label_157f40:
    // 0x157f40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x157F40u;
    {
        const bool branch_taken_0x157f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f40) {
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157F48u;
label_157f48:
    // 0x157f48: 0xc04d7ac  jal         func_135EB0
    ctx->pc = 0x157F48u;
    SET_GPR_U32(ctx, 31, 0x157F50u);
    ctx->pc = 0x157F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157F48u;
            // 0x157f4c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135EB0u;
    if (runtime->hasFunction(0x135EB0u)) {
        auto targetFn = runtime->lookupFunction(0x135EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F50u; }
        if (ctx->pc != 0x157F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135EB0_0x135eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F50u; }
        if (ctx->pc != 0x157F50u) { return; }
    }
    ctx->pc = 0x157F50u;
label_157f50:
    // 0x157f50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157F50u;
    {
        const bool branch_taken_0x157f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f50) {
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157F58u;
label_157f58:
    // 0x157f58: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x157F58u;
    SET_GPR_U32(ctx, 31, 0x157F60u);
    ctx->pc = 0x157F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157F58u;
            // 0x157f5c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (runtime->hasFunction(0x1369D0u)) {
        auto targetFn = runtime->lookupFunction(0x1369D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F60u; }
        if (ctx->pc != 0x157F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001369D0_0x1369d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F60u; }
        if (ctx->pc != 0x157F60u) { return; }
    }
    ctx->pc = 0x157F60u;
label_157f60:
    // 0x157f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157F60u;
    {
        const bool branch_taken_0x157f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f60) {
            ctx->pc = 0x157F70u;
            goto label_157f70;
        }
    }
    ctx->pc = 0x157F68u;
label_157f68:
    // 0x157f68: 0xc04dfb0  jal         func_137EC0
    ctx->pc = 0x157F68u;
    SET_GPR_U32(ctx, 31, 0x157F70u);
    ctx->pc = 0x157F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157F68u;
            // 0x157f6c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137EC0u;
    if (runtime->hasFunction(0x137EC0u)) {
        auto targetFn = runtime->lookupFunction(0x137EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F70u; }
        if (ctx->pc != 0x157F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137EC0_0x137ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F70u; }
        if (ctx->pc != 0x157F70u) { return; }
    }
    ctx->pc = 0x157F70u;
label_157f70:
    // 0x157f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157f74:
    // 0x157f74: 0x3e00008  jr          $ra
    ctx->pc = 0x157F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F74u;
            // 0x157f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157F7Cu;
    // 0x157f7c: 0x0  nop
    ctx->pc = 0x157f7cu;
    // NOP
}
