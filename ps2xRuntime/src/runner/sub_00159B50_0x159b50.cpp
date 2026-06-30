#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00159B50
// Address: 0x159b50 - 0x159c10
void sub_00159B50_0x159b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159B50_0x159b50");
#endif

    ctx->pc = 0x159b50u;

    // 0x159b50: 0x54a60004  bnel        $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x159B50u;
    {
        const bool branch_taken_0x159b50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x159b50) {
            ctx->pc = 0x159B54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159B50u;
            // 0x159b54: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159B64u;
            goto label_159b64;
        }
    }
    ctx->pc = 0x159B58u;
    // 0x159b58: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x159b58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x159b5c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x159B5Cu;
    {
        const bool branch_taken_0x159b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B5Cu;
            // 0x159b60: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b5c) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159B64u;
label_159b64:
    // 0x159b64: 0x50830012  beql        $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x159B64u;
    {
        const bool branch_taken_0x159b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x159b64) {
            ctx->pc = 0x159B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159B64u;
            // 0x159b68: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159BB0u;
            goto label_159bb0;
        }
    }
    ctx->pc = 0x159B6Cu;
    // 0x159b6c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x159b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x159b70: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x159B70u;
    {
        const bool branch_taken_0x159b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x159b70) {
            ctx->pc = 0x159B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159B70u;
            // 0x159b74: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159BA8u;
            goto label_159ba8;
        }
    }
    ctx->pc = 0x159B78u;
    // 0x159b78: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x159b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x159b7c: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x159B7Cu;
    {
        const bool branch_taken_0x159b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x159b7c) {
            ctx->pc = 0x159B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159B7Cu;
            // 0x159b80: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159BA0u;
            goto label_159ba0;
        }
    }
    ctx->pc = 0x159B84u;
    // 0x159b84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x159b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x159b88: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159B88u;
    {
        const bool branch_taken_0x159b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x159b88) {
            ctx->pc = 0x159B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159B88u;
            // 0x159b8c: 0x24090080  addiu       $t1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159B98u;
            goto label_159b98;
        }
    }
    ctx->pc = 0x159B90u;
    // 0x159b90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x159B90u;
    {
        const bool branch_taken_0x159b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B90u;
            // 0x159b94: 0xa6082b  sltu        $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b90) {
            ctx->pc = 0x159BB8u;
            goto label_159bb8;
        }
    }
    ctx->pc = 0x159B98u;
label_159b98:
    // 0x159b98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x159B98u;
    {
        const bool branch_taken_0x159b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159B98u;
            // 0x159b9c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159b98) {
            ctx->pc = 0x159BB4u;
            goto label_159bb4;
        }
    }
    ctx->pc = 0x159BA0u;
label_159ba0:
    // 0x159ba0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x159BA0u;
    {
        const bool branch_taken_0x159ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159BA0u;
            // 0x159ba4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ba0) {
            ctx->pc = 0x159BB4u;
            goto label_159bb4;
        }
    }
    ctx->pc = 0x159BA8u;
label_159ba8:
    // 0x159ba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159BA8u;
    {
        const bool branch_taken_0x159ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159BA8u;
            // 0x159bac: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ba8) {
            ctx->pc = 0x159BB4u;
            goto label_159bb4;
        }
    }
    ctx->pc = 0x159BB0u;
label_159bb0:
    // 0x159bb0: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x159bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_159bb4:
    // 0x159bb4: 0xa6082b  sltu        $at, $a1, $a2
    ctx->pc = 0x159bb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_159bb8:
    // 0x159bb8: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x159BB8u;
    {
        const bool branch_taken_0x159bb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159bb8) {
            ctx->pc = 0x159BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159BB8u;
            // 0x159bbc: 0xc5082b  sltu        $at, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x159BE0u;
            goto label_159be0;
        }
    }
    ctx->pc = 0x159BC0u;
    // 0x159bc0: 0xa9082b  sltu        $at, $a1, $t1
    ctx->pc = 0x159bc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x159bc4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x159BC4u;
    {
        const bool branch_taken_0x159bc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159bc4) {
            ctx->pc = 0x159BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159BC4u;
            // 0x159bc8: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159BD8u;
            goto label_159bd8;
        }
    }
    ctx->pc = 0x159BCCu;
    // 0x159bcc: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x159bccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x159bd0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x159BD0u;
    {
        const bool branch_taken_0x159bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159BD0u;
            // 0x159bd4: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bd0) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159BD8u;
label_159bd8:
    // 0x159bd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x159BD8u;
    {
        const bool branch_taken_0x159bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159BD8u;
            // 0x159bdc: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159bd8) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159BE0u;
label_159be0:
    // 0x159be0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x159BE0u;
    {
        const bool branch_taken_0x159be0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159be0) {
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159BE8u;
    // 0x159be8: 0xa9082b  sltu        $at, $a1, $t1
    ctx->pc = 0x159be8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x159bec: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x159BECu;
    {
        const bool branch_taken_0x159bec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159bec) {
            ctx->pc = 0x159BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159BECu;
            // 0x159bf0: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159BF8u;
            goto label_159bf8;
        }
    }
    ctx->pc = 0x159BF4u;
    // 0x159bf4: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x159bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
label_159bf8:
    // 0x159bf8: 0xc4082b  sltu        $at, $a2, $a0
    ctx->pc = 0x159bf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x159bfc: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x159BFCu;
    {
        const bool branch_taken_0x159bfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159bfc) {
            ctx->pc = 0x159C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159BFCu;
            // 0x159c00: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x159C08u;
            goto label_159c08;
        }
    }
    ctx->pc = 0x159C04u;
    // 0x159c04: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x159c04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
label_159c08:
    // 0x159c08: 0x3e00008  jr          $ra
    ctx->pc = 0x159C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159C10u;
}
