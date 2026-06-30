#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9E80
// Address: 0x4a9e80 - 0x4a9f70
void sub_004A9E80_0x4a9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9E80_0x4a9e80");
#endif

    ctx->pc = 0x4a9e80u;

    // 0x4a9e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a9e84: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x4a9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4a9e88: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x4a9e88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x4a9e8c: 0x8caa0014  lw          $t2, 0x14($a1)
    ctx->pc = 0x4a9e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4a9e90: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4a9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a9e94: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x4a9e94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4a9e98: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x4a9e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4a9e9c: 0x349c2  srl         $t1, $v1, 7
    ctx->pc = 0x4a9e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x4a9ea0: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x4a9ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x4a9ea4: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x4a9ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x4a9ea8: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4a9ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4a9eac: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4a9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x4a9eb0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4a9eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4a9eb4: 0x1473021  addu        $a2, $t2, $a3
    ctx->pc = 0x4a9eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x4a9eb8: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x4a9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x4a9ebc: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x4a9ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x4a9ec0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9EC0u;
    {
        const bool branch_taken_0x4a9ec0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x4A9EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9EC0u;
            // 0x4a9ec4: 0x64083  sra         $t0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ec0) {
            ctx->pc = 0x4A9ED0u;
            goto label_4a9ed0;
        }
    }
    ctx->pc = 0x4A9EC8u;
    // 0x4a9ec8: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x4a9ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x4a9ecc: 0x64083  sra         $t0, $a2, 2
    ctx->pc = 0x4a9eccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 6), 2));
label_4a9ed0:
    // 0x4a9ed0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4a9ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9ed4: 0xca3823  subu        $a3, $a2, $t2
    ctx->pc = 0x4a9ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x4a9ed8: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9ED8u;
    {
        const bool branch_taken_0x4a9ed8 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x4A9EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9ED8u;
            // 0x4a9edc: 0x73083  sra         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ed8) {
            ctx->pc = 0x4A9EE8u;
            goto label_4a9ee8;
        }
    }
    ctx->pc = 0x4A9EE0u;
    // 0x4a9ee0: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x4a9ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x4a9ee4: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4a9ee4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4a9ee8:
    // 0x4a9ee8: 0x1263821  addu        $a3, $t1, $a2
    ctx->pc = 0x4a9ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x4a9eec: 0x4e30003  bgezl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9EECu;
    {
        const bool branch_taken_0x4a9eec = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x4a9eec) {
            ctx->pc = 0x4A9EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9EECu;
            // 0x4a9ef0: 0xe8302a  slt         $a2, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9EFCu;
            goto label_4a9efc;
        }
    }
    ctx->pc = 0x4A9EF4u;
    // 0x4a9ef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9EF4u;
    {
        const bool branch_taken_0x4a9ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9EF4u;
            // 0x4a9ef8: 0xe83821  addu        $a3, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9ef4) {
            ctx->pc = 0x4A9F08u;
            goto label_4a9f08;
        }
    }
    ctx->pc = 0x4A9EFCu;
label_4a9efc:
    // 0x4a9efc: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9EFCu;
    {
        const bool branch_taken_0x4a9efc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a9efc) {
            ctx->pc = 0x4A9F00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9EFCu;
            // 0x4a9f00: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9F0Cu;
            goto label_4a9f0c;
        }
    }
    ctx->pc = 0x4A9F04u;
    // 0x4a9f04: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x4a9f04u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4a9f08:
    // 0x4a9f08: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4a9f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4a9f0c:
    // 0x4a9f0c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x4a9f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4a9f10: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x4a9f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x4a9f14: 0xc75021  addu        $t2, $a2, $a3
    ctx->pc = 0x4a9f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x4a9f18: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x4a9f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x4a9f1c: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x4a9f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a9f20: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x4a9f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a9f24: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9F24u;
    {
        const bool branch_taken_0x4a9f24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9F24u;
            // 0x4a9f28: 0x8fa90004  lw          $t1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9f24) {
            ctx->pc = 0x4A9F34u;
            goto label_4a9f34;
        }
    }
    ctx->pc = 0x4A9F2Cu;
    // 0x4a9f2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A9F2Cu;
    {
        const bool branch_taken_0x4a9f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9F2Cu;
            // 0x4a9f30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9f2c) {
            ctx->pc = 0x4A9F38u;
            goto label_4a9f38;
        }
    }
    ctx->pc = 0x4A9F34u;
label_4a9f34:
    // 0x4a9f34: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x4a9f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4a9f38:
    // 0x4a9f38: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x4a9f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x4a9f3c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x4a9f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x4a9f40: 0xac890004  sw          $t1, 0x4($a0)
    ctx->pc = 0x4a9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 9));
    // 0x4a9f44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a9f48: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x4a9f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x4a9f4c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x4a9f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4a9f50: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x4a9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x4a9f54: 0x24c30200  addiu       $v1, $a2, 0x200
    ctx->pc = 0x4a9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x4a9f58: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x4a9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x4a9f5c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x4a9f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x4a9f60: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9F60u;
            // 0x4a9f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9F68u;
    // 0x4a9f68: 0x0  nop
    ctx->pc = 0x4a9f68u;
    // NOP
    // 0x4a9f6c: 0x0  nop
    ctx->pc = 0x4a9f6cu;
    // NOP
}
