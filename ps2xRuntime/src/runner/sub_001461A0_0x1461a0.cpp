#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001461A0
// Address: 0x1461a0 - 0x1462b0
void sub_001461A0_0x1461a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001461A0_0x1461a0");
#endif

    switch (ctx->pc) {
        case 0x146244u: goto label_146244;
        case 0x14626cu: goto label_14626c;
        case 0x146290u: goto label_146290;
        case 0x14629cu: goto label_14629c;
        default: break;
    }

    ctx->pc = 0x1461a0u;

    // 0x1461a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1461a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1461a4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1461a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1461a8: 0x25100  sll         $t2, $v0, 4
    ctx->pc = 0x1461a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1461ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1461acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1461b0: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x1461b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x1461b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1461b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1461b8: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x1461b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1461bc: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x1461bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1461c0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1461c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1461c4: 0x30890001  andi        $t1, $a0, 0x1
    ctx->pc = 0x1461c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1461c8: 0x90452058  lbu         $a1, 0x2058($v0)
    ctx->pc = 0x1461c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x1461cc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1461ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1461d0: 0x36040  sll         $t4, $v1, 1
    ctx->pc = 0x1461d0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1461d4: 0x240bfff1  addiu       $t3, $zero, -0xF
    ctx->pc = 0x1461d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1461d8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1461d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1461dc: 0x3c06005d  lui         $a2, 0x5D
    ctx->pc = 0x1461dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)93 << 16));
    // 0x1461e0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1461e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1461e4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1461e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1461e8: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x1461e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x1461ec: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1461ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
    // 0x1461f0: 0xa0642058  sb          $a0, 0x2058($v1)
    ctx->pc = 0x1461f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8280), (uint8_t)GPR_U32(ctx, 4));
    // 0x1461f4: 0x2409f00f  addiu       $t1, $zero, -0xFF1
    ctx->pc = 0x1461f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x1461f8: 0x904d2058  lbu         $t5, 0x2058($v0)
    ctx->pc = 0x1461f8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x1461fc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1461fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x146200: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x146200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x146204: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x146204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x146208: 0xaf808314  sw          $zero, -0x7CEC($gp)
    ctx->pc = 0x146208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 0));
    // 0x14620c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14620cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146210: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x146210u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x146214: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x146214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x146218: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x146218u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x14621c: 0xa0cb2058  sb          $t3, 0x2058($a2)
    ctx->pc = 0x14621cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8280), (uint8_t)GPR_U32(ctx, 11));
    // 0x146220: 0x94a52058  lhu         $a1, 0x2058($a1)
    ctx->pc = 0x146220u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8280)));
    // 0x146224: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x146224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x146228: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x146228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x14622c: 0xa4852058  sh          $a1, 0x2058($a0)
    ctx->pc = 0x14622cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8280), (uint16_t)GPR_U32(ctx, 5));
    // 0x146230: 0x90632059  lbu         $v1, 0x2059($v1)
    ctx->pc = 0x146230u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8281)));
    // 0x146234: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x146234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x146238: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x146238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x14623c: 0xa0432059  sb          $v1, 0x2059($v0)
    ctx->pc = 0x14623cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8281), (uint8_t)GPR_U32(ctx, 3));
    // 0x146240: 0x26020047  addiu       $v0, $s0, 0x47
    ctx->pc = 0x146240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 71));
label_146244:
    // 0x146244: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x146244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x146248: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x146248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14624c: 0x8f858314  lw          $a1, -0x7CEC($gp)
    ctx->pc = 0x14624cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x146250: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x146250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x146254: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x146254u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x146258: 0xdc472058  ld          $a3, 0x2058($v0)
    ctx->pc = 0x146258u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8280)));
    // 0x14625c: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x14625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x146260: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x146260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x146264: 0xc057540  jal         func_15D500
    ctx->pc = 0x146264u;
    SET_GPR_U32(ctx, 31, 0x14626Cu);
    ctx->pc = 0x146268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146264u;
            // 0x146268: 0xaf828314  sw          $v0, -0x7CEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14626Cu; }
        if (ctx->pc != 0x14626Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14626Cu; }
        if (ctx->pc != 0x14626Cu) { return; }
    }
    ctx->pc = 0x14626Cu;
label_14626c:
    // 0x14626c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14626cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x146270: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x146270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x146274: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x146274u;
    {
        const bool branch_taken_0x146274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146274) {
            ctx->pc = 0x146278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146274u;
            // 0x146278: 0x26020047  addiu       $v0, $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 71));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146244u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146244;
        }
    }
    ctx->pc = 0x14627Cu;
    // 0x14627c: 0x8f868314  lw          $a2, -0x7CEC($gp)
    ctx->pc = 0x14627cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935316)));
    // 0x146280: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x146280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x146284: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x146284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
    // 0x146288: 0xc05750c  jal         func_15D430
    ctx->pc = 0x146288u;
    SET_GPR_U32(ctx, 31, 0x146290u);
    ctx->pc = 0x14628Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146288u;
            // 0x14628c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146290u; }
        if (ctx->pc != 0x146290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146290u; }
        if (ctx->pc != 0x146290u) { return; }
    }
    ctx->pc = 0x146290u;
label_146290:
    // 0x146290: 0xaf828310  sw          $v0, -0x7CF0($gp)
    ctx->pc = 0x146290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935312), GPR_U32(ctx, 2));
    // 0x146294: 0xc057528  jal         func_15D4A0
    ctx->pc = 0x146294u;
    SET_GPR_U32(ctx, 31, 0x14629Cu);
    ctx->pc = 0x146298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146294u;
            // 0x146298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14629Cu; }
        if (ctx->pc != 0x14629Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14629Cu; }
        if (ctx->pc != 0x14629Cu) { return; }
    }
    ctx->pc = 0x14629Cu;
label_14629c:
    // 0x14629c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14629cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1462a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1462a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1462a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1462A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1462A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1462A4u;
            // 0x1462a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1462ACu;
    // 0x1462ac: 0x0  nop
    ctx->pc = 0x1462acu;
    // NOP
}
