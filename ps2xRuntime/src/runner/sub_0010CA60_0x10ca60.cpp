#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CA60
// Address: 0x10ca60 - 0x10cb10
void sub_0010CA60_0x10ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CA60_0x10ca60");
#endif

    switch (ctx->pc) {
        case 0x10ca88u: goto label_10ca88;
        case 0x10cab8u: goto label_10cab8;
        case 0x10caccu: goto label_10cacc;
        default: break;
    }

    ctx->pc = 0x10ca60u;

    // 0x10ca60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10ca64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10ca68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ca6c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ca70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ca74: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x10ca74u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x10ca78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10ca7c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10ca7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x10ca80: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x10CA80u;
    {
        const bool branch_taken_0x10ca80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CA80u;
            // 0x10ca84: 0x3c12005d  lui         $s2, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca80) {
            ctx->pc = 0x10CAACu;
            goto label_10caac;
        }
    }
    ctx->pc = 0x10CA88u;
label_10ca88:
    // 0x10ca88: 0x42000039  di
    ctx->pc = 0x10ca88u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x10ca8c: 0x40f  sync.p
    ctx->pc = 0x10ca8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ca90: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10ca94: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10ca98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10ca98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10ca9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CA9Cu;
    {
        const bool branch_taken_0x10ca9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ca9c) {
            ctx->pc = 0x10CA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ca88;
        }
    }
    ctx->pc = 0x10CAA4u;
    // 0x10caa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10CAA4u;
    {
        const bool branch_taken_0x10caa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CAA4u;
            // 0x10caa8: 0x8e42e394  lw          $v0, -0x1C6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10caa4) {
            ctx->pc = 0x10CAB0u;
            goto label_10cab0;
        }
    }
    ctx->pc = 0x10CAACu;
label_10caac:
    // 0x10caac: 0x8e42e394  lw          $v0, -0x1C6C($s2)
    ctx->pc = 0x10caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960020)));
label_10cab0:
    // 0x10cab0: 0xc0430d0  jal         func_10C340
    ctx->pc = 0x10CAB0u;
    SET_GPR_U32(ctx, 31, 0x10CAB8u);
    ctx->pc = 0x10CAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CAB0u;
            // 0x10cab4: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C340u;
    if (runtime->hasFunction(0x10C340u)) {
        auto targetFn = runtime->lookupFunction(0x10C340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CAB8u; }
        if (ctx->pc != 0x10CAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C340_0x10c340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CAB8u; }
        if (ctx->pc != 0x10CAB8u) { return; }
    }
    ctx->pc = 0x10CAB8u;
label_10cab8:
    // 0x10cab8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x10cab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x10cabc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10CABCu;
    {
        const bool branch_taken_0x10cabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CABCu;
            // 0x10cac0: 0x8e42e394  lw          $v0, -0x1C6C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cabc) {
            ctx->pc = 0x10CAE8u;
            goto label_10cae8;
        }
    }
    ctx->pc = 0x10CAC4u;
    // 0x10cac4: 0xc049d8e  jal         func_127638
    ctx->pc = 0x10CAC4u;
    SET_GPR_U32(ctx, 31, 0x10CACCu);
    ctx->pc = 0x127638u;
    if (runtime->hasFunction(0x127638u)) {
        auto targetFn = runtime->lookupFunction(0x127638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CACCu; }
        if (ctx->pc != 0x10CACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127638_0x127638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CACCu; }
        if (ctx->pc != 0x10CACCu) { return; }
    }
    ctx->pc = 0x10CACCu;
label_10cacc:
    // 0x10cacc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10caccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10cad0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CAD0u;
    {
        const bool branch_taken_0x10cad0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CAD0u;
            // 0x10cad4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cad0) {
            ctx->pc = 0x10CADCu;
            goto label_10cadc;
        }
    }
    ctx->pc = 0x10CAD8u;
    // 0x10cad8: 0x42000038  ei
    ctx->pc = 0x10cad8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_10cadc:
    // 0x10cadc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10cae0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10CAE0u;
    {
        const bool branch_taken_0x10cae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CAE0u;
            // 0x10cae4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cae0) {
            ctx->pc = 0x10CAF4u;
            goto label_10caf4;
        }
    }
    ctx->pc = 0x10CAE8u;
label_10cae8:
    // 0x10cae8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CAE8u;
    {
        const bool branch_taken_0x10cae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CAE8u;
            // 0x10caec: 0xae50e394  sw          $s0, -0x1C6C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294960020), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cae8) {
            ctx->pc = 0x10CAF4u;
            goto label_10caf4;
        }
    }
    ctx->pc = 0x10CAF0u;
    // 0x10caf0: 0x42000038  ei
    ctx->pc = 0x10caf0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_10caf4:
    // 0x10caf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10caf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10caf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10caf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cafc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10cafcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cb00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cb04: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CB04u;
            // 0x10cb08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CB0Cu;
    // 0x10cb0c: 0x0  nop
    ctx->pc = 0x10cb0cu;
    // NOP
}
