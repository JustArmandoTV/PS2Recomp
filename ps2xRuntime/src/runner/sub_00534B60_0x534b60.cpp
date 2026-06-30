#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00534B60
// Address: 0x534b60 - 0x534f10
void sub_00534B60_0x534b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00534B60_0x534b60");
#endif

    switch (ctx->pc) {
        case 0x534bd4u: goto label_534bd4;
        case 0x534c5cu: goto label_534c5c;
        case 0x534d1cu: goto label_534d1c;
        case 0x534d30u: goto label_534d30;
        case 0x534d3cu: goto label_534d3c;
        case 0x534de4u: goto label_534de4;
        case 0x534df8u: goto label_534df8;
        case 0x534e04u: goto label_534e04;
        default: break;
    }

    ctx->pc = 0x534b60u;

    // 0x534b60: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x534b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x534b64: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x534B64u;
    {
        const bool branch_taken_0x534b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x534B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534B64u;
            // 0x534b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534b64) {
            ctx->pc = 0x534BA0u;
            goto label_534ba0;
        }
    }
    ctx->pc = 0x534B6Cu;
    // 0x534b6c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x534b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x534b70: 0x50a3000c  beql        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x534B70u;
    {
        const bool branch_taken_0x534b70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534b70) {
            ctx->pc = 0x534B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534B70u;
            // 0x534b74: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534BA4u;
            goto label_534ba4;
        }
    }
    ctx->pc = 0x534B78u;
    // 0x534b78: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x534b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x534b7c: 0x50a30009  beql        $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x534B7Cu;
    {
        const bool branch_taken_0x534b7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534b7c) {
            ctx->pc = 0x534B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534B7Cu;
            // 0x534b80: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534BA4u;
            goto label_534ba4;
        }
    }
    ctx->pc = 0x534B84u;
    // 0x534b84: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x534b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x534b88: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x534B88u;
    {
        const bool branch_taken_0x534b88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534b88) {
            ctx->pc = 0x534B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534B88u;
            // 0x534b8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534BA4u;
            goto label_534ba4;
        }
    }
    ctx->pc = 0x534B90u;
    // 0x534b90: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x534B90u;
    {
        const bool branch_taken_0x534b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x534b90) {
            ctx->pc = 0x534BA4u;
            goto label_534ba4;
        }
    }
    ctx->pc = 0x534B98u;
    // 0x534b98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x534B98u;
    {
        const bool branch_taken_0x534b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534B98u;
            // 0x534b9c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534b98) {
            ctx->pc = 0x534BA4u;
            goto label_534ba4;
        }
    }
    ctx->pc = 0x534BA0u;
label_534ba0:
    // 0x534ba0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x534ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_534ba4:
    // 0x534ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x534BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534BACu;
    // 0x534bac: 0x0  nop
    ctx->pc = 0x534bacu;
    // NOP
    // 0x534bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x534bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x534bb4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x534bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x534bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x534bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x534bc0: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x534bc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x534bc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x534bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534bc8: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x534bc8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x534bcc: 0xc048664  jal         func_121990
    ctx->pc = 0x534BCCu;
    SET_GPR_U32(ctx, 31, 0x534BD4u);
    ctx->pc = 0x534BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534BCCu;
            // 0x534bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121990u;
    if (runtime->hasFunction(0x121990u)) {
        auto targetFn = runtime->lookupFunction(0x121990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534BD4u; }
        if (ctx->pc != 0x534BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121990_0x121990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534BD4u; }
        if (ctx->pc != 0x534BD4u) { return; }
    }
    ctx->pc = 0x534BD4u;
label_534bd4:
    // 0x534bd4: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x534bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x534bd8: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x534BD8u;
    {
        const bool branch_taken_0x534bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x534BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534BD8u;
            // 0x534bdc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534bd8) {
            ctx->pc = 0x534C0Cu;
            goto label_534c0c;
        }
    }
    ctx->pc = 0x534BE0u;
    // 0x534be0: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x534be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x534be4: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x534BE4u;
    {
        const bool branch_taken_0x534be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534be4) {
            ctx->pc = 0x534BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534BE4u;
            // 0x534be8: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534C10u;
            goto label_534c10;
        }
    }
    ctx->pc = 0x534BECu;
    // 0x534bec: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x534becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x534bf0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x534BF0u;
    {
        const bool branch_taken_0x534bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534bf0) {
            ctx->pc = 0x534C0Cu;
            goto label_534c0c;
        }
    }
    ctx->pc = 0x534BF8u;
    // 0x534bf8: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x534bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x534bfc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x534BFCu;
    {
        const bool branch_taken_0x534bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534bfc) {
            ctx->pc = 0x534C0Cu;
            goto label_534c0c;
        }
    }
    ctx->pc = 0x534C04u;
    // 0x534c04: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x534C04u;
    {
        const bool branch_taken_0x534c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x534c04) {
            ctx->pc = 0x534C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534C04u;
            // 0x534c08: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534C10u;
            goto label_534c10;
        }
    }
    ctx->pc = 0x534C0Cu;
label_534c0c:
    // 0x534c0c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x534c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_534c10:
    // 0x534c10: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x534c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x534c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x534c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x534c18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x534c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x534c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x534C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x534C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534C1Cu;
            // 0x534c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534C24u;
    // 0x534c24: 0x0  nop
    ctx->pc = 0x534c24u;
    // NOP
    // 0x534c28: 0x0  nop
    ctx->pc = 0x534c28u;
    // NOP
    // 0x534c2c: 0x0  nop
    ctx->pc = 0x534c2cu;
    // NOP
    // 0x534c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x534c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x534c34: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x534c34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x534c38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x534c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x534c3c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x534c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534c40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x534c44: 0x24c6d080  addiu       $a2, $a2, -0x2F80
    ctx->pc = 0x534c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955136));
    // 0x534c48: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x534c48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x534c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x534c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534c50: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x534c50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x534c54: 0xc0488e6  jal         func_122398
    ctx->pc = 0x534C54u;
    SET_GPR_U32(ctx, 31, 0x534C5Cu);
    ctx->pc = 0x534C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534C54u;
            // 0x534c58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122398u;
    if (runtime->hasFunction(0x122398u)) {
        auto targetFn = runtime->lookupFunction(0x122398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534C5Cu; }
        if (ctx->pc != 0x534C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122398_0x122398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534C5Cu; }
        if (ctx->pc != 0x534C5Cu) { return; }
    }
    ctx->pc = 0x534C5Cu;
label_534c5c:
    // 0x534c5c: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x534c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x534c60: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x534C60u;
    {
        const bool branch_taken_0x534c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x534C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534C60u;
            // 0x534c64: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534c60) {
            ctx->pc = 0x534C94u;
            goto label_534c94;
        }
    }
    ctx->pc = 0x534C68u;
    // 0x534c68: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x534c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x534c6c: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x534C6Cu;
    {
        const bool branch_taken_0x534c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534c6c) {
            ctx->pc = 0x534C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534C6Cu;
            // 0x534c70: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534C98u;
            goto label_534c98;
        }
    }
    ctx->pc = 0x534C74u;
    // 0x534c74: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x534c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x534c78: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x534C78u;
    {
        const bool branch_taken_0x534c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534c78) {
            ctx->pc = 0x534C94u;
            goto label_534c94;
        }
    }
    ctx->pc = 0x534C80u;
    // 0x534c80: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x534c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x534c84: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x534C84u;
    {
        const bool branch_taken_0x534c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534c84) {
            ctx->pc = 0x534C94u;
            goto label_534c94;
        }
    }
    ctx->pc = 0x534C8Cu;
    // 0x534c8c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x534C8Cu;
    {
        const bool branch_taken_0x534c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x534c8c) {
            ctx->pc = 0x534C90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534C8Cu;
            // 0x534c90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x534C98u;
            goto label_534c98;
        }
    }
    ctx->pc = 0x534C94u;
label_534c94:
    // 0x534c94: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x534c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_534c98:
    // 0x534c98: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x534c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x534c9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x534c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x534ca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x534ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x534ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x534CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x534CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534CA4u;
            // 0x534ca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534CACu;
    // 0x534cac: 0x0  nop
    ctx->pc = 0x534cacu;
    // NOP
    // 0x534cb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x534cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x534cb4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x534cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534cb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x534cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x534cbc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x534cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x534cc0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x534cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x534cc4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x534cc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534cc8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x534cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x534ccc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x534cccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534cd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x534cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x534cd4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x534cd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534cd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x534cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x534cdc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x534cdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534ce0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x534ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x534ce4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x534ce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534ce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x534ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x534cec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x534cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x534cf0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x534cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534cf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x534cf8: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x534cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x534cfc: 0xafa700d8  sw          $a3, 0xD8($sp)
    ctx->pc = 0x534cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
    // 0x534d00: 0xafa900d4  sw          $t1, 0xD4($sp)
    ctx->pc = 0x534d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 9));
    // 0x534d04: 0xafaa00d0  sw          $t2, 0xD0($sp)
    ctx->pc = 0x534d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 10));
    // 0x534d08: 0xafab00cc  sw          $t3, 0xCC($sp)
    ctx->pc = 0x534d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 11));
    // 0x534d0c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x534d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x534d10: 0xa3a000b0  sb          $zero, 0xB0($sp)
    ctx->pc = 0x534d10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x534d14: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x534D14u;
    {
        const bool branch_taken_0x534d14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x534D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534D14u;
            // 0x534d18: 0xa3a000af  sb          $zero, 0xAF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534d14) {
            ctx->pc = 0x534DD8u;
            goto label_534dd8;
        }
    }
    ctx->pc = 0x534D1Cu;
label_534d1c:
    // 0x534d1c: 0x8ea207b8  lw          $v0, 0x7B8($s5)
    ctx->pc = 0x534d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1976)));
    // 0x534d20: 0x8e500024  lw          $s0, 0x24($s2)
    ctx->pc = 0x534d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x534d24: 0x8eb107b4  lw          $s1, 0x7B4($s5)
    ctx->pc = 0x534d24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    // 0x534d28: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x534D28u;
    {
        const bool branch_taken_0x534d28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x534D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534D28u;
            // 0x534d2c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534d28) {
            ctx->pc = 0x534D98u;
            goto label_534d98;
        }
    }
    ctx->pc = 0x534D30u;
label_534d30:
    // 0x534d30: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x534d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x534d34: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x534D34u;
    SET_GPR_U32(ctx, 31, 0x534D3Cu);
    ctx->pc = 0x534D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534D34u;
            // 0x534d38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534D3Cu; }
        if (ctx->pc != 0x534D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534D3Cu; }
        if (ctx->pc != 0x534D3Cu) { return; }
    }
    ctx->pc = 0x534D3Cu;
label_534d3c:
    // 0x534d3c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x534D3Cu;
    {
        const bool branch_taken_0x534d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x534d3c) {
            ctx->pc = 0x534D80u;
            goto label_534d80;
        }
    }
    ctx->pc = 0x534D44u;
    // 0x534d44: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x534d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x534d48: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x534d48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x534d4c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x534D4Cu;
    {
        const bool branch_taken_0x534d4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x534d4c) {
            ctx->pc = 0x534D98u;
            goto label_534d98;
        }
    }
    ctx->pc = 0x534D54u;
    // 0x534d54: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x534d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x534d58: 0x260303ff  addiu       $v1, $s0, 0x3FF
    ctx->pc = 0x534d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1023));
    // 0x534d5c: 0x31a82  srl         $v1, $v1, 10
    ctx->pc = 0x534d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
    // 0x534d60: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x534d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x534d64: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x534d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x534d68: 0x641e0001  daddiu      $fp, $zero, 0x1
    ctx->pc = 0x534d68u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x534d6c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x534d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x534d70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x534d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x534d74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x534D74u;
    {
        const bool branch_taken_0x534d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534D74u;
            // 0x534d78: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534d74) {
            ctx->pc = 0x534D98u;
            goto label_534d98;
        }
    }
    ctx->pc = 0x534D7Cu;
    // 0x534d7c: 0x0  nop
    ctx->pc = 0x534d7cu;
    // NOP
label_534d80:
    // 0x534d80: 0x8ea207b8  lw          $v0, 0x7B8($s5)
    ctx->pc = 0x534d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1976)));
    // 0x534d84: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x534d84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x534d88: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x534d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x534d8c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x534D8Cu;
    {
        const bool branch_taken_0x534d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x534D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534D8Cu;
            // 0x534d90: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534d8c) {
            ctx->pc = 0x534D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_534d30;
        }
    }
    ctx->pc = 0x534D94u;
    // 0x534d94: 0x0  nop
    ctx->pc = 0x534d94u;
    // NOP
label_534d98:
    // 0x534d98: 0x8ea207b8  lw          $v0, 0x7B8($s5)
    ctx->pc = 0x534d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1976)));
    // 0x534d9c: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x534D9Cu;
    {
        const bool branch_taken_0x534d9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x534d9c) {
            ctx->pc = 0x534DC0u;
            goto label_534dc0;
        }
    }
    ctx->pc = 0x534DA4u;
    // 0x534da4: 0x260203ff  addiu       $v0, $s0, 0x3FF
    ctx->pc = 0x534da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1023));
    // 0x534da8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x534da8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x534dac: 0x21a82  srl         $v1, $v0, 10
    ctx->pc = 0x534dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x534db0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x534db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x534db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x534db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x534db8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x534db8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x534dbc: 0x0  nop
    ctx->pc = 0x534dbcu;
    // NOP
label_534dc0:
    // 0x534dc0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x534dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x534dc4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x534dc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x534dc8: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x534dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x534dcc: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x534DCCu;
    {
        const bool branch_taken_0x534dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x534DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534DCCu;
            // 0x534dd0: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534dcc) {
            ctx->pc = 0x534D1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_534d1c;
        }
    }
    ctx->pc = 0x534DD4u;
    // 0x534dd4: 0x0  nop
    ctx->pc = 0x534dd4u;
    // NOP
label_534dd8:
    // 0x534dd8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x534dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x534ddc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x534ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534de0: 0x24530018  addiu       $s3, $v0, 0x18
    ctx->pc = 0x534de0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_534de4:
    // 0x534de4: 0x8ea207b8  lw          $v0, 0x7B8($s5)
    ctx->pc = 0x534de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1976)));
    // 0x534de8: 0x8e760024  lw          $s6, 0x24($s3)
    ctx->pc = 0x534de8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x534dec: 0x8eb107b4  lw          $s1, 0x7B4($s5)
    ctx->pc = 0x534decu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    // 0x534df0: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x534DF0u;
    {
        const bool branch_taken_0x534df0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x534DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534DF0u;
            // 0x534df4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534df0) {
            ctx->pc = 0x534E68u;
            goto label_534e68;
        }
    }
    ctx->pc = 0x534DF8u;
label_534df8:
    // 0x534df8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x534df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x534dfc: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x534DFCu;
    SET_GPR_U32(ctx, 31, 0x534E04u);
    ctx->pc = 0x534E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534DFCu;
            // 0x534e00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534E04u; }
        if (ctx->pc != 0x534E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534E04u; }
        if (ctx->pc != 0x534E04u) { return; }
    }
    ctx->pc = 0x534E04u;
label_534e04:
    // 0x534e04: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x534E04u;
    {
        const bool branch_taken_0x534e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x534e04) {
            ctx->pc = 0x534E50u;
            goto label_534e50;
        }
    }
    ctx->pc = 0x534E0Cu;
    // 0x534e0c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x534e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x534e10: 0x56082b  sltu        $at, $v0, $s6
    ctx->pc = 0x534e10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x534e14: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x534E14u;
    {
        const bool branch_taken_0x534e14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x534e14) {
            ctx->pc = 0x534E68u;
            goto label_534e68;
        }
    }
    ctx->pc = 0x534E1Cu;
    // 0x534e1c: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x534e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x534e20: 0x26c303ff  addiu       $v1, $s6, 0x3FF
    ctx->pc = 0x534e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1023));
    // 0x534e24: 0x31a82  srl         $v1, $v1, 10
    ctx->pc = 0x534e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
    // 0x534e28: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x534e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x534e2c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x534e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x534e30: 0x641e0001  daddiu      $fp, $zero, 0x1
    ctx->pc = 0x534e30u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x534e34: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x534e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x534e38: 0xa3be00b0  sb          $fp, 0xB0($sp)
    ctx->pc = 0x534e38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 30));
    // 0x534e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x534e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x534e40: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x534E40u;
    {
        const bool branch_taken_0x534e40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x534E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534E40u;
            // 0x534e44: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534e40) {
            ctx->pc = 0x534E68u;
            goto label_534e68;
        }
    }
    ctx->pc = 0x534E48u;
    // 0x534e48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x534E48u;
    {
        const bool branch_taken_0x534e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534E48u;
            // 0x534e4c: 0xa3be00af  sb          $fp, 0xAF($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534e48) {
            ctx->pc = 0x534E68u;
            goto label_534e68;
        }
    }
    ctx->pc = 0x534E50u;
label_534e50:
    // 0x534e50: 0x8ea207b8  lw          $v0, 0x7B8($s5)
    ctx->pc = 0x534e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1976)));
    // 0x534e54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x534e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x534e58: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x534e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x534e5c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x534E5Cu;
    {
        const bool branch_taken_0x534e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x534E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534E5Cu;
            // 0x534e60: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534e5c) {
            ctx->pc = 0x534DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_534df8;
        }
    }
    ctx->pc = 0x534E64u;
    // 0x534e64: 0x0  nop
    ctx->pc = 0x534e64u;
    // NOP
label_534e68:
    // 0x534e68: 0x8ea207b8  lw          $v0, 0x7B8($s5)
    ctx->pc = 0x534e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1976)));
    // 0x534e6c: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x534E6Cu;
    {
        const bool branch_taken_0x534e6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x534e6c) {
            ctx->pc = 0x534EA0u;
            goto label_534ea0;
        }
    }
    ctx->pc = 0x534E74u;
    // 0x534e74: 0x26c203ff  addiu       $v0, $s6, 0x3FF
    ctx->pc = 0x534e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1023));
    // 0x534e78: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x534e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x534e7c: 0x22282  srl         $a0, $v0, 10
    ctx->pc = 0x534e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x534e80: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x534e80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x534e84: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x534e84u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x534e88: 0xa3a200b0  sb          $v0, 0xB0($sp)
    ctx->pc = 0x534e88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 2));
    // 0x534e8c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x534e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x534e90: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x534E90u;
    {
        const bool branch_taken_0x534e90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x534E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534E90u;
            // 0x534e94: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534e90) {
            ctx->pc = 0x534EA0u;
            goto label_534ea0;
        }
    }
    ctx->pc = 0x534E98u;
    // 0x534e98: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x534e98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x534e9c: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x534e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
label_534ea0:
    // 0x534ea0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x534ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x534ea4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x534ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x534ea8: 0x90420016  lbu         $v0, 0x16($v0)
    ctx->pc = 0x534ea8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x534eac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x534eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x534eb0: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x534EB0u;
    {
        const bool branch_taken_0x534eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x534EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534EB0u;
            // 0x534eb4: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534eb0) {
            ctx->pc = 0x534DE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_534de4;
        }
    }
    ctx->pc = 0x534EB8u;
    // 0x534eb8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x534eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x534ebc: 0x93a400b0  lbu         $a0, 0xB0($sp)
    ctx->pc = 0x534ebcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x534ec0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x534ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x534ec4: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x534ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x534ec8: 0x33c200ff  andi        $v0, $fp, 0xFF
    ctx->pc = 0x534ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x534ecc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x534eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x534ed0: 0x93a400af  lbu         $a0, 0xAF($sp)
    ctx->pc = 0x534ed0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x534ed4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x534ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x534ed8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x534ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x534edc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x534edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x534ee0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x534ee0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x534ee4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x534ee4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x534ee8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x534ee8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x534eec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x534eecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x534ef0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x534ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x534ef4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x534ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x534ef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x534ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x534efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x534efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x534f00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x534f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x534f04: 0x3e00008  jr          $ra
    ctx->pc = 0x534F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x534F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534F04u;
            // 0x534f08: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534F0Cu;
    // 0x534f0c: 0x0  nop
    ctx->pc = 0x534f0cu;
    // NOP
}
