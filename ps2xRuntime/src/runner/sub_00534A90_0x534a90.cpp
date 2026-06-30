#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00534A90
// Address: 0x534a90 - 0x534b60
void sub_00534A90_0x534a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00534A90_0x534a90");
#endif

    switch (ctx->pc) {
        case 0x534b08u: goto label_534b08;
        default: break;
    }

    ctx->pc = 0x534a90u;

    // 0x534a90: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x534a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x534a94: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x534A94u;
    {
        const bool branch_taken_0x534a94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x534A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534A94u;
            // 0x534a98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534a94) {
            ctx->pc = 0x534AD0u;
            goto label_534ad0;
        }
    }
    ctx->pc = 0x534A9Cu;
    // 0x534a9c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x534a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x534aa0: 0x50a3000c  beql        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x534AA0u;
    {
        const bool branch_taken_0x534aa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534aa0) {
            ctx->pc = 0x534AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534AA0u;
            // 0x534aa4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534AD4u;
            goto label_534ad4;
        }
    }
    ctx->pc = 0x534AA8u;
    // 0x534aa8: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x534aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x534aac: 0x50a30009  beql        $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x534AACu;
    {
        const bool branch_taken_0x534aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534aac) {
            ctx->pc = 0x534AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534AACu;
            // 0x534ab0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534AD4u;
            goto label_534ad4;
        }
    }
    ctx->pc = 0x534AB4u;
    // 0x534ab4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x534ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x534ab8: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x534AB8u;
    {
        const bool branch_taken_0x534ab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534ab8) {
            ctx->pc = 0x534ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534AB8u;
            // 0x534abc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534AD4u;
            goto label_534ad4;
        }
    }
    ctx->pc = 0x534AC0u;
    // 0x534ac0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x534AC0u;
    {
        const bool branch_taken_0x534ac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x534ac0) {
            ctx->pc = 0x534AD4u;
            goto label_534ad4;
        }
    }
    ctx->pc = 0x534AC8u;
    // 0x534ac8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x534AC8u;
    {
        const bool branch_taken_0x534ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534AC8u;
            // 0x534acc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534ac8) {
            ctx->pc = 0x534AD4u;
            goto label_534ad4;
        }
    }
    ctx->pc = 0x534AD0u;
label_534ad0:
    // 0x534ad0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x534ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_534ad4:
    // 0x534ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x534AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534ADCu;
    // 0x534adc: 0x0  nop
    ctx->pc = 0x534adcu;
    // NOP
    // 0x534ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x534ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x534ae4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x534ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x534ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x534aec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x534aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x534af4: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x534af4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x534af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x534af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534afc: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x534afcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x534b00: 0xc0488e6  jal         func_122398
    ctx->pc = 0x534B00u;
    SET_GPR_U32(ctx, 31, 0x534B08u);
    ctx->pc = 0x534B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534B00u;
            // 0x534b04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122398u;
    if (runtime->hasFunction(0x122398u)) {
        auto targetFn = runtime->lookupFunction(0x122398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534B08u; }
        if (ctx->pc != 0x534B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122398_0x122398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534B08u; }
        if (ctx->pc != 0x534B08u) { return; }
    }
    ctx->pc = 0x534B08u;
label_534b08:
    // 0x534b08: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x534b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x534b0c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x534B0Cu;
    {
        const bool branch_taken_0x534b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x534B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534B0Cu;
            // 0x534b10: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534b0c) {
            ctx->pc = 0x534B40u;
            goto label_534b40;
        }
    }
    ctx->pc = 0x534B14u;
    // 0x534b14: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x534b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x534b18: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x534B18u;
    {
        const bool branch_taken_0x534b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534b18) {
            ctx->pc = 0x534B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534B18u;
            // 0x534b1c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534B44u;
            goto label_534b44;
        }
    }
    ctx->pc = 0x534B20u;
    // 0x534b20: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x534b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x534b24: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x534B24u;
    {
        const bool branch_taken_0x534b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534b24) {
            ctx->pc = 0x534B40u;
            goto label_534b40;
        }
    }
    ctx->pc = 0x534B2Cu;
    // 0x534b2c: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x534b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x534b30: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x534B30u;
    {
        const bool branch_taken_0x534b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534b30) {
            ctx->pc = 0x534B40u;
            goto label_534b40;
        }
    }
    ctx->pc = 0x534B38u;
    // 0x534b38: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x534B38u;
    {
        const bool branch_taken_0x534b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x534b38) {
            ctx->pc = 0x534B3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534B38u;
            // 0x534b3c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534B44u;
            goto label_534b44;
        }
    }
    ctx->pc = 0x534B40u;
label_534b40:
    // 0x534b40: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x534b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_534b44:
    // 0x534b44: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x534b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x534b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x534b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x534b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x534b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x534b50: 0x3e00008  jr          $ra
    ctx->pc = 0x534B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x534B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534B50u;
            // 0x534b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534B58u;
    // 0x534b58: 0x0  nop
    ctx->pc = 0x534b58u;
    // NOP
    // 0x534b5c: 0x0  nop
    ctx->pc = 0x534b5cu;
    // NOP
}
