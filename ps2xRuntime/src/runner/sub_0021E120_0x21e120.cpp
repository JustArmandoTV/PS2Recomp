#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E120
// Address: 0x21e120 - 0x21e210
void sub_0021E120_0x21e120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E120_0x21e120");
#endif

    switch (ctx->pc) {
        case 0x21e140u: goto label_21e140;
        case 0x21e194u: goto label_21e194;
        default: break;
    }

    ctx->pc = 0x21e120u;

    // 0x21e120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21e120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21e124: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21e124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21e128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e12c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e130: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21e130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e134: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21e134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e138: 0xc087e50  jal         func_21F940
    ctx->pc = 0x21E138u;
    SET_GPR_U32(ctx, 31, 0x21E140u);
    ctx->pc = 0x21E13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E138u;
            // 0x21e13c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F940u;
    if (runtime->hasFunction(0x21F940u)) {
        auto targetFn = runtime->lookupFunction(0x21F940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E140u; }
        if (ctx->pc != 0x21E140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F940_0x21f940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E140u; }
        if (ctx->pc != 0x21E140u) { return; }
    }
    ctx->pc = 0x21E140u;
label_21e140:
    // 0x21e140: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21e140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21e144: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x21e144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x21e148: 0x2463e8c0  addiu       $v1, $v1, -0x1740
    ctx->pc = 0x21e148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961344));
    // 0x21e14c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x21e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x21e150: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x21e150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x21e154: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x21e154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x21e158: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x21e158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x21e15c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x21e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x21e160: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x21e160u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21e164: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E164u;
    {
        const bool branch_taken_0x21e164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e164) {
            ctx->pc = 0x21E168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E164u;
            // 0x21e168: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E17Cu;
            goto label_21e17c;
        }
    }
    ctx->pc = 0x21E16Cu;
    // 0x21e16c: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x21e16cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21e170: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21e170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21e174: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x21e174u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x21e178: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x21e178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_21e17c:
    // 0x21e17c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21e180: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x21e180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x21e184: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x21e184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x21e188: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21e188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21e18c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x21E18Cu;
    SET_GPR_U32(ctx, 31, 0x21E194u);
    ctx->pc = 0x21E190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E18Cu;
            // 0x21e190: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E194u; }
        if (ctx->pc != 0x21E194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E194u; }
        if (ctx->pc != 0x21E194u) { return; }
    }
    ctx->pc = 0x21E194u;
label_21e194:
    // 0x21e194: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x21e194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x21e198: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21E198u;
    {
        const bool branch_taken_0x21e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E198u;
            // 0x21e19c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e198) {
            ctx->pc = 0x21E1ECu;
            goto label_21e1ec;
        }
    }
    ctx->pc = 0x21E1A0u;
    // 0x21e1a0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21e1a4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x21e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x21e1a8: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x21e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
    // 0x21e1ac: 0x2484d430  addiu       $a0, $a0, -0x2BD0
    ctx->pc = 0x21e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956080));
    // 0x21e1b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21e1b4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x21e1b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e1bc: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x21e1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x21e1c0: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x21e1c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x21e1c4: 0x2484e650  addiu       $a0, $a0, -0x19B0
    ctx->pc = 0x21e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960720));
    // 0x21e1c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x21e1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x21e1cc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x21e1d0: 0x2463e8e0  addiu       $v1, $v1, -0x1720
    ctx->pc = 0x21e1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961376));
    // 0x21e1d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x21e1d8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x21e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x21e1dc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x21e1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x21e1e0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x21e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x21e1e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21e1e8: 0xac510018  sw          $s1, 0x18($v0)
    ctx->pc = 0x21e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
label_21e1ec:
    // 0x21e1ec: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x21e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x21e1f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21e1f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21e1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e1f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e1fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e200: 0x3e00008  jr          $ra
    ctx->pc = 0x21E200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E200u;
            // 0x21e204: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E208u;
    // 0x21e208: 0x0  nop
    ctx->pc = 0x21e208u;
    // NOP
    // 0x21e20c: 0x0  nop
    ctx->pc = 0x21e20cu;
    // NOP
}
