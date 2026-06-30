#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192F20
// Address: 0x192f20 - 0x193138
void sub_00192F20_0x192f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192F20_0x192f20");
#endif

    switch (ctx->pc) {
        case 0x192f70u: goto label_192f70;
        case 0x192fe0u: goto label_192fe0;
        case 0x193078u: goto label_193078;
        case 0x1930f0u: goto label_1930f0;
        default: break;
    }

    ctx->pc = 0x192f20u;

    // 0x192f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x192f24: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x192f24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192f2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x192f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x192f34: 0x2259021  addu        $s2, $s1, $a1
    ctx->pc = 0x192f34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x192f38: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x192f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x192f3c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x192f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x192f40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192f44: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x192f44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x192f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x192f4c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x192f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x192f50: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x192f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x192f54: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x192F54u;
    {
        const bool branch_taken_0x192f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F54u;
            // 0x192f58: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f54) {
            ctx->pc = 0x192FFCu;
            goto label_192ffc;
        }
    }
    ctx->pc = 0x192F5Cu;
    // 0x192f5c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x192f5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192f60: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x192f60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192f64: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x192f64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192f68: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x192f68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x192f6c: 0x0  nop
    ctx->pc = 0x192f6cu;
    // NOP
label_192f70:
    // 0x192f70: 0x1074000d  beq         $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x192F70u;
    {
        const bool branch_taken_0x192f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x192F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F70u;
            // 0x192f74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f70) {
            ctx->pc = 0x192FA8u;
            goto label_192fa8;
        }
    }
    ctx->pc = 0x192F78u;
    // 0x192f78: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x192F78u;
    {
        const bool branch_taken_0x192f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f78) {
            ctx->pc = 0x192F98u;
            goto label_192f98;
        }
    }
    ctx->pc = 0x192F80u;
    // 0x192f80: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x192F80u;
    {
        const bool branch_taken_0x192f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x192f80) {
            ctx->pc = 0x192FB8u;
            goto label_192fb8;
        }
    }
    ctx->pc = 0x192F88u;
    // 0x192f88: 0x50760013  beql        $v1, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x192F88u;
    {
        const bool branch_taken_0x192f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x192f88) {
            ctx->pc = 0x192F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192F88u;
            // 0x192f8c: 0x2630fffc  addiu       $s0, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192FD8u;
            goto label_192fd8;
        }
    }
    ctx->pc = 0x192F90u;
    // 0x192f90: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x192F90u;
    {
        const bool branch_taken_0x192f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192F90u;
            // 0x192f94: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192f90) {
            ctx->pc = 0x192FF4u;
            goto label_192ff4;
        }
    }
    ctx->pc = 0x192F98u;
label_192f98:
    // 0x192f98: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x192F98u;
    {
        const bool branch_taken_0x192f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f98) {
            ctx->pc = 0x192F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192F98u;
            // 0x192f9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192FF0u;
            goto label_192ff0;
        }
    }
    ctx->pc = 0x192FA0u;
    // 0x192fa0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x192FA0u;
    {
        const bool branch_taken_0x192fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FA0u;
            // 0x192fa4: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fa0) {
            ctx->pc = 0x192FF4u;
            goto label_192ff4;
        }
    }
    ctx->pc = 0x192FA8u;
label_192fa8:
    // 0x192fa8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x192fa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x192FACu;
    {
        const bool branch_taken_0x192fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FACu;
            // 0x192fb0: 0x2180b  movn        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fac) {
            ctx->pc = 0x192FF0u;
            goto label_192ff0;
        }
    }
    ctx->pc = 0x192FB4u;
    // 0x192fb4: 0x0  nop
    ctx->pc = 0x192fb4u;
    // NOP
label_192fb8:
    // 0x192fb8: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x192FB8u;
    {
        const bool branch_taken_0x192fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x192fb8) {
            ctx->pc = 0x192FC8u;
            goto label_192fc8;
        }
    }
    ctx->pc = 0x192FC0u;
    // 0x192fc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x192FC0u;
    {
        const bool branch_taken_0x192fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FC0u;
            // 0x192fc4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fc0) {
            ctx->pc = 0x192FF0u;
            goto label_192ff0;
        }
    }
    ctx->pc = 0x192FC8u;
label_192fc8:
    // 0x192fc8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x192FC8u;
    {
        const bool branch_taken_0x192fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FC8u;
            // 0x192fcc: 0x232102b  sltu        $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fc8) {
            ctx->pc = 0x192FF4u;
            goto label_192ff4;
        }
    }
    ctx->pc = 0x192FD0u;
    // 0x192fd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192FD0u;
    {
        const bool branch_taken_0x192fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FD0u;
            // 0x192fd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fd0) {
            ctx->pc = 0x192FF4u;
            goto label_192ff4;
        }
    }
    ctx->pc = 0x192FD8u;
label_192fd8:
    // 0x192fd8: 0xc064b62  jal         func_192D88
    ctx->pc = 0x192FD8u;
    SET_GPR_U32(ctx, 31, 0x192FE0u);
    ctx->pc = 0x192FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192FD8u;
            // 0x192fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192FE0u; }
        if (ctx->pc != 0x192FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192FE0u; }
        if (ctx->pc != 0x192FE0u) { return; }
    }
    ctx->pc = 0x192FE0u;
label_192fe0:
    // 0x192fe0: 0x2a21824  and         $v1, $s5, $v0
    ctx->pc = 0x192fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x192fe4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x192FE4u;
    {
        const bool branch_taken_0x192fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192FE4u;
            // 0x192fe8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192fe4) {
            ctx->pc = 0x193000u;
            goto label_193000;
        }
    }
    ctx->pc = 0x192FECu;
    // 0x192fec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x192fecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192ff0:
    // 0x192ff0: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x192ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_192ff4:
    // 0x192ff4: 0x5440ffde  bnel        $v0, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x192FF4u;
    {
        const bool branch_taken_0x192ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192ff4) {
            ctx->pc = 0x192FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x192FF4u;
            // 0x192ff8: 0x82220000  lb          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x192F70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_192f70;
        }
    }
    ctx->pc = 0x192FFCu;
label_192ffc:
    // 0x192ffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193000:
    // 0x193000: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193008: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19300c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19300cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x193010: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x193010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193014: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x193014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x193018: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x193018u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19301c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x19301cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x193020: 0x3e00008  jr          $ra
    ctx->pc = 0x193020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193020u;
            // 0x193024: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193028u;
    // 0x193028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x193028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19302c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19302cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193034: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x193034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193038: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19303c: 0x2069021  addu        $s2, $s0, $a2
    ctx->pc = 0x19303cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x193040: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x193040u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x193044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x193048: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x193048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x19304c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x19304cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193050: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x193050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x193054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193058: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x193058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x19305c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x19305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x193060: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x193060u;
    {
        const bool branch_taken_0x193060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193060u;
            // 0x193064: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193060) {
            ctx->pc = 0x19310Cu;
            goto label_19310c;
        }
    }
    ctx->pc = 0x193068u;
    // 0x193068: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x193068u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19306c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x19306cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193070: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x193070u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193074: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x193074u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_193078:
    // 0x193078: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19307c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x19307cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x193080: 0x1074000d  beq         $v1, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x193080u;
    {
        const bool branch_taken_0x193080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x193084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193080u;
            // 0x193084: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193080) {
            ctx->pc = 0x1930B8u;
            goto label_1930b8;
        }
    }
    ctx->pc = 0x193088u;
    // 0x193088: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x193088u;
    {
        const bool branch_taken_0x193088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x193088) {
            ctx->pc = 0x1930A8u;
            goto label_1930a8;
        }
    }
    ctx->pc = 0x193090u;
    // 0x193090: 0x1073000d  beq         $v1, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x193090u;
    {
        const bool branch_taken_0x193090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x193090) {
            ctx->pc = 0x1930C8u;
            goto label_1930c8;
        }
    }
    ctx->pc = 0x193098u;
    // 0x193098: 0x10760013  beq         $v1, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x193098u;
    {
        const bool branch_taken_0x193098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x193098) {
            ctx->pc = 0x1930E8u;
            goto label_1930e8;
        }
    }
    ctx->pc = 0x1930A0u;
    // 0x1930a0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1930A0u;
    {
        const bool branch_taken_0x1930a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1930A0u;
            // 0x1930a4: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930a0) {
            ctx->pc = 0x193104u;
            goto label_193104;
        }
    }
    ctx->pc = 0x1930A8u;
label_1930a8:
    // 0x1930a8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1930A8u;
    {
        const bool branch_taken_0x1930a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930a8) {
            ctx->pc = 0x1930ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1930A8u;
            // 0x1930ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193100u;
            goto label_193100;
        }
    }
    ctx->pc = 0x1930B0u;
    // 0x1930b0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1930B0u;
    {
        const bool branch_taken_0x1930b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1930B0u;
            // 0x1930b4: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930b0) {
            ctx->pc = 0x193104u;
            goto label_193104;
        }
    }
    ctx->pc = 0x1930B8u;
label_1930b8:
    // 0x1930b8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1930b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1930bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1930BCu;
    {
        const bool branch_taken_0x1930bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1930BCu;
            // 0x1930c0: 0x2180b  movn        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930bc) {
            ctx->pc = 0x193100u;
            goto label_193100;
        }
    }
    ctx->pc = 0x1930C4u;
    // 0x1930c4: 0x0  nop
    ctx->pc = 0x1930c4u;
    // NOP
label_1930c8:
    // 0x1930c8: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1930C8u;
    {
        const bool branch_taken_0x1930c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1930c8) {
            ctx->pc = 0x1930D8u;
            goto label_1930d8;
        }
    }
    ctx->pc = 0x1930D0u;
    // 0x1930d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1930D0u;
    {
        const bool branch_taken_0x1930d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1930D0u;
            // 0x1930d4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930d0) {
            ctx->pc = 0x193100u;
            goto label_193100;
        }
    }
    ctx->pc = 0x1930D8u;
label_1930d8:
    // 0x1930d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1930D8u;
    {
        const bool branch_taken_0x1930d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1930D8u;
            // 0x1930dc: 0x212102b  sltu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930d8) {
            ctx->pc = 0x193104u;
            goto label_193104;
        }
    }
    ctx->pc = 0x1930E0u;
    // 0x1930e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1930E0u;
    {
        const bool branch_taken_0x1930e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1930E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1930E0u;
            // 0x1930e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930e0) {
            ctx->pc = 0x193104u;
            goto label_193104;
        }
    }
    ctx->pc = 0x1930E8u;
label_1930e8:
    // 0x1930e8: 0xc064b62  jal         func_192D88
    ctx->pc = 0x1930E8u;
    SET_GPR_U32(ctx, 31, 0x1930F0u);
    ctx->pc = 0x1930ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1930E8u;
            // 0x1930ec: 0x2604fffc  addiu       $a0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192D88u;
    if (runtime->hasFunction(0x192D88u)) {
        auto targetFn = runtime->lookupFunction(0x192D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930F0u; }
        if (ctx->pc != 0x1930F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192D88_0x192d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1930F0u; }
        if (ctx->pc != 0x1930F0u) { return; }
    }
    ctx->pc = 0x1930F0u;
label_1930f0:
    // 0x1930f0: 0x2a21824  and         $v1, $s5, $v0
    ctx->pc = 0x1930f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x1930f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1930F4u;
    {
        const bool branch_taken_0x1930f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1930F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1930F4u;
            // 0x1930f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1930f4) {
            ctx->pc = 0x193110u;
            goto label_193110;
        }
    }
    ctx->pc = 0x1930FCu;
    // 0x1930fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1930fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193100:
    // 0x193100: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x193100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_193104:
    // 0x193104: 0x5440ffdc  bnel        $v0, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x193104u;
    {
        const bool branch_taken_0x193104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193104) {
            ctx->pc = 0x193108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193104u;
            // 0x193108: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193078;
        }
    }
    ctx->pc = 0x19310Cu;
label_19310c:
    // 0x19310c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19310cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193110:
    // 0x193110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x193118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19311c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19311cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x193120: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x193120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193124: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x193124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x193128: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x193128u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19312c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x19312cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x193130: 0x3e00008  jr          $ra
    ctx->pc = 0x193130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193130u;
            // 0x193134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193138u;
}
