#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170928
// Address: 0x170928 - 0x1709b0
void sub_00170928_0x170928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170928_0x170928");
#endif

    switch (ctx->pc) {
        case 0x17095cu: goto label_17095c;
        default: break;
    }

    ctx->pc = 0x170928u;

    // 0x170928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17092c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170930: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x170930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17093c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x170940: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x170940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170944: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x170944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x170948: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x170948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17094c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17094cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x170950: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x170950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x170954: 0xc05c834  jal         func_1720D0
    ctx->pc = 0x170954u;
    SET_GPR_U32(ctx, 31, 0x17095Cu);
    ctx->pc = 0x170958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170954u;
            // 0x170958: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17095Cu; }
        if (ctx->pc != 0x17095Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17095Cu; }
        if (ctx->pc != 0x17095Cu) { return; }
    }
    ctx->pc = 0x17095Cu;
label_17095c:
    // 0x17095c: 0x662207ff  daddiu      $v0, $s1, 0x7FF
    ctx->pc = 0x17095cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)2047);
    // 0x170960: 0x66250ffe  daddiu      $a1, $s1, 0xFFE
    ctx->pc = 0x170960u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4094);
    // 0x170964: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x170964u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x170968: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x170968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17096c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x17096cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x170970: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x170970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x170974: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x170974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x170978: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x170978u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x17097c: 0xae130054  sw          $s3, 0x54($s0)
    ctx->pc = 0x17097cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 19));
    // 0x170980: 0xae140058  sw          $s4, 0x58($s0)
    ctx->pc = 0x170980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 20));
    // 0x170984: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x170984u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x170988: 0xa2040049  sb          $a0, 0x49($s0)
    ctx->pc = 0x170988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x17098c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17098cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x170990: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x170990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170998: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x170998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17099c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17099cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1709a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1709a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1709a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1709a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1709a8: 0x805c83a  j           func_1720E8
    ctx->pc = 0x1709A8u;
    ctx->pc = 0x1709ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1709A8u;
            // 0x1709ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001720E8_0x1720e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1709B0u;
}
