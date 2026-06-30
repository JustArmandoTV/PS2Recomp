#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDBA8
// Address: 0x1bdba8 - 0x1bdc20
void sub_001BDBA8_0x1bdba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDBA8_0x1bdba8");
#endif

    switch (ctx->pc) {
        case 0x1bdbc8u: goto label_1bdbc8;
        case 0x1bdc00u: goto label_1bdc00;
        default: break;
    }

    ctx->pc = 0x1bdba8u;

    // 0x1bdba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdbac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bdbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bdbb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bdbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bdbb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bdbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bdbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bdbc0: 0xc06fd96  jal         func_1BF658
    ctx->pc = 0x1BDBC0u;
    SET_GPR_U32(ctx, 31, 0x1BDBC8u);
    ctx->pc = 0x1BDBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBC0u;
            // 0x1bdbc4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF658u;
    if (runtime->hasFunction(0x1BF658u)) {
        auto targetFn = runtime->lookupFunction(0x1BF658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBC8u; }
        if (ctx->pc != 0x1BDBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF658_0x1bf658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDBC8u; }
        if (ctx->pc != 0x1BDBC8u) { return; }
    }
    ctx->pc = 0x1BDBC8u;
label_1bdbc8:
    // 0x1bdbc8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1bdbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1bdbcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdbd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbd4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1bdbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bdbd8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDBD8u;
    {
        const bool branch_taken_0x1bdbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BDBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBD8u;
            // 0x1bdbdc: 0x24c6b448  addiu       $a2, $a2, -0x4BB8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdbd8) {
            ctx->pc = 0x1BDBF8u;
            goto label_1bdbf8;
        }
    }
    ctx->pc = 0x1BDBE0u;
    // 0x1bdbe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdbe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bdbe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bdbe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdbe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdbec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bdbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdbf0: 0x806f9cc  j           func_1BE730
    ctx->pc = 0x1BDBF0u;
    ctx->pc = 0x1BDBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDBF0u;
            // 0x1bdbf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE730_0x1be730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BDBF8u;
label_1bdbf8:
    // 0x1bdbf8: 0xc06fee4  jal         func_1BFB90
    ctx->pc = 0x1BDBF8u;
    SET_GPR_U32(ctx, 31, 0x1BDC00u);
    ctx->pc = 0x1BFB90u;
    if (runtime->hasFunction(0x1BFB90u)) {
        auto targetFn = runtime->lookupFunction(0x1BFB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC00u; }
        if (ctx->pc != 0x1BDC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFB90_0x1bfb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDC00u; }
        if (ctx->pc != 0x1BDC00u) { return; }
    }
    ctx->pc = 0x1BDC00u;
label_1bdc00:
    // 0x1bdc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdc08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bdc08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bdc0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdc0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdc10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bdc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdc14: 0x806f66e  j           func_1BD9B8
    ctx->pc = 0x1BDC14u;
    ctx->pc = 0x1BDC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDC14u;
            // 0x1bdc18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BD9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BDC1Cu;
    // 0x1bdc1c: 0x0  nop
    ctx->pc = 0x1bdc1cu;
    // NOP
}
